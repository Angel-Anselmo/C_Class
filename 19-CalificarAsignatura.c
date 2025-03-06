/*
Angel Anselm0o Ruiz Esparza Sanchez
TDSM1B 4376
*/
#include <stdio.h>

int main() {
    float nota;
    printf("Introduce la nota: ");
    scanf("%f", &nota);
    
    if (nota >= 9 && nota <= 10) {
        printf("SOBRESALIENTE\n");
    } else if (nota >= 8 && nota < 9) {
        printf("NOTABLE\n");
    } else if (nota >= 6 && nota < 8) {
        printf("BIEN\n");
    } else if (nota >= 5 && nota < 6) {
        printf("SUFICIENTE\n");
    } else if (nota >= 3 && nota < 5) {
        printf("INSUFICIENTE\n");
    } else if (nota >= 0 && nota < 3) {
        printf("MUY DEFICIENTE\n");
    } else {
        printf("ERROR: Nota incorrecta.\n");
    }
    return 0;
}