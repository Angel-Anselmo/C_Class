/*
Angel Anselm0o Ruiz Esparza Sanchez
TDSM1B 4376
*/
#include <stdio.h>

int main() {
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    if (numero % 2 == 0) {
        printf("ES PAR\n");
    } else {
        printf("ES IMPAR\n");
    }
    return 0;
}