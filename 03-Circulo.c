/*
Angel Anselm0o Ruiz Esparza Sanchez
TDSM1B 4376
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>



int main(void) {
    float radio, area, pi=3.1416;;

    printf("Ingrese el valor der radio: ");
    scanf("%f,&radio");
    area=radio*radio*pi;//pi*(radio^2)
    printf("El radio %crea de un circulo con radio %f es: %f", 160, (radio,area));

    getch();
    return 0;
}