# Conveyor Belt Arduino DIY - Bill of Materials 📦🤖

*Author: Fernando Navarrete* ✍️

## English Version 🇺🇸

Welcome to the **REPOS Sorting Conveyor Belt V2** project! 🎉

This innovative solution is designed to transform how objects are classified using advanced **color detection** and precise **electromechanical actuators**. Its **modular construction** ensures easy maintenance and adaptability for future expansions.

This document contains the complete **Bill of Materials (BOM)** required to build the physical structure for the Version 2. 🏗️

### 📋 1. Hardware & Electronics
These components are essential for the movement and control logic of the system.

| Component Name | Description / Specs | Qty | Notes |
| :--- | :--- | :---: | :--- |
| **Stepper Motor** | NEMA 17 Stepper Motor | 1 | Main drive unit for precise positioning |
| **Motor Driver** | EasyDriver A3967 Module | 1 | Microstepping driver for stepper motor |
| **Voltage Regulator** | LM2596 DC-DC Step-Down Buck Converter | 1 | Steps down battery voltage to stable 5V for logic/servos |
| **Capacitor** | 470µF Electrolytic Capacitor | 1 | Decoupling/Filter capacitor for voltage stability |
| **Custom PCB** | "Mechatronics Challenge 2" Custom Board | 1 | Centralized circuit board for clean routing |
| **Pin Headers** | Male & Female Pin Headers (2.54mm pitch) | Coll. | For modular connections and component mounting |
| **Color Sensor** | GY-31 / TCS3200 | 1 | 64 photodiodes sensor |
| **Servos** | SG90 Servomotors | 2 | Includes horns/arms |
| **Batteries** | Li-Ion 18650 (3.7V) | 3 | High voltage power source for NEMA 17 |
| **Battery Holder** | Holder for 3x18650 | 1 | |
| **Switch** | SPST Switch (2 pins, 20mm diam.) | 1 | Power control |
| **Bearings** | 627zz (7x22x7mm) | 4 | SKF standard radial |
| **Magnets** | Neodymium 12x4mm | 4 | For bearing covers |
| **Bolts M3x8** | ISO M3 Cylindrical Head | 40 | Main structure and driver fixation |
| **Bolts M4x8** | ISO M4 Cylindrical Head | 8 | Wall supports |
| **Microcontroller** | Arduino Uno/Nano | 1 | *Logic Unit (Required)* |

### 🖨️ 2. 3D Printed Parts

> **📂 CAD FILES LOCATION:**
> All 3D models listed below can be found in the **`../CAD v2`** directory.
> * **Supported Formats:** Fusion 360 (`.f3d`) and STEP (`.step`/`.stp`).
> * **Assembly Guide:** Please refer to the **[CAD v2 README](../CAD%20v2/README.md)** for detailed assembly views.

List of parts to be printed (STL). Recommended material: **PLA**, **PETG** or **TPU** where specified.
*Note: The filenames below correspond to the files located in `../CAD v2/Fusion360/Parts` or `../CAD v2/STEP/Parts`.*

> **⚖️ Weight Note:** The weights listed below were estimated using **Bambu Studio Slicer**. Values may vary slightly depending on your specific filament brand and infill settings.

| Part Name (Filename) | Description | Qty | Weight (g) |
| :--- | :--- | :---: | :---: |
| `Correa_V_Trapezoidal` | V-shaped thin conveyor belt (Printed in 2 parts, TPU Rec.) | 1 | |
| `Polea_Engranaje` | Power transmission gear pulley for the belt | 1 | |
| `Tornillo_Helicoidal_Nema` | Worm screw mounted on NEMA 17 to drive the gear pulley | 1 | |
| `Polea_Guia` | Toothless idler pulley for belt guidance | 1 | |
| `Ejes_7mm` | Printed 7mm shafts to connect pulleys with side bearings | 2 | |
| `Carcasa_Motor` | Custom enclosure and mount for NEMA 17 motor | 1 | |
| `Espaciadores_Estructurales_Sup` | Upper structural spacers to separate the belt from above | 2 | |
| `Espaciadores_Estructurales_Inf` | Lower structural spacers to separate the belt from below | 2 | |
| `Apoyos_Laterales_Dobles` | Connected side supports for increased structural stability | 2 | |
| `Espaciador_Central` | Central spacer to maintain the belt completely horizontal | 1 | |
| `Camara_Oscura` | Darkened chamber enclosure for housing the color sensor | 1 | |
| `Cortinas_Lamas` | Slats curtains for light isolation inside the chamber (TPU Rec.) | 2 | |
| `Rack_Cables` | Internal cable management rack and routing support | 1 | |
| `Carcasas_Servomotores` | Dedicated mounts/enclosures for the SG90 servos | 2 | |
| `Palas_Servomotores` | Pushing blades attached to servos for object sorting | 2 | |
| `Cajas_Receptoras_Simples` | Standard receiving boxes for object classification | 3 | |
| `Tapas_Rodamientos` | Bearing covers with slots for neodymium magnets (prevents axial sliding) | 4 | |

