/*
Angel Anselm0o Ruiz Esparza Sanchez
TDSM1B 4376
*/
#include <stdio.h>

int main() {
    int planeta;
    printf("Listado de planetas:\n1. Mercurio\n2. Venus\n3. Tierra\n4. Marte\n5. Júpiter\n6. Saturno\n7. Urano\n8. Neptuno\n9. Plutón\n");
    printf("Introduce el número del planeta: ");
    scanf("%d", &planeta);
    
    switch(planeta) {
        case 1: printf("Distancia media al Sol: 59 millones de km\n"); break;
        case 2: printf("Distancia media al Sol: 108 millones de km\n"); break;
        case 3: printf("Distancia media al Sol: 150 millones de km\n"); break;
        case 4: printf("Distancia media al Sol: 228 millones de km\n"); break;
        case 5: printf("Distancia media al Sol: 750 millones de km\n"); break;
        case 6: printf("Distancia media al Sol: 1431 millones de km\n"); break;
        case 7: printf("Distancia media al Sol: 2877 millones de km\n"); break;
        case 8: printf("Distancia media al Sol: 4509 millones de km\n"); break;
        case 9: printf("Distancia media al Sol: 5916 millones de km\n"); break;
        default: printf("ERROR: %d no está asociado a ningún planeta.\n", planeta);
    }
    return 0;
}