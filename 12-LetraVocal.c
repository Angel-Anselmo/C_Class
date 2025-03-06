/*
Angel Anselm0o Ruiz Esparza Sanchez
TDSM1B 4376
*/
#include <stdio.h>

int main() {
    char letra;
    printf("Ingrese una letra: ");
    scanf(" %c", &letra); // Espacio antes de %c para ignorar espacios en blanco
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        printf("ES UNA VOCAL\n");
    } else {
        printf("NO ES UNA VOCAL\n");
    }
    return 0;
}