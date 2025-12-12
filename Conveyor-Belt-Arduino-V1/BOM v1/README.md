# REPOS Sorting Conveyor Belt - Bill of Materials 📦🤖

*Author: Fernando Navarrete* ✍️

## English Version 🇺🇸

Welcome to the **REPOS Sorting Conveyor Belt** project! 🎉

This innovative solution is designed to transform how objects are classified using advanced **color detection** and precise **electromechanical actuators**. Its **modular construction** ensures easy maintenance and adaptability for future expansions.

This document contains the complete **Bill of Materials (BOM)** required to build the physical structure. 🏗️

### 📋 1. Hardware & Electronics
These components are essential for the movement and control logic of the system.

| Component Name | Description / Specs | Qty | Notes |
| :--- | :--- | :---: | :--- |
| **DC Motor** | DC Motor with yellow gearbox (6V) | 1 | Main drive unit |
| **Motor Driver** | L298N Module | 1 | Motor controller |
| **Color Sensor** | GY-31 / TCS3200 | 1 | 64 photodiodes sensor |
| **Servos** | SG90 Servomotors | 2 | Includes horns/arms |
| **Batteries** | Li-Ion 18650 (3.7V) | 2 | Power source |
| **Battery Holder** | Holder for 2x18650 | 1 | |
| **Switch** | SPST Switch (2 pins, 20mm diam.) | 1 | Power control |
| **Bearings** | 627zz (7x22x7mm) | 4 | SKF standard radial |
| **Magnets** | Neodymium 12x4mm | 4 | For bearing covers |
| **Bolts M3x8** | ISO M3 Cylindrical Head | 40 | Main structure |
| **Bolts M4x8** | ISO M4 Cylindrical Head | 8 | Wall supports |
| **Bolts M3x4** | ISO M3 Flat Head | 2 | Battery holder fixation |
| **Microcontroller** | Arduino Uno/Nano | 1 | *Logic Unit (Required)* |

### 🖨️ 2. 3D Printed Parts

> **📂 CAD FILES LOCATION:**
> All 3D models listed below can be found in the **`../CAD v1`** directory.
> * **Supported Formats:** Fusion 360 (`.f3d`) and STEP (`.step`/`.stp`).
> * **Assembly Guide:** Please refer to the **[CAD v1 README](../CAD%20v1/README.md)** for detailed assembly views.

List of parts to be printed (STL). Recommended material: **PLA** or **PETG**.
*Note: The filenames below correspond to the files located in `../CAD v1/Fusion360/Parts` or `../CAD v1/STEP/Parts`.*
*Please fill in the "Weight" column based on your slicer settings (e.g., 20% infill).*

| Part Name (Filename) | Description | Qty | Weight (g) `[Fill]` |
| :--- | :--- | :---: | :---: |
| `Cadena_Oruga` | Caterpillar track chain (43 links) | 1 | 92.44 |
| `Engranaje_Motor` | Power Gear | 2 |24.98 | 
| `Soporte_Motor` | DC Motor support piece | 1 | |
| `Cilindro` | Support unit cylinder | 1 | 70.72|
| `Eje_7mm` | Support unit shaft (7mm) | 1 | |
| `Soportes_Acrilico`* | Side supports (Transparent) | 2 | *Laser Cut rec.* |
| `Apoyos_Paredes_Laterales` | Support pieces for acrylic walls | 4 | |
| `Soporte_Inferior` | Electronics support pieces | 2 | |
| `Placa_Componentes` | Plate for Driver L298N & Batteries | 1 | |
| `Soporte_Servomotor` | Mounts for SG90 servos | 2 | |
| `Pala_Servomotores` | Pushing blade for servos | 2 | |
| `Caja_Receptora_Lateral` | Side boxes for sorted objects | 2 | 74.78|
| `Soporte_Superior` | Joins box & servos, levels belt | 2 | 11.07 |
| `Camara_Oscura` | Darkened chamber for sensor | 1 | 37.95|
| `Cortinas_de_Lamas` | Slats curtains for chamber (TPU) | 2 | 11.85 |
| `Tolva_de_Carga` | Hopper to direct objects | 1 | 25.21 |
| `Tapas_Cubrerodamientos` | Covers for bearings | 4 | |
| `Tensor_Acoplable` | Optional belt tensioner | Opt. | |

> **Note:** The *Soportes_Acrilico* connect the structure. While listed here, using **Laser Cutting** (3mm-5mm Acrylic) is recommended for visibility. Check `../Acrylic Wall Manufacturing` for details.

### 🛠️ 3. Tools & Consumibles
Don't forget these to ensure a smooth assembly!

* **Allen Keys / Screwdrivers:** For M2, M3 and M4 bolts.
* **Soldering Iron & Solder:** For motor and switch connections.
* **Glue/Adhesive:**
    * For fixing bearings (if loose).
    * For attaching magnets to covers.
* **Wires:** Jumper wires for electronics.

---

## Versión en Español 🇪🇸

*Autor: Fernando Navarrete* ✍️

¡Bienvenido al proyecto **Correa Transportadora Clasificadora REPOS**! 🎉

