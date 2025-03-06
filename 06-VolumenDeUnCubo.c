/*
Angel Anselm0o Ruiz Esparza Sanchez
TDSM1B 4376
*/
#include <stdio.h>

int main() {
    float arista, volumen;
    printf("Ingrese la arista del cubo: ");
    scanf("%f", &arista);
    volumen = arista * arista * arista;
    printf("El volumen del cubo es: %.2f\n", volumen);
    return 0;
}