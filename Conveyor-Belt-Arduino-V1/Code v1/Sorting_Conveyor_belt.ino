#include <Servo.h>

// ====== L298N ======
const int ENA = 3;
const int IN1 = 8;
const int IN2 = 9;

// ====== Servos ======
Servo servo1;  // D5
Servo servo2;  // D4

// ====== GY-31 (TCS3200) ======
const int S0 = A0;
const int S1 = A1;
const int S2 = A2;
const int S3 = A3;
const int OUT_PIN = 2;

// ---------- FIX: atributo ISR portable ----------
#if defined(ESP32) || defined(ESP8266)
  #define ISR_ATTR IRAM_ATTR
#else
  #define ISR_ATTR
#endif

volatile unsigned long pulseCount = 0;
void ISR_ATTR countPulse() { pulseCount++; }

const unsigned long SAMPLE_MS = 100;

// Calibración
unsigned int fMin[3] = { 200, 200, 200 };
unsigned int fMax[3] = { 2500, 2500, 2500 };

// --- Función de medición ---
unsigned int measureFreq(uint8_t ch) {
  switch (ch) {
    case 0: digitalWrite(S2, LOW);  digitalWrite(S3, LOW);  break;  // R
    case 1: digitalWrite(S2, HIGH); digitalWrite(S3, HIGH); break;  // G
    case 2: digitalWrite(S2, LOW);  digitalWrite(S3, HIGH); break;  // B
  }

  pulseCount = 0;
  unsigned long t0 = millis();
  while (millis() - t0 < SAMPLE_MS) { /* conteo */ }
  return (unsigned int)((pulseCount * 1000UL) / SAMPLE_MS);
}

uint8_t freqTo8bit(unsigned int f, int ch) {
  if (f < fMin[ch]) f = fMin[ch];
  if (f > fMax[ch]) f = fMax[ch];
  return (uint8_t)map((long)f, (long)fMin[ch], (long)fMax[ch], 0, 255);
}

// --- Funciones auxiliares ---
void motorStart(int pwm) {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, pwm);
}
void motorStop() {
  analogWrite(ENA, 0);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
}

void setup() {
  Serial.begin(115200);

  // --- Motor ---
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  motorStop();

  // --- Servos ---
  servo1.attach(5);
  servo2.attach(4);
  servo1.write(90);
  servo2.write(90);

  // --- Sensor ---
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(OUT_PIN, INPUT);

  digitalWrite(S0, HIGH);
  digitalWrite(S1, LOW);
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);

  attachInterrupt(digitalPinToInterrupt(OUT_PIN), countPulse, RISING);

  Serial.println("Sistema de Sorting de Colores Listo");
}

void loop() {
  // --- 1. Espera inicial ---
  motorStop();
  servo1.write(90);
  servo2.write(90);
  Serial.println("\nEsperando objeto...");

  delay(2000);  // simula colocación del objeto

  // --- 2. Medición de color ---
  unsigned int fR = measureFreq(0);
  unsigned int fG = measureFreq(1);
  unsigned int fB = measureFreq(2);

  uint8_t R = freqTo8bit(fR, 0);
  uint8_t G = freqTo8bit(fG, 1);
  uint8_t B = freqTo8bit(fB, 2);

  const uint8_t T_dark = 25;
  const uint8_t T_white = 200;
  const uint8_t T_color = 40;

  const char* color = "INDEFINIDO";
  int accion = 0;

  if (R < T_dark && G < T_dark && B < T_dark) color = "NEGRO";
  else if (R > T_white && G > T_white && B > T_white) color = "BLANCO";
  else if (R > G + T_color && R > B + T_color) { color = "ROJO"; accion = 1; }
  else if (G > R + T_color && G > B + T_color) { color = "VERDE"; accion = 2; }
  else if (B > R + T_color && B > G + T_color) color = "AZUL";

  Serial.print("RGB: ");
  Serial.print(R); Serial.print(", ");
  Serial.print(G); Serial.print(", ");
  Serial.print(B);
  Serial.print(" | Color detectado: "); Serial.println(color);

  // --- 3. Acción según color ---
  switch (accion) {
    case 1:
      Serial.println("Servo1 → 50° (rojo)");
      servo1.write(50);
      break;
    case 2:
      Serial.println("Servo2 → 50° (verde)");
      servo2.write(50);
      break;
    default:
      Serial.println("Sin acción (color no clasificado)");
      break;
  }

  delay(500);

  // --- 4. Mover cinta 10s ---
  Serial.println("Cinta en movimiento...");
  motorStart(100);  // PWM = 100
  delay(10000);
  motorStop();

  // --- 5. Reset servos ---
  servo1.write(90);
  servo2.write(90);

  Serial.println("Ciclo completo.\n");
  delay(2000); // pausa antes del siguiente ciclo
}
