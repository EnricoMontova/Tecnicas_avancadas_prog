#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Antes das altera��es:\n");
	int i = 1;
	int *p_int = &i;
	printf("Vari�vel int: %d\n", *p_int);
	
	float f = 1.5;
	float *p_float = &f;
	printf("Vari�vel float: %.2f\n", *p_float);
	
	char c = 'a';
	char *p_char = &c;
	printf("Vari�vel char: %c\n", *p_char);
	
	printf("Depois das altera��es:\n");
	*p_int = 2;
	printf("Vari�vel int: %d\n", *p_int);
	
	*p_float = 0.5;
	printf("Vari�vel float: %.2f\n", *p_float);
	
	*p_char = 'b';
	printf("Vari�vel char: %c\n", *p_char);
}
