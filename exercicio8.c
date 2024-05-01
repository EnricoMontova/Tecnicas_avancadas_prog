#include <stdio.h>

/*
Crie um programa em C que contenha um array de inteiros com 5 elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima
o dobro de cada valor lido.
*/

int main(){
	
	int vetor[5]; 
    int *ponteiro;     

    printf("Digite os 5 elementos do vetor:\n");
    
    ponteiro = vetor;
	
	int i;
    for ( i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", ponteiro + i); 
    }

    printf("O dobro de cada elemento:\n");
    for (i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i + 1, *(ponteiro + i) * 2); 
    }

    return 0;
}
