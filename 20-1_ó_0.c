/*
Angel Anselm0o Ruiz Esparza Sanchez
TDSM1B 4376
*/
#include <stdio.h>

int main() {
    float numero;
    printf("Introduce un número: ");
    scanf("%f", &numero);
    
    if (numero < 0.5) {
        printf("Está más cercano al 0\n");
    } else if (numero > 0.5) {
        printf("Está más cercano al 1\n");
    } else {
        printf("Está en medio\n");
    }
    return 0;
}