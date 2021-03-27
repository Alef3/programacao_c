#include <stdio.h>

#define HORAEMSEGUNDOS 3600
#define MINUTOS 60
#define SEGUNDOS 60


int main() {

    int emHoras, emMinutos;

    int N;
    scanf("%d", &N);

    //transformar em horas
    emHoras = N/HORAEMSEGUNDOS;

    //transformar em minutos
    emMinutos = N/MINUTOS;

    if (emMinutos > MINUTOS){
        emMinutos = emMinutos % MINUTOS; // minuto precisa ser menor que 60, pois 60 é 1HR
    }

    //subtrai as horas e os minutos (em segundos)
    N = N - (emHoras * HORAEMSEGUNDOS + emMinutos * SEGUNDOS);

    printf("%d:%d:%d\n", emHoras, emMinutos, N);

    return 0;
}
