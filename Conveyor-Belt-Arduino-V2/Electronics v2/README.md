# Conveyor Belt Arduino DIY - Electronics & Wiring ⚡🔌

*Author: Fernando Navarrete* ✍️

## English Version 🇺🇸

Welcome to the **Electronics v1** directory! 🔋

This section covers the physical "nervous system" of the Sorting Conveyor Belt. Here you will find the schematic diagrams, wiring logic, and essential tips for assembling the electronic components listed in the **Bill of Materials (BOM)**.

### 📜 Component Checklist

These are the core electronic components you will be connecting. For full specifications, refer to the [BOM v1](../BOM%20v1/README.md).

* **Microcontroller:** Arduino Uno R3 (The Brain).
* **Actuators:**
    * 1x DC Motor (Yellow Gearbox) + L298N Driver.
    * 2x SG90 Servomotors (Sorting mechanisms).
* **Sensors:**
    * 1x TCS3200 / GY-31 (Color Sensor).
* **Power:**
    * 2x 18650 Li-Ion Batteries (Series connection for ~7.4V).
    * 1x 2-Pin Switch.

---

### 🗺️ Electronic Diagram

> **📄 VIEW DIAGRAM:**
> Please open the attached PDF file **`Electronic_diagram_v1.pdf`** located in this folder to view the full detailed schematic.

### 🔌 Wiring Guide & Best Practices

#### 1. The Pinout Map
Ensure these connections match the code provided in the `Code v1` folder.

| Component | Pin Label | Arduino Pin | Description |
| :--- | :--- | :---: | :--- |
| **L298N Driver** | ENA | **D3** | PWM Speed Control |
| | IN1 | **D8** | Direction Logic A |
| | IN2 | **D9** | Direction Logic B |
| **Servos** | Signal (Orange) | **D5** | Servo 1 (Red Sorter) |
| | Signal (Orange) | **D4** | Servo 2 (Green Sorter) |
| **TCS3200** | S0, S1 | **A0, A1** | Freq Scaling |
| | S2, S3 | **A2, A3** | Filter Selection |
| | OUT | **D2** | Sensor Output (Interrupt) |

#### 2. Critical Assembly Tip: Soldering & Common Ground ⚠️

**The Challenge:**
The Arduino Uno has limited power pins (usually 3 GND pins and one 5V pin). However, this project requires:
* **4 GND connections:** (L298N, Sensor, Servo 1, Servo 2).
* **3 5V connections:** (Sensor, Servo 1, Servo 2).

**The Solution:**
You cannot plug everything directly into the headers. You must create **Common Connection Points** using a soldering iron and tin.

1.  **Common Ground (GND):**
    * Take the GND wires from the **Sensor**, **Servo 1**, and **Servo 2**.
    * Strip the ends and twist them together with a **single extra wire**.
    * **Solder** this junction and cover it with **Heat Shrink Tubing** (or electrical tape) to prevent short circuits.
    * Connect the other end of the single extra wire to a **GND** pin on the Arduino.
    * *Note:* The L298N Logic GND also needs to connect to the Arduino GND.

2.  **5V Distribution:**
    * Repeat the process above for the **VCC (5V)** wires of the Sensor and Servos.
    * Solder them into a single line connecting to the Arduino **5V** pin.

#### 3. Power Path
* **Motors:** Powered directly by the Batteries via the L298N (12V Input terminal).
* **Logic (Arduino):** Can be powered via USB for testing, or via the L298N's 5V output if the jumper is enabled (connect L298N 5V -> Arduino 5V/Vin).
* **Switch:** Must break the **Positive (+)** cable coming from the battery pack before it reaches the L298N.

---

## Versión en Español 🇪🇸

*Autor: Fernando Navarrete* ✍️

¡Bienvenido al directorio **Electronics v1**! 🔋

