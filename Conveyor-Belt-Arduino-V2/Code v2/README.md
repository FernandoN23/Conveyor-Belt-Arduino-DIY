# Conveyor Belt Arduino DIY - Software & Logic 💻⚙️

*Author: Fernando Navarrete* ✍️

## English Version 🇺🇸

Welcome to the **Code v2** directory! 🧠

This folder contains the firmware required to operate the **Sorting Conveyor Belt V2**. The system utilizes an **Arduino** microcontroller to manage the high-precision logic of object detection, RGB color mapping, and electromechanical actuation using a stepper motor and servo barriers.

### 📂 Folder Structure

Here is the organization of the source files included in this version:

```text
Code v2
├── 📂 Calibration_TCS3200
│   └── 📜 Calibration_TCS3200.ino       <-- (Utility) Calibrate sensor min/max pulse width
├── 📜 Conveyor_Belt_D2_Student.ino      <-- (Main) Production code for sorting & evaluation (Desafío 2 Mecatrónica)
└── 📝 README.md                         <-- (Documentation) You are here

```

### 🔌 Pinout & Wiring

> **⚡ Electronic Diagram:**
> For detailed schematics, custom PCB routing paths, and power regulation connections, please visit the **Electronics v2** module:
> 👉 **[Electronics v2 README](https://www.google.com/search?q=../Electronics%2520v2/README.md)**

Below is the specific hardware pin mapping defined in the production source code (`Conveyor_Belt_D2_Student.ino`). Ensure your physical custom board connections strictly match these definitions to prevent hardware issues:

| Component | Pin Function | Arduino Pin | Notes |
| --- | --- | --- | --- |
| **EasyDriver A3967** | STEP | **D2** | Step pulse signal (AccelStepper Control) |
|  | DIR | **D3** | Direction control signal |
| **TCS3200 (GY-31)** | S0 | **A0** | Frequency Scaling Selection |
|  | S1 | **A1** | Frequency Scaling Selection |
|  | S2 | **A2** | Color Photodiode Filter Select |
|  | S3 | **A3** | Color Photodiode Filter Select |
|  | OUT | **D4** | Signal pulse width input (`pulseIn`) |
| **Servos** | Servo 1 | **D9** | Sorts objects (Safety constrained) |
|  | Servo 2 | **D10** | Sorts objects (Safety constrained) |

> **⚠️ Dependencies:** You must install the `AccelStepper.h` library via the Arduino Library Manager, and ensure `Servo.h` is available in your IDE environment before compiling.

### 🛠️ Execution Pipeline & Methodology

#### 1. Sensor Ambient Calibration (`Calibration_TCS3200.ino`)

Before running the main execution logic, you must determine the hardware frequency responses under your specific ambient light environment:

1. Upload `Calibration_TCS3200.ino` to your board.
2. Open the **Serial Monitor** at **115200 baud** (or the rate specified in calibration).
3. Place a **Matte Black** reference object under the sensor chamber and record the maximum pulse width times.
4. Place a **Pure White** reference object when prompted and record the minimum pulse width times.
5. **Note down the raw values** for the R, G, and B independent channels.

#### 2. Main Machine Operation (`Conveyor_Belt_D2_Student.ino`)

1. Open the primary production file: `Conveyor_Belt_D2_Student.ino`.
2. **Update the Calibration Bounds**: Navigate to the Step 2 configuration lines and input your logged values into the corresponding constants:
* `R_BLACK`, `G_BLACK`, `B_BLACK` (Long pulse width metrics).
* `R_WHITE`, `G_WHITE`, `B_WHITE` (Short pulse width metrics).


3. **Calibrate Sorting Logic thresholds**: Modify the conditional bounds inside `clasificarRGB(r, g, b)` to match your standard 0-255 mapped material profiles.
4. Upload the code to the microcontroller.
5. **System Sequence**:
* **Search Phase**: The belt moves in short, controlled increments (`400 steps`) searching for a payload.
* **Detection**: Upon valid color classification (Action $\neq$ 0), the mechanical safety code positions the sorting servos within structural limits ($45^\circ$ to $135^\circ$).
* **Dwell**: The mechanism waits for **5 seconds** after detection.
* **Evacuation**: The stepper drives the conveyor belt continuously for **10 seconds** (`50000 steps`) to clear the sorting zone.
* **Reset**: The conveyor stops safely and the servos automatically return to the safe rest alignment ($90^\circ$).



---

## Versión en Español 🇪🇸

*Autor: Fernando Navarrete* ✍️

¡Bienvenido al directorio **Code v2**! 🧠

Esta carpeta contiene el firmware necesario para operar la **Cinta Transportadora Clasificadora V2**. El sistema utiliza un microcontrolador **Arduino** para gestionar la lógica de alta precisión en detección de objetos, mapeo RGB de color y actuación electromecánica mediante un motor paso a paso y barreras de servomotores.

### 📂 Estructura de Carpetas

Aquí se muestra la organización de los archivos fuente incluidos en esta versión:

```text
Code v2
├── 📂 Calibration_TCS3200
│   └── 📜 Calibration_TCS3200.ino       <-- (Utilidad) Calibrar límites de ancho de pulso del sensor
├── 📜 Conveyor_Belt_D2_Student.ino      <-- (Principal) Código de producción para clasificación y evaluación (Desafío 2)
└── 📝 README.md                         <-- (Documentación) Estás aquí

```

### 🔌 Conexiones y Pinout

> **⚡ Diagrama Electrónico:**
> Para esquemas detallados, rutas de ruteo en la PCB personalizada y conexiones de regulación de potencia, por favor visita el módulo **Electronics v2**:
> 👉 **[Electronics v1 README](https://www.google.com/search?q=../Electronics%2520v2/README.md)**

A continuación se muestra el mapeo de hardware específico definido en el código fuente de producción (`Conveyor_Belt_D2_Student.ino`). Asegúrate de que tus conexiones físicas en la placa personalizada coincidan estrictamente con estas definiciones para evitar fallos de hardware:

| Componente | Función Pin | Pin Arduino | Notas |
| --- | --- | --- | --- |
| **EasyDriver A3967** | STEP | **D2** | Señal de pulsos de paso (Control AccelStepper) |
|  | DIR | **D3** | Señal de control de dirección |
| **TCS3200 (GY-31)** | S0 | **A0** | Selección de Escala de Frecuencia |
|  | S1 | **A1** | Selección de Escala de Frecuencia |
|  | S2 | **A2** | Selección Filtro de Fotodiodo de Color |
|  | S3 | **A3** | Selección Filtro de Fotodiodo de Color |
|  | OUT | **D4** | Entrada de ancho de pulso de señal (`pulseIn`) |
| **Servomotores** | Servo 1 | **D9** | Desvío de objetos (Restringido por seguridad) |
|  | Servo 2 | **D10** | Desvío de objetos (Restringido por seguridad) |

> **⚠️ Dependencias:** Debes instalar la librería `AccelStepper.h` a través del Gestor de Librerías de Arduino IDE, y verificar que `Servo.h` se encuentre disponible en tu entorno antes de compilar.

### 🛠️ Flujo Metodológico de Ejecución

#### 1. Calibración Ambiental del Sensor (`Calibration_TCS3200.ino`)

Antes de ejecutar la lógica de producción, es mandatorio determinar las respuestas en frecuencia del hardware bajo las condiciones lumínicas específicas del entorno:

1. Carga el archivo `Calibration_TCS3200.ino` en tu placa.
2. Abre el **Monitor Serie** configurado a **115200 baudios** (o la velocidad seteada en la utilidad).
3. Posiciona un objeto de referencia **Negro Mate** bajo la cámara oscura del sensor y registra los tiempos de ancho de pulso máximos.
4. Posiciona un objeto de referencia **Blanco Puro** cuando el sistema lo solicite y registra los tiempos de ancho de pulso mínimos.
5. **Anota los valores crudos** obtenidos para los canales independientes R, G y B.

#### 2. Operación de la Máquina Principal (`Conveyor_Belt_D2_Student.ino`)

1. Abre el archivo de producción principal: `Conveyor_Belt_D2_Student.ino`.
2. **Actualizar Límites de Calibración**: Dirígete a las líneas de configuración del Paso 2 e introduce los valores medidos en las constantes del firmware:
* `R_BLACK`, `G_BLACK`, `B_BLACK` (Métricas de tiempo para negro/tiempos largos).
* `R_WHITE`, `G_WHITE`, `B_WHITE` (Métricas de tiempo para blanco/tiempos cortos).


3. **Calibrar Umbrales de Clasificación**: Modifica las condiciones lógicas dentro de la función `clasificarRGB(r, g, b)` para que coincidan con los perfiles estándar mapeados (0-255) de tus objetos reales.
4. Carga el firmware modificado en el microcontrolador.
5. **Secuencia Dinámica**:
* **Fase de Búsqueda**: La correa avanza en pasos cortos controlados (`400 pasos`) buscando variaciones en el sensor.
* **Detección**: Al clasificar un color válido (Acción $\neq$ 0), el filtro de protección mecánica posiciona los servos dentro de rangos seguros ($45^\circ$ a $135^\circ$) previniendo colisiones mecánicas con el chasis.
* **Espera**: El proceso realiza un retraso controlado de **5 segundos** posterior a la detección.
* **Evacuación**: El motor paso a paso tracciona de forma continua durante **10 segundos** (`50000 pasos`) para despachar el objeto hacia su respectiva caja receptora.
* **Restablecimiento**: La correa se detiene con una rampa desacelerada y las palas retornan automáticamente a su ángulo seguro de descanso ($90^\circ$).



---

*Happy Coding & Building!* 🚀