Esta innovadora solución transforma la manera de clasificar objetos mediante una **avanzada detección de colores** y la integración precisa de **actuadores electromecánicos**. Su **construcción modular** facilita el mantenimiento y futuras ampliaciones.

Este documento contiene la **Lista de Materiales (BOM)** completa para construir la estructura física. 🏗️

### 📋 1. Hardware y Electrónica
Estos componentes comerciales son necesarios para la motricidad y lógica del sistema.

| Nombre Componente | Descripción / Specs | Cant. | Notas |
| :--- | :--- | :---: | :--- |
| **Motor DC** | Motor DC con caja reductora amarilla (6V) | 1 | Unidad de potencia |
| **Driver Motor** | L298N | 1 | Controlador de motores |
| **Sensor Color** | GY-31 / TCS3200 | 1 | Sensor de 64 fotodiodos |
| **Servomotores** | Modelo SG90 | 2 | Con horquillas |
| **Baterías** | Ion de Litio 18650 (3.7V) | 2 | Fuente de poder |
| **Portapilas** | Soporte para 2x18650 | 1 | |
| **Switch** | Interruptor SPST (2 pines, 20mm) | 1 | Control encendido |
| **Rodamientos** | 627zz (7x22x7mm) | 4 | Norma SKF, radiales |
| **Imanes** | Neodimio 12x4mm | 4 | Para tapas |
| **Pernos M3x8** | Cabeza cilíndrica ISO M3 | 40 | Estructura principal |
| **Pernos M4x8** | Cabeza cilíndrica ISO M4 | 8 | Apoyos laterales |
| **Pernos M3x4** | Cabeza plana ISO M3 | 2 | Fijación portapilas |
| **Microcontrolador** | Arduino Uno/Nano | 1 | *Unidad Lógica (Requerido)* |

### 🖨️ 2. Piezas Impresas en 3D

> **📂 UBICACIÓN ARCHIVOS CAD:**
> Todos los modelos 3D listados abajo se encuentran en el directorio **`../CAD v1`**.
> * **Formatos Compatibles:** Fusion 360 (`.f3d`) y STEP (`.step`/`.stp`).
> * **Guía de Ensamble:** Por favor revisa el **[README de CAD v1](../CAD%20v1/README.md)** para vistas detalladas.

Listado de archivos STL necesarios. Material recomendado: **PLA** o **PETG**.
*Nota: Los nombres de archivo corresponden a los ubicados en `../CAD v1/Fusion360/Parts` o `../CAD v1/STEP/Parts`.*
*Por favor rellena la columna "Peso" según tu configuración de slicer (ej. 20% relleno).*

| Nombre Pieza (Archivo) | Descripción | Cant. | Peso (g) `[Rellenar]` |
| :--- | :--- | :---: | :---: |
| `Cadena_Oruga` | Cadena tipo oruga (43 eslabones) | 1 | |
| `Engranaje_Motor_Frontal` | Engranaje motor frontal | 1 | |
| `Engranaje_Motor_Trasero` | Engranaje motor trasero | 1 | |
| `Soporte_Motor` | Soporte del motor DC | 1 | |
| `Cilindro` | Cilindro unidad de soporte | 1 | |
| `Eje_7mm` | Eje de 7mm unidad soporte | 1 | |
| `Soportes_Acrilico`* | Soportes laterales | 2 | *Rec. Corte Láser* |
| `Apoyos_Paredes_Laterales` | Apoyos para los soportes | 4 | |
| `Soporte_Inferior` | Soporte componentes electrónicos | 2 | |
| `Placa_Componentes` | Placa para Driver y Baterías | 1 | |
| `Soporte_Servomotor` | Soporte para servos SG90 | 2 | |
| `Pala_Servomotores` | Pala de empuje | 2 | |
| `Caja_Receptora_Lateral` | Caja lateral receptora | 2 | |
| `Soporte_Superior` | Unión caja/servos | 2 | |
| `Camara_Oscura` | Cámara para sensor de color | 1 | |
| `Cortinas_de_Lamas` | Cortinas para la cámara | 2 | |
| `Tolva_de_Carga` | Tolva de dirección | 1 | |
| `Tapas_Cubrerodamientos` | Cubiertas para rodamientos | 4 | |
| `Tensor_Acoplable` | Tensor de correa opcional | Opt. | |

> **Nota:** Los *Soportes de Acrílico* estructuran la correa. Aunque están listados aquí, se recomienda usar **Corte Láser** (Acrílico 3mm-5mm). Revisa la carpeta `../Acrylic Wall Manufacturing` para los planos.

### 🛠️ 3. Herramientas y Consumibles
¡No olvides esto para asegurar un armado fluido!

* **Llaves Allen / Destornilladores:** Para pernos M2, M3 y M4.
* **Cautín y Estaño:** Para conexiones de motor e interruptor.
* **Pegamento/Adhesivo:**
    * Para fijar rodamientos (si entran muy holgados).
    * Para pegar imanes a las tapas.
* **Cables:** Cables tipo jumper para electrónica.

---
*Have fun building your **Conveyor Belt Arduino DIY**!* 🎊