Esta sección cubre el "sistema nervioso" físico de la Cinta Transportadora Clasificadora. Aquí encontrarás los diagramas esquemáticos, la lógica de cableado y consejos esenciales para ensamblar los componentes electrónicos listados en la **Lista de Materiales (BOM)**.

### 📜 Lista de Verificación de Componentes

Estos son los componentes electrónicos principales que conectarás. Para especificaciones completas, revisa el [BOM v1](../BOM%20v1/README.md).

* **Microcontrolador:** Arduino Uno R3 (El Cerebro).
* **Actuadores:**
    * 1x Motor DC (Caja amarilla) + Driver L298N.
    * 2x Servomotores SG90 (Mecanismos de clasificación).
* **Sensores:**
    * 1x TCS3200 / GY-31 (Sensor de Color).
* **Energía:**
    * 2x Baterías Li-Ion 18650 (Conexión en serie para ~7.4V).
    * 1x Interruptor de 2 pines.

---

### 🗺️ Diagrama Electrónico

> **📄 VER DIAGRAMA:**
> Por favor, abrir el archivo PDF adjunto **`Electronic_diagram_v1.pdf`** en esta carpeta para ver el esquema detallado.

### 🔌 Guía de Cableado y Buenas Prácticas

#### 1. Mapa de Pines (Pinout)
Asegúrate de que estas conexiones coincidan con el código provisto en la carpeta `Code v1`.

| Componente | Etiqueta Pin | Pin Arduino | Descripción |
| :--- | :--- | :---: | :--- |
| **Driver L298N** | ENA | **D3** | Control Velocidad PWM |
| | IN1 | **D8** | Lógica Dirección A |
| | IN2 | **D9** | Lógica Dirección B |
| **Servos** | Señal (Naranja) | **D5** | Servo 1 (Clasificador Rojo) |
| | Señal (Naranja) | **D4** | Servo 2 (Clasificador Verde) |
| **TCS3200** | S0, S1 | **A0, A1** | Escala Frecuencia |
| | S2, S3 | **A2, A3** | Selección Filtro |
| | OUT | **D2** | Salida Sensor (Interrupción) |

#### 2. Consejo de Montaje Crítico: Soldadura y Tierra Común ⚠️

**El Desafío:**
El Arduino Uno tiene pines de alimentación limitados (usualmente 3 pines GND y un pin 5V). Sin embargo, este proyecto requiere:
* **4 conexiones a GND:** (L298N, Sensor, Servo 1, Servo 2).
* **3 conexiones a 5V:** (Sensor, Servo 1, Servo 2).

**La Solución:**
No puedes conectar todo directamente a los headers de la placa. Debes crear **Puntos de Conexión Común** usando cautín y estaño.

1.  **Tierra Común (GND):**
    * Toma los cables GND (Negros/Cafés) del **Sensor**, **Servo 1** y **Servo 2**.
    * Pela los extremos y enróscalos juntos con un **único cable extra**.
    * **Suelda** esta unión con estaño y cúbrela con **Tubo Termoretráctil** (o cinta aislante) para evitar cortocircuitos.
    * Conecta el otro extremo del cable extra a un pin **GND** en el Arduino.
    * *Nota:* La tierra lógica del L298N también debe unirse a la tierra del Arduino.

2.  **Distribución de 5V:**
    * Repite el proceso anterior para los cables **VCC (5V)** (Rojos) del Sensor y los Servos.
    * Suéldalos en una sola línea que se conecte al pin **5V** del Arduino.

#### 3. Ruta de Energía
* **Motores:** Alimentados directamente por las Baterías a través del L298N (Terminal de entrada 12V).
* **Lógica (Arduino):** Puede alimentarse vía USB para pruebas, o mediante la salida de 5V del L298N si el jumper está habilitado.
* **Interruptor:** Debe interrumpir el cable **Positivo (+)** que viene del paquete de baterías antes de que llegue al L298N.

---
*Safety First: Always double-check polarity before switching on! / ¡Seguridad ante todo: revisa siempre la polaridad antes de encender!* 👷⚡

