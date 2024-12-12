#include <stdio.h>
#include <string.h>

int main() {
    char students[5][20];
    char subjects[3][20];
    float scores[5][3];
    float scoresEPM[3][3];  // Promedio por materia
    float studentsAV[5][3]; // Promedio por estudiante, nota mayor, nota menor
    float scoresMXMN[3][2]; // Nota mayor y menor por materia

    // Leer nombres de estudiantes
    for (int i = 0; i < 5; i++) {
        printf("Ingrese el nombre del estudiante %d: ", i + 1);
        fgets(students[i], 20, stdin);
        students[i][strcspn(students[i], "\n")] = '\0';  // Eliminar el salto de línea de fgets
    }

    // Leer nombres de materias
    for (int i = 0; i < 3; i++) {
        printf("Ingrese el nombre de la materia %d: ", i + 1);
        fgets(subjects[i], 20, stdin);
        subjects[i][strcspn(subjects[i], "\n")] = '\0';  // Eliminar el salto de línea de fgets
    }

    // Leer calificaciones de los estudiantes
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            do {
                printf("Ingrese la calificación del estudiante %s para la materia %s\n", students[i], subjects[j]);
                printf("La calificación debe estar en un rango de 0 - 10: ");
                scanf("%f", &scores[i][j]);
            } while (scores[i][j] < 0 || scores[i][j] > 10); // Validar el rango de las calificaciones
        }
    }

    // Calcular promedio por materia
    for (int j = 0; j < 3; j++) {
        scoresEPM[j][0] = (scores[0][j] + scores[1][j] + scores[2][j] + scores[3][j] + scores[4][j]) / 5;
    }

    // Calcular promedio por estudiante
    for (int j = 0; j < 5; j++) {
        studentsAV[j][0] = (scores[j][0] + scores[j][1] + scores[j][2]) / 3;
    }

    // Calcular la nota mayor y menor por materia
    for (int j = 0; j < 3; j++) {
        float max = scores[0][j];
        float min = scores[0][j];
        for (int i = 1; i < 5; i++) {
            if (scores[i][j] > max) max = scores[i][j];
            if (scores[i][j] < min) min = scores[i][j];
        }
        scoresMXMN[j][0] = max;
        scoresMXMN[j][1] = min;
    }

    // Calcular la nota mayor y menor por estudiante
    for (int i = 0; i < 5; i++) {
        float max = scores[i][0];
        float min = scores[i][0];
        for (int j = 1; j < 3; j++) {
            if (scores[i][j] > max) max = scores[i][j];
            if (scores[i][j] < min) min = scores[i][j];
        }
        studentsAV[i][1] = max;
        studentsAV[i][2] = min;
    }

    // Contabilizar aprobados y reprobados por materia
    for (int j = 0; j < 3; j++) {
        scoresEPM[j][1] = 0; // Aprobados
        scoresEPM[j][2] = 0; // Reprobados
        for (int i = 0; i < 5; i++) {
            if (scores[i][j] >= 6)
                scoresEPM[j][1]++;
            else
                scoresEPM[j][2]++;
        }
    }

    // Imprimir los resultados

    // Promedio por materia
    printf("=== Promedio por Materia ===\n");
    for (int i = 0; i < 3; i++) {
        printf("El promedio de la materia %s es: %.2f\n", subjects[i], scoresEPM[i][0]);
    }
    printf("============================\n\n");

    // Promedio por estudiante
    printf("=== Promedio por Estudiante ===\n");
    for (int i = 0; i < 5; i++) {
        printf("El promedio del estudiante %s es: %.2f\n", students[i], studentsAV[i][0]);
    }
    printf("==============================\n");

    // Aprobados y reprobados por materia
    for (int i = 0; i < 3; i++) {
        printf("La cantidad de estudiantes aprobados en la materia %s es: %.0f\n", subjects[i], scoresEPM[i][1]);
        printf("La cantidad de estudiantes reprobados en la materia %s es: %.0f\n", subjects[i], scoresEPM[i][2]);
    }

    // Nota mayor y menor por estudiante
    printf("=== Nota mayor y menor por Estudiante ===\n");
    for (int i = 0; i < 5; i++) {
        printf("La mayor nota del estudiante %s es: %.2f\n", students[i], studentsAV[i][1]);
        printf("La menor nota del estudiante %s es: %.2f\n", students[i], studentsAV[i][2]);
    }

    // Nota mayor y menor por materia
    printf("=== Nota mayor y menor por Materia ===\n");
    for (int i = 0; i < 3; i++) {
        printf("La mayor nota de la materia %s es: %.2f\n", subjects[i], scoresMXMN[i][0]);
        printf("La menor nota de la materia %s es: %.2f\n", subjects[i], scoresMXMN[i][1]);
    }

    return 0;
}
