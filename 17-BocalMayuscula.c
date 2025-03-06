/*
Angel Anselm0o Ruiz Esparza Sanchez
TDSM1B 4376
*/
#include <stdio.h>

int main() {
    char vocal;
    printf("Introduce una vocal en minúscula: ");
    scanf(" %c", &vocal);
    
    switch(vocal) {
        case 'a': printf("Vocal en mayúscula: A\n"); break;
        case 'e': printf("Vocal en mayúscula: E\n"); break;
        case 'i': printf("Vocal en mayúscula: I\n"); break;
        case 'o': printf("Vocal en mayúscula: O\n"); break;
        case 'u': printf("Vocal en mayúscula: U\n"); break;
        default: printf("ERROR: '%c' no es una vocal minúscula.\n", vocal);
    }
    return 0;
}