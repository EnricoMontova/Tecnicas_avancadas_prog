#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	
	printf("Digite um n�mero para vari�vel n1: ");
	scanf("%d", &n1);
	
	printf("Digite um n�mero para vari�vel n2: ");
	scanf("%d", &n2);
	
	printf("O endere�o de n1 � %d.\n", &n1);
	printf("O endere�o de n2 � %d.\n", &n2);
	
	if(&n1 > &n2){
		printf("o endere�o de mem�ria de n1 � maior que o de n2");
		return;
	} 	
	printf("o endere�o de mem�ria de n2 � maior que o de n1");
}
