#include <stdio.h>

int main(){

int i, espacos, asteriscos = 1;

int n = 9;
int div_inteira = (n/2) + 1;
int maisdois = 1;
int menosdois = 0;

for(i = 1; i <= div_inteira; i++){

    for(espacos = 1; espacos <= (div_inteira-i); espacos++){
        printf(" ");
    }

    for(asteriscos = 1; asteriscos <= maisdois; asteriscos++){
        printf("*");
    }

    printf("\n");
    maisdois = maisdois + 2;

}


for(i = 1; i <= div_inteira-1; i++){

    for(espacos = 1; espacos <= i; espacos++){
        printf(" ");
    }

    for(asteriscos = 1; asteriscos < (n-1) - menosdois; asteriscos++){
        printf("*");
    }

    printf("\n");
    menosdois = menosdois + 2;
}

return 0;
}
