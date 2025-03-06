/*
Angel Anselm0o Ruiz Esparza Sanchez
TDSM1B 4376
*/
#include <stdio.h>

int main() {
    int año;
    printf("Ingrese un año: ");
    scanf("%d", &año);
    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
        printf("ES BISIESTO\n");
    } else {
        printf("NO ES BISIESTO\n");
    }
    return 0;
}