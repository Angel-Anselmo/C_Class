/*
Angel Anselm0o Ruiz Esparza Sanchez
TDSM1B 4376
*/
#include <stdio.h>

int main() {
    int numero, digitos = 0;
    printf("Introduce un número entero: ");
    scanf("%d", &numero);
    
    if (numero == 0) {
        digitos = 1;
    } else {
        while (numero != 0) {
            numero /= 10;
            digitos++;
        }
    }
    
    if (digitos >= 4) {
        printf("Tiene más de 3 dígitos\n");
    } else {
        printf("Número de dígitos: %d\n", digitos);
    }
    return 0;
}