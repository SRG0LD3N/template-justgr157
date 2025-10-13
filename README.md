# 📁 Portafolio de Proyectos y Tareas (AAG)

Este repositorio documenta el progreso y las soluciones desarrolladas durante mis ejercicios de programación en C++, Python y Java. El objetivo es practicar conceptos fundamentales como estructuras de control, manejo de datos, y algoritmos con matrices y cadenas.

---

## 🚀 Proyectos Principales

| Archivo | Lenguaje | Descripción |
| :--- | :--- | :--- |
| **`proyecto1.cpp`** | C++ | **Sistema de Gestión de Productos.** Implementa un CRUD (Crear, Leer, Actualizar) básico de productos. Practica el uso de `struct`, `std::vector`, manejo de archivos (`fstream`), y la conversión de tipos (`stoi`, `stof`). |
| **`proyecto1.py`** | Python | Traducción y versión simplificada del Gestor de Productos en Python, utilizando listas y diccionarios, con persistencia de datos mediante el módulo **CSV**. |
| **`ProyectoII_Matrices_AAG.py`** | Python | Serie de ejercicios centrados en **álgebra lineal y manipulación de cadenas de texto** (ver el pseudocódigo adjunto para el menú completo). |
| **`Proyecto 3_AAG.cpp`** | C++ | Ejercicios avanzados en C++, probablemente relacionados con el uso de estructuras de datos más complejas o el manejo de memoria. |
| **`Restaurante.java`** / **`.class`** | Java | Archivos que indican la práctica de **Programación Orientada a Objetos (POO)** en Java. |

---

## ⚙️ Algoritmos y Lógica Practicada

Esta sección describe la lógica central desarrollada para los ejercicios de matrices y cadenas, que se opera mediante un **Menú de Opciones** con la **Estructura `switch`**.

### 📝 Estructura del Programa (Pseudocódigo)

El programa maneja un menú con 8 opciones principales, divididas en operaciones matemáticas y de texto:

| Opción | Tipo de Operación | Conceptos Practicados |
| :--- | :--- | :--- |
| **1-4** | **Matrices** | Suma, Transpuesta, Multiplicación y Búsqueda de un número. |
| **5-8** | **Cadenas de Texto** | Contar Palabras, Ordenar Caracteres, Detectar Subcadenas y Verificar **Palíndromos**. |

### ✅ Conceptos de Control Practicados

La documentación incluida en los archivos `README.md` o `Readme2.md` se enfoca en la implementación de:

* **Estructura `if-else`:** Para tomar decisiones con múltiples condiciones (ej: positivo, negativo, cero).
* **Estructura `switch`:** Para ejecutar bloques de código basados en la selección de una opción de menú.

---

## ⚠️ Notas de Desarrollo (Compilación)

Durante el desarrollo en C++ con Dev-C++, se encontró y solucionó un error común para entornos antiguos:

* **Problema:** Errores `[Error] 'stoi' was not declared...`
* **Solución:** Se requirió configurar el compilador con el *flag* `-std=c++11` para que reconozca las funciones modernas de conversión de texto a número (`string to int`/`float`).