> **Note:** The *Soportes_Acrilico* connect the structure. While listed here, using **Laser Cutting** (3mm-5mm Acrylic) is recommended for visibility. Check `../Conveyor-Belt-Arduino-V1/Acrylic Wall Manufacturing` for details.

### 🛠️ 3. Tools & Consumibles
Don't forget these to ensure a smooth assembly!

* **Allen Keys / Screwdrivers:** For M3 and M4 bolts.
* **Soldering Iron & Solder:** For motor, driver, PCB components and switch connections.
* **Glue/Adhesive:**
    * Cyanoacrylate glue (for joining the TPU belt parts).
    * For fixing bearings (if loose).
    * For attaching magnets to covers.
* **Wires:** Jumper wires or layout wires for electronics.

---

## Versión en Español 🇪🇸

*Autor: Fernando Navarrete* ✍️

¡Bienvenido al proyecto **Correa Transportadora Clasificadora REPOS V2**! 🎉

Esta innovadora solución transforma la manera de clasificar objetos mediante una **avanzada detección de colores** y la integración precisa de **actuadores electromecánicos**. Su **construcción modular** facilita el mantenimiento y futuras ampliaciones.

Este documento contiene la **Lista de Materiales (BOM)** completa para construir la estructura física de la Versión 2. 🏗️

### 📋 1. Hardware y Electrónica
Estos componentes comerciales son necesarios para la motricidad y lógica del sistema.

| Nombre Componente | Descripción / Specs | Cant. | Notas |
| :--- | :--- | :---: | :--- |
| **Motor Paso a Paso** | Motor paso a paso NEMA 17 | 1 | Unidad de potencia para posicionamiento preciso |
| **Driver Motor** | Módulo EasyDriver A3967 | 1 | Controlador de micropasos para motor stepper |
| **Regulador de Voltaje** | Convertidor Buck DC-DC Step-Down LM2596 | 1 | Reduce el voltaje de baterías a 5V estables para lógica/servos |
| **Condensador** | Condensador Electrolítico de 470µF | 1 | Filtro de desacoplo para mitigar picos de corriente |
| **PCB Personalizada** | Placa de circuito "Desafío 2 Mecatrónica" | 1 | Placa centralizada para optimizar el ruteo eléctrico |
| **Pin Headers** | Conectores macho y hembra (Paso 2.54mm) | Kit | Para conexiones modulares y montaje de componentes |
| **Sensor Color** | GY-31 / TCS3200 | 1 | Sensor de 64 fotodiodos |
| **Servomotores** | Modelo SG90 | 2 | Con horquillas |
| **Baterías** | Ion de Litio 18650 (3.7V) | 3 | Fuente de alimentación de mayor voltaje para NEMA 17 |
| **Portapilas** | Soporte para 3x18650 | 1 | |
| **Switch** | Interruptor SPST (2 pines, 20mm) | 1 | Control encendido |
| **Rodamientos** | 627zz (7x22x7mm) | 4 | Norma SKF, radiales |
| **Imanes** | Neodimio 12x4mm | 4 | Para tapas |
| **Pernos M3x8** | Cabeza cilíndrica ISO M3 | 40 | Estructura principal y fijación de electrónica |
| **Pernos M4x8** | Cabeza cilíndrica ISO M4 | 8 | Apoyos laterales |
| **Microcontrolador** | Arduino Uno/Nano | 1 | *Unidad Lógica (Requerido)* |

