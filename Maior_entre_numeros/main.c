#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	float n1, n2;
	
	printf("Insira o primeiro numero:\n");
	scanf("%f", &n1);
	printf("Insira o segundo numero:\n");
	scanf("%f", &n2);
	
	if(n1 > n2){
		printf("Maior: %.1f.\n", n1);
	}else{
		if(n2 > n1){
			printf("Maior: %.1f.\n", n2);
		}else{
			printf("Os numeros sao iguais.\n");
		}
	}
	return 0;
}
