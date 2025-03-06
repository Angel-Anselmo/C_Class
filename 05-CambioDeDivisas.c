/*
Angel Anselm0o Ruiz Esparza Sanchez
TDSM1B 4376
*/
#include <stdio.h>

int main() {
    int pesos;
    float euros;
    printf("Ingrese la cantidad en Pesos: ");
    scanf("%d", &pesos);
    euros = pesos / 21.30;
    printf("El equivalente en euros es: %.2f\n", euros);
    return 0;
}