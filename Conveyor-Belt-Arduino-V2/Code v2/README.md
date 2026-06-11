# Conveyor Belt Arduino DIY - Software & Logic 💻⚙️

*Author: Fernando Navarrete* ✍️

## English Version 🇺🇸

Welcome to the **Code v1** directory! 🧠

This folder contains the firmware required to operate the **Sorting Conveyor Belt**. The system uses an **Arduino** microcontroller to manage the logic of detection, decision-making, and actuation.

### 📂 Folder Structure

Here is the organization of the source files included in this version:

```text
Code v1
├── 📂 Calibration_TCS3200
│   └── 📜 Calibration_TCS3200.ino   <-- (Utility) Calibrate sensor min/max freq
├── 📜 Sorting_Conveyor_belt.ino     <-- (Main) Production code for sorting
└── 📝 README.md                     <-- (Documentation) You are here

```

### 🔌 Pinout & Wiring

> **⚡ Electronic Diagram:**
> For detailed schematics, visual wiring guides, and power connections, please visit the **Electronics v1** module:
> 👉 **[Electronics v1 README](../Electronics%20v1/README.md)**

Below is the specific pin mapping defined in the source code (`Sorting_Conveyor_belt.ino`). Ensure your physical connections match these definitions:

| Component | Pin Function | Arduino Pin | Notes |
| --- | --- | --- | --- |
| **L298N Driver** | ENA (PWM) | **D3** | Speed Control |
|  | IN1 | **D8** | Direction A |
|  | IN2 | **D9** | Direction B |
| **Servos** | Servo 1 (Red) | **D5** | Sorts Red objects |
|  | Servo 2 (Green) | **D4** | Sorts Green objects |
| **TCS3200 (GY-31)** | S0 | **A0** | Frequency Scaling |
|  | S1 | **A1** | Frequency Scaling |
|  | S2 | **A2** | Color Filter Select |
|  | S3 | **A3** | Color Filter Select |
|  | OUT | **D2** | Frequency Output (Interrupt) |

> 
> **⚠️ Dependency:** You must install the `Servo.h` library in your Arduino IDE (usually pre-installed).
> 
> 

### 🛠️ How to Use

#### 1. Sensor Calibration (`Calibration_TCS3200.ino`)

Before running the main sorting machine, you must calibrate your sensor to account for ambient light.

1. Upload `Calibration_TCS3200.ino` to your board.
2. Open the **Serial Monitor** (115200 baud).
3. Place a **Black** object under the sensor and follow the on-screen prompts.
4. Place a **White** object when requested.
5. 
**Note down the Frequency values** (Min and Max) displayed for R, G, and B channels.



#### 2. Main Operation (`Sorting_Conveyor_belt.ino`)

1. Open the file `Sorting_Conveyor_belt.ino`.
2. 
**Update the Calibration variables**: Go to lines 30-31 (approx) and update `fMin[]` and `fMax[]` with the values obtained in step 1.


3. Upload the code.
4. The system will enter **Standby Mode**, waiting for an object.
5. Once a color is detected and classified (Red, Green, Blue, Black, White), the corresponding Servo will activate, and the belt will move for 10 seconds.



---

## Versión en Español 🇪🇸

*Autor: Fernando Navarrete* ✍️

¡Bienvenido al directorio **Code v1**! 🧠

Esta carpeta contiene el firmware necesario para operar la **Cinta Transportadora Clasificadora**. El sistema utiliza un microcontrolador **Arduino** para gestionar la lógica de detección, toma de decisiones y actuación.

### 📂 Estructura de Carpetas

Aquí se muestra la organización de los archivos fuente incluidos en esta versión:

```text
Code v1
├── 📂 Calibration_TCS3200
│   └── 📜 Calibration_TCS3200.ino   <-- (Utilidad) Calibrar freq min/max del sensor
├── 📜 Sorting_Conveyor_belt.ino     <-- (Principal) Código de producción para clasificación
└── 📝 README.md                     <-- (Documentación) Estás aquí

```

### 🔌 Conexiones y Pinout

> **⚡ Diagrama Electrónico:**
> Para esquemas detallados, guías visuales de cableado y conexiones de energía, por favor visita el módulo **Electronics v1**:
> 👉 **[Electronics v1 README](../Electronics%20v1/README.md)**

A continuación se muestra el mapeo de pines específico definido en el código fuente (`Sorting_Conveyor_belt.ino`). Asegúrate de que tus conexiones físicas coincidan con estas definiciones:

| Componente | Función Pin | Pin Arduino | Notas |
| --- | --- | --- | --- |
| **Driver L298N** | ENA (PWM) | **D3** | Control de Velocidad |
|  | IN1 | **D8** | Dirección A |
|  | IN2 | **D9** | Dirección B |
| **Servomotores** | Servo 1 (Rojo) | **D5** | Clasifica objetos Rojos |
|  | Servo 2 (Verde) | **D4** | Clasifica objetos Verdes |
| **TCS3200 (GY-31)** | S0 | **A0** | Escala de Frecuencia |
|  | S1 | **A1** | Escala de Frecuencia |
|  | S2 | **A2** | Selección Filtro Color |
|  | S3 | **A3** | Selección Filtro Color |
|  | OUT | **D2** | Salida Frecuencia (Interrupción) |

> 
> **⚠️ Dependencia:** Debes tener instalada la librería `Servo.h` en tu Arduino IDE (usualmente viene preinstalada).
> 
> 

### 🛠️ Modo de Uso

#### 1. Calibración del Sensor (`Calibration_TCS3200.ino`)

Antes de ejecutar la máquina clasificadora, debes calibrar el sensor para ajustar la iluminación ambiental.

1. Carga el archivo `Calibration_TCS3200.ino` en tu placa.
2. Abre el **Monitor Serie** (115200 baudios).
3. Coloca un objeto **Negro** bajo el sensor y sigue las instrucciones en pantalla.
4. Coloca un objeto **Blanco** cuando se solicite.
5. 
**Anota los valores de Frecuencia** (Min y Max) mostrados para los canales R, G y B.



#### 2. Operación Principal (`Sorting_Conveyor_belt.ino`)

1. Abre el archivo `Sorting_Conveyor_belt.ino`.
2. 
**Actualiza las variables de Calibración**: Ve a las líneas de configuración `fMin[]` y `fMax[]` y actualízalas con los valores obtenidos en el paso 1.


3. Carga el código.
4. El sistema entrará en **Modo Espera**, aguardando un objeto.
5. Una vez que un color es detectado y clasificado (Rojo, Verde, Azul, Negro, Blanco), el Servo correspondiente se activará y la cinta se moverá por 10 segundos.



---

*Happy Coding & Building!* 🚀
