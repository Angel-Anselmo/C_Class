/*
Angel Anselm0o Ruiz Esparza Sanchez
TDSM1B 4376
*/
#include <stdio.h>

int main() {
    float examen1, examen2, examen3, promedio;
    printf("Ingrese la nota del primer examen: ");
    scanf("%f", &examen1);
    printf("Ingrese la nota del segundo examen: ");
    scanf("%f", &examen2);
    printf("Ingrese la nota del tercer examen: ");
    scanf("%f", &examen3);
    promedio = (examen1 + examen2 + examen3) / 3;
    printf("El promedio de los exámenes es: %.2f\n", promedio);
    return 0;
}