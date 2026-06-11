# Conveyor Belt Arduino DIY V2🏗️🤖

[![Arduino](https://img.shields.io/badge/Arduino-UNO%20%2F%20Nano-00979D?style=flat-square&logo=arduino)](https://www.arduino.cc/)
[![Fusion 360](https://img.shields.io/badge/Fusion%20360-Design-F57F24?style=flat-square&logo=autodesk)](https://www.autodesk.com/products/fusion-360/overview)
[![EasyEDA](https://img.shields.io/badge/EasyEDA-PCB%20Design-0052CC?style=flat-square)](https://easyeda.com/)
[![License](https://img.shields.io/badge/License-Open%20Source-blue?style=flat-square)](LICENSE)

*Author: Fernando Navarrete* ✍️

---

## English Version 🇺🇸

### 🌟 Project Overview
Welcome to the **Conveyor Belt Arduino DIY** master repository! This project details the multidisciplinary design, prototyping, and automation of an **Automatic Sorting Conveyor Belt** controlled by an Arduino microcontroller.

The machine scans physical objects inside a darkened chamber using a **TCS3200 (GY-31) Color Sensor**, maps raw optical readings into standard RGB values, and commands electromechanical actuators to split the materials into different receiving bins.

---

### 🚀 What's New in Version 2 (V2 Updates)
The system has been completely overhauled from the previous V1 baseline to meet the technical requirements of **Mechatronics Challenge 2**. 

* **Ergonomic CAD Redesign:** Structural components were re-engineered for simpler, faster physical assembly, optimized alignment tolerances, and enhanced overall rigidity.
* **Custom PCB Centralization:** Point-to-point breadboard/jumper wiring was eliminated. A dedicated green PCB with high-contrast yellow silkscreen was engineered in EasyEDA, introducing an **LM2596 DC-DC Buck Regulator** for 5V stability, a **470µF filter capacitor** to buffer servo spikes, and modular XH2.54 connector rails.
* **Worm Gear Power Transmission:** The V1 DC motor was upgraded to a high-torque **NEMA 17 Stepper Motor** driven by an **EasyDriver A3967**. Power transfer is achieved via an integrated printed worm screw (*tornillo helicoidal*) and a custom gear pulley, preventing unintended belt slides via mechanical irreversibility.
* **Innovative TPU Timing Belt:** Implemented a lightweight, continuous V-trapezoidal timing belt printed locally in two separate flexible **TPU** parts and bonded with high-strength cyanoacrylate. Testing validated that this bond does not compromise tensile strength, allowing a 100% printed internal drive loop (leaving only the clear acrylic side walls for structural visibility).

#### 🔮 Future Enhancements & Roadmap
* **Electrical Noise Isolation:** Reroute the PCB traces into a V3 revision with a dedicated, star-grounded row of free `GND` headers to isolate stepper power returns from the sensitive Arduino logic lines.
* **Industrial Belt Upgrade:** Transition from the current custom-printed TPU belt to an off-the-shelf industrial síncrona timing belt to enhance continuous operation lifespans.

---

## Versión en Español 🇪🇸

### 🌟 Resumen del Proyecto
¡Bienvenido al repositorio maestro **Conveyor Belt Arduino DIY**! Este proyecto detalla el diseño multidisciplinario, prototipado y automatización de una **Cinta Transportadora Clasificadora Automática** controlada por un microcontrolador Arduino.

El sistema escanea objetos físicos dentro de una cámara oscura mediante un **Sensor de Color TCS3200 (GY-31)**, mapea las lecturas ópticas crudas a valores RGB estándar y comanda actuadores electromecánicos para desviar las piezas hacia sus respectivos depósitos de clasificación.

---

### 🚀 Novedades de la Versión 2 (Actualizaciones V2)
El sistema ha sido completamente rediseñado desde la base de la versión V1 para cumplir con los exigentes requerimientos técnicos del **Desafío 2 de Mecatrónica**.

* **Rediseño Mecánico CAD:** Componentes estructurales optimizados para lograr un ensamblaje físico más simple, rápido y ergonómico, mejorando las tolerancias de alineación y la rigidez general del chasis.
* **Implementación de PCB Personalizada:** Se eliminó por completo el desorden de cables flotantes de la V1. Se diseñó una PCB verde con serigrafía amarilla en EasyEDA, incorporando un regulador **Buck DC-DC LM2596** para estabilizar el riel de 5V, un **condensador de filtro de 470µF** para absorber picos de los servos y filas de conectores modulares XH2.54 de conexión rápida.
* **Transmisión por Tornillo Sin Fin:** El motor DC convencional fue reemplazado por un **Motor Paso a Paso NEMA 17** de alto torque controlado por un driver **EasyDriver A3967**. La potencia se transmite mediante un tornillo helicoidal impreso y una polea corona engranada, dotando al sistema de irreversibilidad mecánica para evitar deslizamientos por inercia.
* **Correa Continua de TPU Impresa:** Se implementó una correa delgada trapezoidal tipo *timing belt* impresa localmente en dos partes de **TPU** flexible, unidas firmemente con cianoacrilato (*gotita*). Las pruebas de laboratorio demostraron que esta unión no compromete la resistencia a la tracción (aguanta una carga considerable), logrando que casi todo el mecanismo sea impreso (excepto las paredes de acrílico claro).

#### 🔮 Mejoras a Futuro y Hoja de Ruta
* **Aislamiento de Ruido Eléctrico:** Reconfigurar el ruteo de pistas para una revisión V3 incorporando filas de pines `GND` libres en una distribución de tierra en estrella, aislando los retornos de potencia del motor de las líneas lógicas del Arduino.
* **Correa Industrial Síncrona:** Reemplazar a futuro la correa de TPU impresa por una correa síncrona industrial comercial (adquirida externamente) para maximizar los ciclos de trabajo continuo.

---

## 📚 Documentation & Modules / Documentación y Módulos

Explore the directories below for detailed technical documentation on the current V2 standard and legacy V1 history.
*Explora los directorios a continuación para revisar la documentación técnica de la versión V2 actual y el historial heredado de la V1.*

| Module / Módulo | Description / Descripción |
| :--- | :--- |
| **📦 [Bill of Materials (BOM) / Lista de Materiales](./Conveyor-Belt-Arduino-V2/BOM%20v2/README.md)** | **V2 Purchase List & Printed Weights.** <br>Complete catalog of current hardware (NEMA 17, EasyDriver, LM2596, custom PCB) and empty weight fields for 3D printed parts.<br>---<br>**Lista de Compra y Pesos V2.**<br>Catálogo completo de hardware actual (NEMA 17, EasyDriver, LM2596, PCB) y espacios para rellenar los gramos de las piezas impresas. |
| **📐 [CAD Design Files / Archivos de Diseño CAD](./Conveyor-Belt-Arduino-V2/CAD%20v2/README.md)** | **Source Models (Fusion 360 & STEP V2).** <br>Download the digital twin organized into `/Electronic Parts`, `/Mechanic Parts`, and custom `/Parts` sub-folders.<br>---<br>**Modelos Fuente (Fusion 360 y STEP V2).**<br>Descarga el gemelo digital organizado en subcarpetas de componentes electrónicos, mecánicos y piezas personalizadas. |
| **🔦 [Acrylic Manufacturing / Manufactura de Acrílico](./Conveyor-Belt-Arduino-V1/Acrylic%20Wall%20Manufacturing/README.md)** | **Laser Cutting Files (Legacy/Reference).** <br>Production layouts (`.dxf`, `.beam`) for the transparent 4mm side walls critical for housing structural integrity.<br>---<br>**Archivos de Corte Láser (Referencia).**<br>Planos de producción (`.dxf`, `.beam`) para las paredes laterales de acrílico transparente de 4mm, críticas para la estructura. |
| **⚡ [Electronics & Wiring / Cableado y Electrónica](./Conveyor-Belt-Arduino-V2/Electronics%20v2/README.md)** | **PCB Schematics & Gerber Layouts.** <br>Contains the EasyEDA schematic sheets, trace distribution dimensions (0.4mm/0.6mm), and `Gerber_Files_V2.zip` production archives.<br>---<br>**Esquemas de PCB y Archivos Gerber.**<br>Contiene los esquemas de EasyEDA, anchos de pista lógicos/potencia (0.4mm/0.6mm) y el comprimido de producción `Gerber_Files_V2.zip`. |
| **💻 [Software & Logic / Programación y Lógica](./Conveyor-Belt-Arduino-V2/Code%20v2/README.md)** | **AccelStepper Firmware V2.** <br>Source code (`.ino`) incorporating `AccelStepper` non-blocking ramps, sensor mapping functions, and hardware protection angle clamps.<br>---<br>**Firmware AccelStepper V2.**<br>Código fuente (`.ino`) que incorpora control de rampas no bloqueantes con `AccelStepper`, mapeo del sensor y límites de seguridad angular. |
| **📸 [Multimedia Gallery / Galería Multimedia](./Multimedia/README.md)** | **Renders & Visuals.** <br>High-quality digital Twin renders, workbench photos, and operational video reels of the final sorting system.<br>---<br>**Renders y Visuales.**<br>Renders de alta calidad del gemelo digital, capturas del banco de pruebas y videos de operación del sistema clasificador. |

---

## 🎓 Acknowledgments / Agradecimientos

This project was made possible thanks to the academic support and specialized fabrication facilities provided by the **University of Chile**.

*Este proyecto fue posible gracias al apoyo académico y las instalaciones de fabricación especializadas provistas por la **Universidad de Chile**.*

| Institution / Institución | Contribution / Contribución |
| :---: | :--- |
| <img src="./Multimedia/Logos/logo_lemur.png" width="120" alt="LEMUR Logo"> | **LEMUR (Laboratorio de Ingeniería Mecatrónica y Robótica)**<br>For providing the specialized engineering workspace, FDM 3D printers, and test instrumentation required for the belt validation.<br>*(Por proveer el espacio de ingeniería, impresoras 3D FDM e instrumentación de prueba necesaria para la validación de la correa).* |
| <img src="./Multimedia/Logos/logo_fablab.png" width="150" alt="FabLab Logo"> | **FABLAB U. de Chile**<br>For their technical manufacturing advisory and access to computer-controlled machinery, specifically the Beambox Series Pro laser cutter.<br>*(Por su asesoría técnica en manufactura y el uso de maquinaria CNC, principalmente la cortadora láser Beambox Series Pro).* |

---
*Open Source Project - Mechatronics V2 Revision (2026)*