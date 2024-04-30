#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Antes das alterações:\n");
	int i = 1;
	int *p_int = &i;
	printf("Variável int: %d\n", *p_int);
	
	float f = 1.5;
	float *p_float = &f;
	printf("Variável float: %.2f\n", *p_float);
	
	char c = 'a';
	char *p_char = &c;
	printf("Variável char: %c\n", *p_char);
	
	printf("Depois das alterações:\n");
	*p_int = 2;
	printf("Variável int: %d\n", *p_int);
	
	*p_float = 0.5;
	printf("Variável float: %.2f\n", *p_float);
	
	*p_char = 'b';
	printf("Variável char: %c\n", *p_char);
}
