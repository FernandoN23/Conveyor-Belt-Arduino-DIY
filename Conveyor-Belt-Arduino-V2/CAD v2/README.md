# Conveyor Belt Arduino DIY - CAD Models 📐🤖

*Author: Fernando Navarrete* ✍️

## English Version 🇺🇸

Welcome to the **Digital Design Repository** for the **REPOS Sorting Conveyor Belt**!

This directory contains the source files for the mechanical structure. Whether you want to modify the design or simply export files for 3D printing, you will find everything you need here.

### 📂 1. Available File Formats
We provide the models in two industry-standard formats to ensure compatibility with your preferred CAD software.

| Format | Extension | Description | Recommended Use |
| :--- | :---: | :--- | :--- |
| **Fusion 360** | `.f3d` | **Native Source Files.** Contains the full design history and parametric timeline. | Best for **editing**, modifying dimensions, or remixing the project using Autodesk Fusion 360. |
| **STEP** | `.step` | **Universal Exchange Format.** Standard 3D model format without design history. | Best for importing into **SolidWorks, Inventor, Rhino, Onshape**, or slicers. |

### 🗂️ 2. Directory Structure

> **📍 NAVIGATION TIP:**
> The files are organized by format. Choose the folder that matches your software workflow: `../Fusion360` or `../STEP`.

Inside each format folder, you will find:

* **`Ensamble Correa Transportadora Oruga`** (Main File):
    * This is the **Full Assembly**. It contains the entire machine fully assembled. Use this file to understand how parts fit together, check clearances, or view the complete digital twin.
* **`/Parts`** (Sub-folder):
    * Contains **Individual Component Files**. Each part (e.g., *Engranaje*, *Soporte Motor*, *Caja Receptora*) is saved as a separate file.
    * **Use these files for 3D Printing:** Open these individual files to export them as `.stl` or `.3mf` for your slicer software.

### ⚠️ Important Manufacturing Notes

* **Acrylic Side Walls:** The files named `Soportes_Acrilico` are included here for assembly reference only. **DO NOT 3D PRINT THESE PARTS.** They are designed for Laser Cutting (4mm Acrylic).
    * 👉 **For production files (`.dxf`, `.beam`) and laser parameters, please refer to the [Acrylic Wall Manufacturing](../Acrylic%20Wall%20Manufacturing/README.md) directory.**
* **Tolerances:** The CAD models are designed with standard FDM tolerances. If your printer is not calibrated, you may need to adjust "Hole Horizontal Expansion" in your slicer or use a drill bit to clean up bolt holes (M3/M4).

---

## Versión en Español 🇪🇸

*Autor: Fernando Navarrete* ✍️

¡Bienvenido al **Repositorio de Diseño Digital** de la **Correa Transportadora Clasificadora REPOS**!

Este directorio contiene los archivos fuente de la estructura mecánica. Ya sea que desees modificar el diseño o simplemente exportar archivos para impresión 3D, aquí encontrarás todo lo necesario.

### 📂 1. Formatos de Archivo Disponibles
Proporcionamos los modelos en dos formatos estándar de la industria para asegurar la compatibilidad con tu software CAD preferido.

| Formato | Extensión | Descripción | Uso Recomendado |
| :--- | :---: | :--- | :--- |
| **Fusion 360** | `.f3d` | **Archivos Fuente Nativos.** Contiene el historial de diseño completo y la línea de tiempo paramétrica. | Ideal para **editar**, modificar dimensiones o hacer "remix" del proyecto usando Autodesk Fusion 360. |
| **STEP** | `.step` | **Formato de Intercambio Universal.** Modelo 3D estándar sin historial de diseño. | Ideal para importar en **SolidWorks, Inventor, Rhino, Onshape** o directamente en laminadores (slicers). |

### 🗂️ 2. Estructura de Directorios

> **📍 TIP DE NAVEGACIÓN:**
> Los archivos están organizados por formato. Elige la carpeta que coincida con tu flujo de trabajo: `../Fusion360` o `../STEP`.

Dentro de cada carpeta de formato, encontrarás:

* **`Ensamble Correa Transportadora Oruga`** (Archivo Principal):
    * Este es el **Ensamblaje Completo**. Contiene la máquina entera totalmente armada. Usa este archivo para entender cómo encajan las piezas, verificar holguras o ver el gemelo digital completo.
* **`/Parts`** (Sub-carpeta):
    * Contiene **Archivos de Componentes Individuales**. Cada pieza (ej. *Engranaje*, *Soporte Motor*, *Caja Receptora*) está guardada como un archivo separado.
    * **Usa estos archivos para Impresión 3D:** Abre estos archivos individuales para exportarlos como `.stl` o `.3mf` para tu software de laminado (slicer).

### ⚠️ Notas Importantes de Manufactura

* **Paredes Laterales de Acrílico:** Los archivos llamados `Soportes_Acrilico` se incluyen aquí solo como referencia de ensamblaje. **NO IMPRIMIR EN 3D ESTAS PIEZAS.** Están diseñadas para Corte Láser (Acrílico 4mm).
    * 👉 **Para los archivos de producción (`.dxf`, `.beam`) y parámetros láser, por favor revisa el directorio [Acrylic Wall Manufacturing](../Acrylic%20Wall%20Manufacturing/README.md).**
* **Tolerancias:** Los modelos CAD están diseñados con tolerancias estándar para FDM. Si tu impresora no está calibrada, podrías necesitar ajustar la "Expansión Horizontal de Agujeros" en tu slicer o usar una broca para limpiar los orificios de los pernos (M3/M4).

---
*Happy Making! / ¡Feliz Fabricación!* 🛠️
