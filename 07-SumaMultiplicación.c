/*
Angel Anselm0o Ruiz Esparza Sanchez
TDSM1B 4376
*/
#include <stdio.h>

int main() {
    float num1, num2, suma, multiplicacion;
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);
    suma = num1 + num2;
    multiplicacion = num1 * num2;
    printf("La suma es: %.2f\n", suma);
    printf("La multiplicación es: %.2f\n", multiplicacion);
    return 0;
}