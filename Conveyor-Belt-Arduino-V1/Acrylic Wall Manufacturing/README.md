# Conveyor Belt Arduino - Acrylic Wall Manufacturing 🔦⚙️

*Author: Fernando Navarrete* ✍️

## English Version 🇺🇸

This folder contains the manufacturing files for the **Side Structural Walls** of the conveyor belt.

These components are critical as they hold the bearings (627zz) in place. We use **Laser Cutting** on **4mm Clear Acrylic** for precision and visibility.

### 📋 1. Part Specifications

| Specification | Value | Notes |
| --- | --- | --- |
| **Material** | Clear Acrylic (PMMA) | 4mm Thickness is critical. |
| **Stock Size** | **400mm x 300mm** | Standard purchased sheet size. |
| **Part Size** | 390mm x 100mm | *⚠️ Warning: Tight fit lengthwise (5mm margin/side).* |
| **Yield** | **3 Units per Sheet** | *Requires precise Zero alignment (See below).* |

### 📂 2. Files Included

* **`Soporte_Acr_lico.beam`**: **(Recommended)** Native Beam Studio project file. Contains the pre-configured layers for engraving and cutting. Ready to load into Flux Beambox.
* **`Soporte_Acr_lico.dxf`**: Standard Vector file. Use this if you need to import the geometry into other CAM software (LightBurn, RDWorks) or modify the CAD.
* **`Plano Fabricación paredes de acrílico V1.pdf`**: Technical drawing with dimensions and tolerances for quality control.

### 🖨️ 3. Manufacturing Workflow (Beambox Pro 50W)

The goal is to fit **3 parts vertically** (3 x 100mm) on a **300mm high sheet**. Since there is **zero margin** vertically, precise calibration is mandatory.

**⚠️ PREPARATION:**

1. **Remove the protective film** from the acrylic sheet **BEFORE** placing it in the machine.
2. Clean the sheet if necessary.

#### **Phase 1: Calibration ("The Zero Line")** 📏

*Before running the full job, you must define the exact top edge of the material.*

1. Place the sheet on the honeycomb bed.
2. In Beam Studio, draw a simple horizontal line at the very top of the canvas ().
3. **Engrave this line** on the sheet.
4. Check the result: This line indicates exactly where the laser interprets the "Top". Adjust your physical sheet or software offset until this line aligns perfectly with the material's top edge.

#### **Phase 2: The Job** ⚙️

Load `Soporte_Acr_lico.beam` and verify the following parameters (calibrated for Beambox Pro 50W):

* **Layer 1: Engraving (Logos/Text)**
* *Method:* Raster Engraving (Shading).
* *Power:* 15% - 20% | *Speed:* 250 - 300 mm/s


* **Layer 2: Cutting**
* *Method:* Vector Cut.
* *Power:* 55% - 60% | *Speed:* 5 - 7 mm/s
* *Passes:* 1



### 🛠️ 4. Post-Processing & Cleaning

* **Cleaning:** Clean the parts using **only water and a soft sponge**.
* *⛔ DO NOT use Alcohol or solvents (avoids cracking/crazing).*
* *⛔ DO NOT use abrasive cloths (avoids scratching).*



### ♻️ 5. Eco-Tip: Repurposing Offcuts

Don't throw away the waste! The cutting process generates high-quality internal scraps:

* **Internal Rounded Rectangle:** Perfect size for **Desktop Nameplates** or office signage.
* **Discs (Ø22mm & Ø20mm):** The cutouts from the bearing and button holes can be reused as tokens, keychains, or spacers.

---

## Versión en Español 🇪🇸

*Autor: Fernando Navarrete* ✍️

Esta carpeta contiene los archivos de fabricación para las **Paredes Estructurales Laterales** de la cinta transportadora.

Estos componentes son críticos para alojar los rodamientos. Utilizamos **Corte Láser** en **Acrílico Transparente de 4mm**.

### 📋 1. Especificaciones de la Pieza

| Especificación | Valor | Notas |
| --- | --- | --- |
| **Material** | Acrílico Transparente | Espesor de 4mm es crítico. |
| **Dimensiones Plancha** | **400mm x 300mm** | Tamaño de stock comercial. |
| **Dimensión Pieza** | 390mm x 100mm | *⚠️ OJO: Margen muy justo a lo largo (5mm por lado).* |
| **Rendimiento** | **3 Unidades por Plancha** | *Requiere alineación de "Cero" perfecta (Ver abajo).* |

### 📂 2. Archivos Incluidos

* **`Soporte_Acr_lico.beam`**: **(Recomendado)** Archivo nativo de Beam Studio. Contiene las capas preconfiguradas para grabado y corte. Listo para cargar en cortadoras Flux.
* **`Soporte_Acr_lico.dxf`**: Archivo vectorial estándar. Úsalo si necesitas importar la geometría a otro software CAM (LightBurn, RDWorks) o modificar el CAD.
* **`Plano Fabricación paredes de acrílico V1.pdf`**: Plano técnico con cotas y tolerancias para control de calidad.

### 🖨️ 3. Flujo de Trabajo (Beambox Pro 50W)

El objetivo es encajar **3 piezas verticalmente** (3 x 100mm) en una plancha de **300mm de alto**. Dado que el **margen vertical es cero**, la calibración es obligatoria.

**⚠️ PREPARACIÓN:**

1. **Retirar el film protector** de la plancha de acrílico **ANTES** de meterla a la máquina.
2. Limpiar la plancha si es necesario.

#### **Fase 1: Calibración ("La Línea de Cero")** 📏

*Antes del trabajo completo, debes definir el borde superior exacto del material.*

1. Coloca la plancha en la cama de la cortadora.
2. En Beam Studio, dibuja una línea horizontal simple en la parte superior del lienzo ().
3. **Graba esta línea** sobre la plancha.
4. Verifica el resultado: Esta línea te indica dónde interpreta el láser el "Inicio". Ajusta la posición física de la plancha hasta que esta línea coincida exactamente con el borde superior del material.

#### **Fase 2: El Trabajo** ⚙️

Carga el archivo `Soporte_Acr_lico.beam` y verifica los parámetros (calibrados para Beambox Pro 50W):

* **Capa 1: Grabado (Logos/Texto)**
* *Método:* Grabado Raster (Shading).
* *Potencia:* 15% - 20% | *Velocidad:* 250 - 300 mm/s


* **Capa 2: Corte**
* *Método:* Corte Vectorial.
* *Potencia:* 55% - 60% | *Velocidad:* 5 - 7 mm/s
* *Pases:* 1



### 🛠️ 4. Post-Procesado y Limpieza

* **Limpieza:** Lavar las piezas utilizando **solamente agua y una esponja suave**.
* *⛔ NO usar Alcohol ni solventes (evita microfisuras/crazing).*
* *⛔ NO usar paños abrasivos (el acrílico se raya fácil).*



### ♻️ 5. Eco-Tip: Reutilización de Sobrantes

¡No desperdicies material! El proceso de corte genera sobrantes internos de alta calidad que se acumulan tras varias planchas:

* **Rectángulo Redondeado Interno:** Tiene el tamaño ideal para fabricar **Placas de Nombre para escritorio** o señalética de oficina.
* **Discos (Ø22mm y Ø20mm):** Los recortes provenientes de los agujeros para rodamientos y el botón de encendido pueden reutilizarse como fichas, llaveros o espaciadores.