### 🖨️ 2. Piezas Impresas en 3D

> **📂 UBICACIÓN ARCHIVOS CAD:**
> Todos los modelos 3D listados abajo se encuentran en el directorio **`../CAD v2`**.
> * **Formatos Compatibles:** Fusion 360 (`.f3d`) y STEP (`.step`/`.stp`).
> * **Guía de Ensamble:** Por favor revisa el **[README de CAD v2](../CAD%20v2/README.md)** para vistas detalladas.

Listado de archivos STL necesarios. Material recomendado: **PLA**, **PETG** o **TPU** según se especifique.
*Nota: Los nombres de archivo corresponden a los ubicados en `../CAD v2/Fusion360/Parts` o `../CAD v2/STEP/Parts`.*

> **⚖️ Nota sobre Pesos:** Los pesos listados a continuación fueron obtenidos a partir del laminador **Bambu Studio**. Los valores pueden variar según la marca de filamento y la configuración de relleno.

| Nombre Pieza (Archivo) | Descripción | Cant. | Peso (g) |
| :--- | :--- | :---: | :---: |
| `Correa_V_Trapezoidal` | Correa delgada en V (Impresa en 2 partes, Rec. TPU) | 1 | |
| `Polea_Engranaje` | Polea corona para la transmisión de potencia de la correa | 1 | |
| `Tornillo_Helicoidal_Nema` | Tornillo sin fin acoplado al NEMA 17 para mover la polea corona | 1 | |
| `Polea_Guia` | Polea loca lisa (sin dientes) para el guiado de la correa | 1 | |
| `Ejes_7mm` | Ejes de 7mm impresos para conectar poleas con rodamientos | 2 | |
| `Carcasa_Motor` | Soporte y carcasa de protección para el motor NEMA 17 | 1 | |
| `Espaciadores_Estructurales_Sup` | Separadores estructurales para la zona superior de la correa | 2 | |
| `Espaciadores_Estructurales_Inf` | Separadores estructurales para la zona inferior de la correa | 2 | |
| `Apoyos_Laterales_Dobles` | Soportes de paredes laterales unidos para mayor estabilidad | 2 | |
| `Espaciador_Central` | Soporte central para mantener la horizontalidad de la correa | 1 | |
| `Camara_Oscura` | Estructura de cámara cerrada para el sensor de color | 1 | |
| `Cortinas_Lamas` | Cortinas flexibles para aislar la luz en la cámara (Rec. TPU) | 2 | |
| `Rack_Cables` | Enrutador y soporte organizador para el cableado interno | 1 | |
| `Carcasas_Servomotores` | Carcasas de montaje para los servomotores SG90 | 2 | |
| `Palas_Servomotores` | Palas deflectoras de empuje para la clasificación de objetos | 2 | |
| `Cajas_Receptoras_Simples` | Depósitos contenedores para la separación de las piezas | 3 | |
| `Tapas_Rodamientos` | Tapas con alojamiento para imanes (evitan el juego axial del eje) | 4 | |

> **Nota:** Los *Soportes de Acrílico* estructuran la correa. Aunque están listados aquí, se recomienda usar **Corte Láser** (Acrílico 3mm-5mm). Revisa la carpeta `../Conveyor-Belt-Arduino-V1/Acrylic Wall Manufacturing` para los planos.

### 🛠️ 3. Herramientas y Consumibles
¡No olvides esto para asegurar un armado fluido!

* **Llaves Allen / Destornilladores:** Para pernos M3 y M4.
* **Cautín y Estaño:** Para soldar componentes en la PCB, motores e interruptor.
* **Pegamento/Adhesivo:**
    * Pegamento de cianoacrilato (para la unión de la correa de TPU).
    * Para fijar rodamientos (si entran muy holgados).
    * Para pegar imanes a las tapas.
* **Cables:** Cables tipo jumper o hilos de cobre para cableado interno de prototipos.

---
*Have fun building your **Conveyor Belt Arduino DIY V2**!* 🎊