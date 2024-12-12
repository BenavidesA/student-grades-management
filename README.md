# Student Grades Management

Este proyecto es un sistema sencillo para gestionar y analizar las calificaciones de los estudiantes en distintas materias. Permite registrar nombres de estudiantes, materias, calificaciones y realizar varios análisis, como calcular promedios por materia y por estudiante, determinar las notas más altas y bajas, y contabilizar los aprobados y reprobados.

## Descripción

El programa realiza las siguientes funciones:
- **Registrar estudiantes y materias**: Permite ingresar los nombres de los estudiantes y las materias.
- **Ingreso de calificaciones**: Se ingresan las calificaciones de los estudiantes para cada materia. Las calificaciones deben estar en un rango de 0 a 10.
- **Cálculo de promedios**: Calcula el promedio por materia y por estudiante.
- **Análisis de rendimiento**: Determina la mayor y menor calificación por estudiante y por materia, además de contar los aprobados y reprobados por materia.

## Requisitos

Este proyecto fue escrito en **C**, por lo que necesitas un compilador de C para ejecutarlo, como **GCC**.

## Instrucciones de Uso

1. Clona el repositorio en tu máquina local:

   ```bash
   git clone https://github.com/tuusuario/student-grades-management.git
Ingresa al directorio del proyecto:

bash
Copiar código
cd student-grades-management
Compila el programa:

bash
Copiar código
gcc -o student_grades_management main.c
Ejecuta el programa:

bash
Copiar código
./student_grades_management
Ingresa los datos solicitados (nombres de estudiantes, materias y calificaciones) y el programa calculará los resultados.

# Funcionalidades
Ingreso de Datos
- Se solicita el nombre de 5 estudiantes.
- Se solicitan los nombres de 3 materias.
- Se ingresan las calificaciones de los estudiantes para cada materia, con validación para asegurarse de que las calificaciones estén en el rango de 0 a 10.
# Cálculos Realizados
Promedio por Materia: Calcula el promedio de las calificaciones de todos los estudiantes por materia.
Promedio por Estudiante: Calcula el promedio de las calificaciones de cada estudiante.
Nota Mayor y Menor por Materia: Calcula la nota más alta y la más baja para cada materia.
Nota Mayor y Menor por Estudiante: Calcula la nota más alta y la más baja de cada estudiante.
Aprobados y Reprobados por Materia: Cuenta cuántos estudiantes aprobaron o reprobaron cada materia (se considera aprobado con una calificación igual o superior a 6).
