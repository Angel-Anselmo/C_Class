/*
Angel Anselm0o Ruiz Esparza Sanchez
TDSM1B 4376
*/
/*UA2-1 Validar fecha
Escribir en lenguaje C un programa que:
1º) Pida por teclado una fecha en tres variables: día, mes y año (datos enteros).
2º) Muestre por pantalla:
 &quot;FECHA CORRECTA&quot;, en el caso de que la fecha sea válida.
 &quot;FECHA INCORRECTA&quot;, en el caso de que la fecha no sea válida.
Nota 1: Para que una fecha sea válida, se tiene que cumplir que:
 El mes debe ser mayor o igual que 1 y menor o igual que 12.
 El día debe ser mayor o igual que 1 y menor o igual que un número, el cual
dependerá del mes y año introducidos por el usuario.
Nota 2:
 Tienen 31 días: enero, marzo, mayo, julio, agosto, octubre y diciembre.
 Tienen 30 días: abril, junio, septiembre y noviembre.
 Tiene 29 días: febrero (si el año es bisiesto).
 Tiene 28 días: febrero (si el año no es bisiesto).
Nota 3: Son bisiestos todos los años múltiplos de 4, excepto aquellos que son
múltiplos de 100 pero no de 400.*/

#include <stdio.h>

int main() {
    int dia, mes, año;
    printf("Introduce el a\xA4o: ");
    scanf("%d", &año);
    printf("Introduce el mes: ");
    scanf("%d", &mes);
    printf("Introduce el dia: ");
    scanf("%d", &dia);
    if (mes < 1 || mes > 12) {
        printf("FECHA INCORRECTA. \n");
    }
    else if (mes = 1, 3, 5, 7, 8, 10, 12 && dia > 31 || dia <= 0){
        printf("FECHA INCORRECTA. \n");
    }
    else if (mes = 4, 6, 9, 11 && dia > 30 || dia <= 0){
        printf("FECHA INCORRECTA. \n");
    }
    else {
        printf("FECHA CORRECTA.");
    }
    if (mes == 2) {
        if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
            if (dia < 1 || dia > 29) {
                printf("FECHA INCORRECTA.\n");
            } else {
                printf("FECHA CORRECTA.\n");
            }
        } else {
            if (dia < 1 || dia > 28) {
                printf("FECHA INCORRECTA.\n");
            } else {
                printf("FECHA CORRECTA.\n");
            }
        }
    }
}