#include <stdio.h>

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
