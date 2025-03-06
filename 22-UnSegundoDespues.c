/*
Angel Anselm0o Ruiz Esparza Sanchez
TDSM1B 4376
*/
#include <stdio.h>

int main() {
    int horas, minutos, segundos;
    printf("Introduce la hora (horas minutos segundos): ");
    scanf("%d %d %d", &horas, &minutos, &segundos);
    
    if (horas < 0 || horas > 23 || minutos < 0 || minutos > 59 || segundos < 0 || segundos > 59) {
        printf("ERROR: La hora es incorrecta.\n");
    } else {
        segundos++;
        if (segundos == 60) {
            segundos = 0;
            minutos++;
            if (minutos == 60) {
                minutos = 0;
                horas++;
                if (horas == 24) {
                    horas = 0;
                }
            }
        }
        printf("La hora un segundo después es: %02d:%02d:%02d\n", horas, minutos, segundos);
    }
    return 0;
}