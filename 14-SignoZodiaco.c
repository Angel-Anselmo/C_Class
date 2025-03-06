/*
Angel Anselm0o Ruiz Esparza Sanchez
TDSM1B 4376
*/
#include <stdio.h>

int main() {
    int signo;
    printf("Listado de signos del zodíaco:\n1. Aries\n2. Tauro\n3. Géminis\n4. Cáncer\n5. Leo\n6. Virgo\n7. Libra\n8. Escorpio\n9. Sagitario\n10. Capricornio\n11. Acuario\n12. Piscis\n");
    printf("Introduce el número del signo del zodíaco: ");
    scanf("%d", &signo);
    
    switch(signo) {
        case 1: printf("Categoría: Fuego\n"); break;
        case 2: printf("Categoría: Tierra\n"); break;
        case 3: printf("Categoría: Aire\n"); break;
        case 4: printf("Categoría: Agua\n"); break;
        case 5: printf("Categoría: Fuego\n"); break;
        case 6: printf("Categoría: Tierra\n"); break;
        case 7: printf("Categoría: Aire\n"); break;
        case 8: printf("Categoría: Agua\n"); break;
        case 9: printf("Categoría: Fuego\n"); break;
        case 10: printf("Categoría: Tierra\n"); break;
        case 11: printf("Categoría: Aire\n"); break;
        case 12: printf("Categoría: Agua\n"); break;
        default: printf("ERROR: %d no está asociado a ningún signo.\n", signo);
    }
    return 0;
}