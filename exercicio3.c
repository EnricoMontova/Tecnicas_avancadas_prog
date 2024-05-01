#include <stdio.h>

/*
Escreva uma função em C que, dada um número real como parâmetro,
retorne a parte inteira e a parte fracionária desse número. Escreva também um
programa que chame essa função.
*/

void frac(float num, int *inteiro, float *frac) {
    
    *inteiro = (int)num;
    *frac = num - *inteiro;
}


int main(){
	
	float n;
	
	printf("Digite um numero float: ");
	scanf("%f", &n);
	
	int part_int;
	float part_frac;
	
	frac(n, &part_int, &part_frac);
	
	printf("Parte inteira: %d\n", part_int);
	printf("Parte decimal: %.2f\n", part_frac);
}
