/*
Angel Anselm0o Ruiz Esparza Sanchez
TDSM1B 4376
*/
#include <stdio.h>

int main() {
    int dia;
    printf("Introduce el número del día de la semana (1-7): ");
    scanf("%d", &dia);
    
    switch(dia) {
        case 1: printf("Lunes\n"); break;
        case 2: printf("Martes\n"); break;
        case 3: printf("Miércoles\n"); break;
        case 4: printf("Jueves\n"); break;
        case 5: printf("Viernes\n"); break;
        case 6: printf("Sábado\n"); break;
        case 7: printf("Domingo\n"); break;
        default: printf("ERROR: Día incorrecto.\n");
    }
    return 0;
}