#include <stdio.h>
#include <locale.h>

/*
Escreva uma função em C que aceita como parâmetro um array de inteiros
com N valores e determina o maior elemento do array, bem como o número de
vezes que esse elemento ocorreu no array. Por exemplo, para um array com os
seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a função deve retornar para o
programa que a chamou o valor 15 e o número 3 (indicando que o número 15
ocorreu 3 vezes). A função deve ser do tipo void.
*/

void find_element(int vetor[], int valores, int *maior, int *contagem) {
    if(valores <= 0) {
        printf("Array vazio ou inválido.\n");
        return; 
    }

    *maior = vetor[0]; 
    *contagem = 0;   

    int i;
    for (i = 0; i < valores; i++) {
        if(vetor[i] > *maior) {
            *maior = vetor[i]; 
            *contagem = 1;   
        }else if (vetor[i] == *maior) {
            *contagem += 1;  
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
	int n;

    printf("Digite o número de valores no vetor: ");
    scanf("%d", &n);

    
    if(n <= 0) {
        printf("Tamanho inválido.\n");
        return 1; 
    }

    int v[n];

    int i;
    printf("Insira os elementos no vetor:\n");
    for(i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    int maior_elemento, ocorrencias;

    
    find_element(v, n, &maior_elemento, &ocorrencias);

    
    printf("Maior elemento: %d\n", maior_elemento);
    printf("Numero de ocorrencias: %d\n", ocorrencias);

    return 0;
}
