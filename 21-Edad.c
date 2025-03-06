/*
Angel Anselm0o Ruiz Esparza Sanchez
TDSM1B 4376
*/
#include <stdio.h>

int main() {
    int edad;
    printf("Introduce la edad: ");
    scanf("%d", &edad);
    
    if (edad < 0 || edad > 120) {
        printf("ERROR: Edad incorrecta.\n");
    } else if (edad == 0 || edad == 1) {
        printf("BEBÉ\n");
    } else if (edad >= 2 && edad <= 12) {
        printf("NIÑO\n");
    } else if (edad >= 13 && edad <= 17) {
        printf("ADOLESCENTE\n");
    } else if (edad >= 18 && edad <= 30) {
        printf("JOVEN\n");
    } else if (edad >= 31 && edad <= 64) {
        printf("ADULTO\n");
    } else {
        printf("ANCIANO\n");
    }
    return 0;
}