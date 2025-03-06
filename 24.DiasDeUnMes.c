/*
Angel Anselm0o Ruiz Esparza Sanchez
TDSM1B 4376
*/
#include <stdio.h>

int main() {
    int año, mes, dias;
    printf("Introduce el año: ");
    scanf("%d", &año);
    printf("Introduce el mes (1-12): ");
    scanf("%d", &mes);
    
    if (mes < 1 || mes > 12) {
        printf("ERROR: Mes incorrecto.\n");
    } else {
        switch(mes) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                dias = 31; break;
            case 4: case 6: case 9: case 11:
                dias = 30; break;
            case 2:
                if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
                    dias = 29; // Año bisiesto
                } else {
                    dias = 28; // Año no bisiesto
                }
                break;
        }
        printf("El mes %d del año %d tiene %d días.\n", mes, año, dias);
    }
    return 0;
}