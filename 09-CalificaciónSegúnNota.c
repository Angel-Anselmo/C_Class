/*
Angel Anselm0o Ruiz Esparza Sanchez
TDSM1B 4376
*/
#include <stdio.h>

int main() {
    float nota;
    printf("Ingrese la nota de la asignatura: ");
    scanf("%f", &nota);
    if (nota >= 7) {
        printf("APROBADO\n");
    } else {
        printf("REPROBADO\n");
    }
    return 0;
}