#include <stdio.h>


int main(){
	
	float num;
	
	printf("Digite um numero float: ");
	scanf("%f", &num);
	
	int part_int = (int) num;
	float part_dec = num - part_int;
	
	printf("Parte inteira: %d\n", part_int);
	printf("Parte decimal: %.2f\n", part_dec);
}
