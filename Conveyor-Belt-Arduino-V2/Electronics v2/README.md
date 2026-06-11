# Conveyor Belt Arduino DIY - Electronics & Wiring ⚡🔌

*Author: Fernando Navarrete* ✍️

## English Version 🇺🇸

Welcome to the **Electronics v2** directory! 🔋

This section covers the physical "nervous system" and custom circuit architecture of the **Sorting Conveyor Belt V2**. In this version, standard point-to-point jumper routing has been replaced by a **Custom Printed Circuit Board (PCB)** to enhance structural reliability, mitigate electromagnetic interference (EMI), and centralize modular connections.

### 📂 Available Manufacturing Files
Inside this directory, you will find the required hardware manufacturing and project files:
* 📁 **`Gerber_Files_V2.zip`**: Complete set of production photoplotter files in standard Gerber RS-274X format for physical CNC milling or external PCB manufacturing.
* 📦 **`Project_EasyEDA_V2.zip`**: Native source project package compatible with EasyEDA for hardware modifications, schematic tuning, and trace rerouting.

### 📜 Component Checklist
These are the core electronic components integrated into the custom board design:
* **Microcontroller:** Arduino Uno/Nano (The central logic processing unit).
* **Actuators:**
    * 1x NEMA 17 Stepper Motor (Main precise drive unit).
    * 1x EasyDriver A3967 Module (Microstepping driver).
    * 2x SG90 Servomotors (Sorting dynamic gates).
* **Sensors:**
    * 1x TCS3200 / GY-31 (RGB Color Sensor).
* **Power Regulation & Protection:**
    * 3x 18650 Li-Ion Batteries (~11.1V - 12.6V input power rail).
    * 1x LM2596 DC-DC Step-Down Buck Converter Module (Logic voltage regulator).
    * 1x 470µF Electrolytic Capacitor (De-coupling/filter layout element).
    * 1x SPST 2-Pin Toggle Switch.

---

### 🗺️ Electronic Diagram & PCB Specs

> **📄 VIEW DIAGRAM:**
> Please open the attached schematic PDF file **`Esquematico_Desafio_2_ME4250.pdf`** located in this folder to examine the component nets, footprint callouts, and internal routing sheets.

* **PCB Physical Spec Constraints:** * **Solder Mask color:** Industrial Green with high-contrast Yellow silkscreen labeling for clear pinout identification and project credits.
  * **Vias and Drill holes:** Standard logic size (0.254 mm / 10 mil).
  * **Trace Widths:** Standard signal/logic traces are routed at **0.4 mm**. Current-heavy Power traces (VCC, Motor outputs, and Regulator pins) are widened to **0.6 mm** to withstand step transients without heating.

---

### 🔌 Wiring Guide & Pinout Mapping

Ensure your modular cable harnesses (using XH2.54 terminal pins) match this hardware definition matrix embedded into the custom board layout:

| Component | Schematic Pin Label | Arduino Pin Connection | Description |
| :--- | :--- | :---: | :--- |
| **EasyDriver A3967** | STEP | **D2** | Step Pulse Command Signal |
| | DIR | **D3** | Direction Control Level |
| **TCS3200 (GY-31)** | S0, S1 | **A0, A1** | Output Frequency Scaling |
| | S2, S3 | **A2, A3** | Photodiode Color Array Selection |
| | OUT | **D4** | Frequency Pulse Width Input |
| **Servos (SG90)** | PWM_SG90_1 | **D9** | Gate 1 Actuator Control Signal |
| | PWM_SG90_2 | **D10** | Gate 2 Actuator Control Signal |

---

### ⚠️ Critical Engineering Design Note: Common Ground Anomalies

> **🛠️ POST-MORTEM HARDWARE OBSERVATION:**
> During the layout routing of the `Desafio_2_v2` schematic, a minor design discrepancy was introduced regarding the logic return path:
> * **The Issue:** The main `GND` network connection back to the Arduino microcontroler was bridged through a terminal pin assigned directly to the **LM2596 regulator block** instead of establishing a separate, noise-isolated digital ground pin on the main microcontroler header.
> * **Behavioral Impact:** Although electrical continuity is sustained globally across the negative terminal of the 18650 battery pack, heavy return currents from the stepper driver switching stages can couple electrical switching noise onto the sensitive analog/digital ground lines of the microcontroller.
> * **Future Iterations V3 Requirement:** Future engineering remakes must integrate a dedicated, independent row of free `GND` distribution headers linked via a clean star-ground layout geometry to safeguard signal integrity.

---

## Versión en Español 🇪🇸

*Autor: Fernando Navarrete* ✍️

¡Bienvenido al directorio **Electronics v2**! 🔋

Esta sección cubre el "sistema nervioso" físico y la arquitectura de circuitos de la **Cinta Transportadora Clasificadora V2**. En esta versión, el cableado por jumpers punto a punto ha sido reemplazado por una **Placa de Circuito Impreso (PCB) Personalizada** para mejorar la confiabilidad estructural, mitigar la interferencia electromagnética (EMI) y centralizar los acoples modulares.

