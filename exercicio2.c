#include <stdio.h>
#include <locale.h>

/*
Escreva um programa em C que declare duas variáveis inteiras. Compare os
endereços de memória dessas variáveis e exiba o endereço de memória da
variável com o maior endereço.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	
	printf("Digite um número para variável n1: ");
	scanf("%d", &n1);
	
	printf("Digite um número para variável n2: ");
	scanf("%d", &n2);
	
	printf("O endereço de n1 é %d.\n", &n1);
	printf("O endereço de n2 é %d.\n", &n2);
	
	if(&n1 > &n2){
		printf("o endereço de memória de n1 é maior que o de n2");
		return;
	} 	
	printf("o endereço de memória de n2 é maior que o de n1");
}
