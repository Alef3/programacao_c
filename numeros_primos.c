#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
int ehPrimo = 0;
	
setlocale(LC_ALL, "Portuguese");
printf("ALGORITMO PARA NÚMEROS PRIMOS DE 2 A 100 \n");
	
	for (int num = 2; num <= 100; num++) {
		
	    for (int divisor = num; divisor >= 1; divisor--) {
		    
	        if(num % divisor == 0) ehPrimo++;
		    
	    }
		
	    if (ehPrimo == 2) printf("Primo: %d \n", num);
		
	    ehPrimo = 0;
	}
	
return 0;
}
