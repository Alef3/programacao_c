#include <stdio.h>
#include <stdlib.h>

int main()
{
int cont=0, num=2, div=1;

for(num = 2; num <= 100; num++){
	for(div = 1; div <= num; div++){
		if(num % div == 0){
			cont++;
		}
		
	}
	if(cont == 2){
			printf("%d  ", num);
		cont = 0;
		}
		else{
			cont = 0;
		}
}

	return 0;
}