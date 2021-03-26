#include <stdio.h>

int main(){

    int N;
    scanf("%d", &N);

    printf("%d\n", N);

    int cedulas[7] = {100, 50, 20, 10, 5, 2, 1};
    int quantidade;

    for(int indice = 0; indice < sizeof(cedulas)/sizeof(cedulas[0]); indice++){
        //printf("%d\n", cedulas[indice]);

        for(quantidade = 0; (cedulas[indice] * quantidade) <= N; quantidade++){
            //printf("%d nota(s) de R$ %d,00\n", quantidade, cedulas[indice]);
            //printf("%d\n", quantidade*cedulas[indice]);
        }
        printf("%d nota(s) de R$ %d,00\n", quantidade-1, cedulas[indice]);

        N = N - ( cedulas[indice]*(quantidade-1) );


    }







return 0;
}