### 📂 Archivos de Manufactura Disponibles
Dentro de este directorio, se encuentran los archivos necesarios para la fabricación del hardware:
* 📁 **`Gerber_Files_V2.zip`**: Conjunto de archivos de fotoploteo de producción en formato estándar Gerber RS-274X para el fresado CNC físico o manufactura externa de la PCB.
* 📦 **`Project_EasyEDA_V2.zip`**: Paquete nativo del proyecto compatible con EasyEDA para modificaciones de hardware, edición de esquemáticos y ruteo de pistas.

### 📜 Lista de Verificación de Componentes
Estos son los componentes electrónicos principales integrados en el diseño de la placa personalizada:
* **Microcontrolador:** Arduino Uno/Nano (Unidad de procesamiento lógico central).
* **Actuadores:**
    * 1x Motor Paso a Paso NEMA 17 (Unidad principal de tracción de precisión).
    * 1x Módulo Driver EasyDriver A3967 (Controlador de micropasos).
    * 2x Servomotores SG90 (Aletas dinámicas de clasificación).
* **Sensores:**
    * 1x TCS3200 / GY-31 (Sensor de Color RGB).
* **Regulación de Energía y Protección:**
    * 3x Baterías Li-Ion 18650 (Línea de potencia de entrada de ~11.1V - 12.6V).
    * 1x Regulador Convertidor Buck DC-DC Step-Down LM2596 (Regulador de voltaje lógico a 5V).
    * 1x Condensador Electrolítico de 470µF (Elemento de filtrado y desacople en la línea).
    * 1x Interruptor SPST de 2 pines.

---

### 🗺️ Diagrama Electrónico y Especificaciones de la PCB

> **📄 VER DIAGRAMA:**
> Por favor, abre el archivo PDF adjunto **`Esquematico_Desafio_2_ME4250.pdf`** en esta carpeta para examinar las redes de componentes, los encapsulados y los planos de ruteo interno.

* **Restricciones Técnicas de la PCB:** * **Color de Antisolder:** Verde industrial con serigrafía amarilla de alta definición para la identificación de pines, componentes y créditos del desarrollador.
  * **Vias y Perforaciones (Drills):** Tamaño estándar para señales lógicas (0.254 mm / 10 mil).
  * **Ancho de Pistas:** Las pistas estándar de señal lógica están ruteadas a **0.4 mm**. Las líneas de potencia que manejan alta corriente (VCC, salidas de motor y pines del regulador) se ensancharon a **0.6 mm** para soportar transitorios de corriente sin calentamiento del cobre.

---

### 🔌 Guía de Cableado y Mapa de Pines (Pinout)

Asegúrate de que los arneses de cables modulares (usando terminales XH2.54) coincidan con esta matriz de definición de hardware grabada en el diseño de la PCB:

| Componente | Etiqueta de Pin | Conexión Pin Arduino | Descripción |
| :--- | :--- | :---: | :--- |
| **EasyDriver A3967** | STEP | **D2** | Señal de Comando de Pulso de Paso |
| | DIR | **D3** | Nivel de Control de Dirección |
| **TCS3200 (GY-31)** | S0, S1 | **A0, A1** | Escalamiento de Frecuencia de Salida |
| | S2, S3 | **A2, A3** | Selección de Matriz de Fotodiodos de Color |
| | OUT | **D4** | Entrada de Ancho de Pulso de Frecuencia |
| **Servos (SG90)** | PWM_SG90_1 | **D9** | Señal de Control Actuador Aleta 1 |
| | PWM_SG90_2 | **D10** | Señal de Control Actuador Aleta 2 |

---

### ⚠️ Nota Crítica de Ingeniería: Anomalía de Tierra Común

> **🛠️ OBSERVACIÓN DE REVISIÓN DE HARDWARE:**
> Durante el ruteo de las pistas del esquemático `Desafio_2_v2`, se introdujo una leve discrepancia de diseño en el camino de retorno lógico:
> * **El Problema:** La conexión de la red principal de `GND` hacia el Arduino quedó vinculada a través de un pin de terminal destinado directamente al **bloque del regulador LM2596**, en lugar de establecerse en un pin de tierra digital independiente y aislado en el header principal del Arduino.
> * **Impacto Conductual:** Aunque existe continuidad eléctrica global con el terminal negativo del pack de baterías 18650, las corrientes de retorno intensas de las etapas de conmutación del motor paso a paso pueden acoplar ruido eléctrico en las líneas de tierra lógicas del microcontrolador.
> * **Requerimiento para Futuras Iteraciones V3:** Los próximos rediseños deben integrar obligatoriamente una fila dedicada e independiente de pines headers de distribución `GND` conectados mediante una geometría de tierra en estrella (*star ground*) para salvaguardar la integridad de la señal.

---
*Safety First: Always double-check polarity and visual traces before switching on! / ¡Seguridad ante todo: revisa siempre la polaridad y las pistas visuales antes de encender!* 👷⚡