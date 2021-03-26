#include <stdio.h>

int main(){

    /*int A,B,X;

    scanf("%d", &A);
    scanf("%d", &B);

    X = A + B;

    printf("X = %d\n", X);*/

    /*double pi = 3.14159;

    double area, raio;

    scanf("%lf", &raio);

    area = pi * (raio*raio);

    printf("A=%.4lf", area);*/

    long int N;
    scanf("%d", &N);

    printf("%d\n", N);

    int cedulas[7] = {100, 50, 20, 10, 5, 2, 1};
    long int notas;

    for(int indice = 0; indice < sizeof(cedulas)/sizeof(cedulas[0]); indice++){
        //printf("%d\n", cedulas[indice]);

        for(notas = 0; (cedulas[indice] * notas) <= N; notas++){
            //printf("%d nota(s) de R$ %d,00\n", notas, cedulas[indice]);
            //printf("%d\n", notas*cedulas[indice]);
        }
        printf("%d nota(s) de R$ %d,00\n", notas-1, cedulas[indice]);

        N = N - ( cedulas[indice]*(notas-1) );


    }







return 0;
}
