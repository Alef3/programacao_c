#include <stdio.h>

int main(){

int linhas;

printf("Digite um numero inteiro: ");
scanf("%d", &linhas);

for(int i = 1; i <= linhas; i++){
    //printf("%d", i);
    for(int j = 1; j <= i; j++){
        printf("%d ", (i*j) );
    }
    printf("\n");
}

}
