# Conveyor Belt Arduino DIY 🏗️🤖

[![Arduino](https://img.shields.io/badge/Arduino-UNO-00979D?style=flat-square&logo=arduino)](https://www.arduino.cc/)
[![Fusion 360](https://img.shields.io/badge/Fusion%20360-Design-F57F24?style=flat-square&logo=autodesk)](https://www.autodesk.com/products/fusion-360/overview)
[![License](https://img.shields.io/badge/License-Open%20Source-blue?style=flat-square)](LICENSE)

*Author: Fernando Navarrete* ✍️

## English Version 🇺🇸

### 🌟 Project Overview
Welcome to the **Conveyor Belt Arduino DIY** repository! This project details the design, construction, and programming of an **Automatic Sorting Conveyor Belt**.

Powered by an **Arduino microcontroller**, this system utilizes a **TCS3200 Color Sensor** and high-precision **Servomotors** to classify objects based on their color (Red/Green). It is a multidisciplinary project integrating:
* **Mechanical Design** (3D Printing & Laser Cutting).
* **Electronics** (Wiring, Power Management, L298N Drivers).
* **Programming** (C++ logic for automation).

---

## Versión en Español 🇪🇸

### 🌟 Resumen del Proyecto
¡Bienvenido al repositorio **Conveyor Belt Arduino DIY**! Este proyecto detalla el diseño, construcción y programación de una **Cinta Transportadora Clasificadora Automática**.

Controlado por un microcontrolador **Arduino**, este sistema utiliza un **Sensor de Color TCS3200** y **Servomotores** de alta precisión para clasificar objetos según su color (Rojo/Verde). Es un proyecto multidisciplinario que integra:
* **Diseño Mecánico** (Impresión 3D y Corte Láser).
* **Electrónica** (Cableado, Gestión de energía, Drivers L298N).
* **Programación** (Lógica en C++ para automatización).

---

## 📚 Documentation & Modules / Documentación y Módulos

Explore the sub-directories below for detailed instructions on each aspect of the build.
*Explora los sub-directorios a continuación para instrucciones detalladas sobre cada aspecto de la construcción.*

| Module / Módulo | Description / Descripción |
| :--- | :--- |
| **📦 [Bill of Materials (BOM)](./Conveyor-Belt-Arduino-V1/BOM%20v1/README.md)** | **Purchase List & Printed Parts.** <br>Full list of hardware (Bolts, Bearings, Motors) and the catalog of STL parts required for 3D printing.<br>---<br>**Lista de Compra y Piezas Impresas.**<br>Listado completo de hardware (Pernos, Rodamientos, Motores) y catálogo de STLs para imprimir. |
| **📐 [CAD Design Files](./Conveyor-Belt-Arduino-V1/CAD%20v1/README.md)** | **Source Models (Fusion 360 & STEP).** <br>Download the digital twin of the machine. Includes assembly files and individual part files for modification.<br>---<br>**Modelos Fuente (Fusion 360 y STEP).**<br>Descarga el gemelo digital de la máquina. Incluye archivos de ensamblaje y piezas individuales para modificar. |
| **🔦 [Acrylic Manufacturing](./Conveyor-Belt-Arduino-V1/Acrylic%20Wall%20Manufacturing/README.md)** | **Laser Cutting Files.** <br>Production files (`.dxf`, `.beam`) for the transparent 4mm side walls, critical for the structure.<br>---<br>**Archivos de Corte Láser.**<br>Archivos de producción (`.dxf`, `.beam`) para las paredes laterales transparentes de 4mm, críticas para la estructura. |
| **⚡ [Electronics & Wiring](./Conveyor-Belt-Arduino-V1/Electronics%20v1/README.md)** | **Schematics & Diagrams.** <br>How to wire the L298N, TCS3200 Sensor, and Servos. Includes common ground and soldering tips.<br>---<br>**Esquemas y Diagramas.**<br>Cómo cablear el L298N, Sensor TCS3200 y Servos. Incluye consejos de soldadura y tierra común. |
| **💻 [Software & Logic](./Conveyor-Belt-Arduino-V1/Code%20v1/README.md)** | **Arduino Firmware.** <br>Source code (`.ino`) for the sorting logic and the calibration utility for the color sensor.<br>---<br>**Firmware de Arduino.**<br>Código fuente (`.ino`) para la lógica de clasificación y la utilidad de calibración del sensor de color. |
| **📸 [Multimedia Gallery](./Multimedia/README.md)** | **Renders & Visuals.** <br>High-quality renders of the assembly, internal views, and future photos of the prototype.<br>---<br>**Renders y Visuales.**<br>Renders de alta calidad del ensamblaje, vistas internas y futuras fotos del prototipo. |

---

## 🎓 Acknowledgments / Agradecimientos

This project was made possible thanks to the support and facilities provided by the **University of Chile**.

*Este proyecto fue posible gracias al apoyo y las instalaciones provistas por la **Universidad de Chile**.*

| Institution / Institución | Contribution / Contribución |
| :---: | :--- |
| <img src="./Multimedia/Logos/logo_lemur.png" width="120" alt="LEMUR Logo"> | **LEMUR (Laboratorio de Ingeniería Mecatrónica y Robótica)**<br>For providing the workspace, 3D printers, and tools required for the belt assembly.<br>*(Por proveer el espacio, impresoras 3D y herramientas necesarias para el ensamblado de la correa).* |
| <img src="./Multimedia/Logos/logo_fablab.png" width="150" alt="FabLab Logo"> | **FABLAB U. de Chile**<br>For their technical advisory and access to specialized machinery, specifically the Beambox Series Pro laser cutter.<br>*(Por su asesoría y el uso de máquinas especializadas, principalmente la cortadora láser Beambox Series Pro).* |

---
*Open Source Project - 2025*