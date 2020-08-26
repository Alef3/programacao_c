#include <stdio.h>

int main(){

int impar;
int dividir;
int maisdois = 1;

printf("Digite um inteiro impar: ");
scanf("%d", &impar);

if( impar <=0 || impar % 2 == 0 ){
    printf("O número não pode ser menor\n ou igual a zero ou par!");
}else{
//    *
//   ***
//  *****
// *******
//*********          << saída quando impar == 5

    dividir = (impar/2) + 1;
    //printf("%d", dividir);
    
    for(int i = 1; i <= impar; i++){
    
        for(int k = 1; k <= impar - i; k++){
            printf(" ");
        }
        
        for(int j = 1; j <= maisdois; j++){
            printf("*");
        }
        
        printf("\n");

        maisdois = maisdois + 2;
    }

}



}
