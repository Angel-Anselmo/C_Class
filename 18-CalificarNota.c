/*
Angel Anselm0o Ruiz Esparza Sanchez
TDSM1B 4376
*/
#include <stdio.h>

int main() {
    float nota;
    printf("Introduce la nota: ");
    scanf("%f", &nota);
    
    if (nota >= 7 && nota <= 10) {
        printf("APTO\n");
    } else if (nota >= 0 && nota < 7) {
        printf("NO APTO\n");
    } else {
        printf("ERROR: Nota incorrecta.\n");
    }
    return 0;
}