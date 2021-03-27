#include <stdio.h>

#define HORAEMSEGUNDOS 3600
#define MINUTO 60
#define SEGUNDO 60


int main() {

    int emHoras, emMinutos;

    int N;
    scanf("%d", &N);

    //transformar em horas
    emHoras = N/HORAEMSEGUNDOS;

    //transformar em minutos
    emMinutos = N/MINUTO;

    while (emMinutos >= MINUTO){
        emMinutos = emMinutos % MINUTO; // minuto precisa ser menor que 60, pois 60 é 1HR
    }

    //subtrai as horas e os minutos (em segundos)
    N = N - (emHoras * HORAEMSEGUNDOS + emMinutos * SEGUNDO);

    printf("%d:%d:%d\n", emHoras, emMinutos, N);

    return 0;
}
