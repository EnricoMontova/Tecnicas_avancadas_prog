#include <stdio.h>
#include <limits.h> 

void findMinMax(int V[], int size, int *min, int *max);

int main() {
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    
    if (tamanho <= 0) {
        printf("Tamanho inválido.\n");
        return 1; 
    }

    int vetor[tamanho];
	int i;
    
    printf("Digite os elementos do vetor de inteiros:\n");
    for (i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int min, max;

    
    findMinMax(vetor, tamanho, &min, &max);

   
    printf("Valor minimo no vetor: %d\n", min);
    printf("Valor maximo no vetor: %d\n", max);

    return 0;
}

void findMinMax(int V[], int size, int *min, int *max) {
  
    if (V == NULL || size <= 0) {
        printf("Vetor invalido.\n");
        return;
    }

    *min = INT_MAX; 
    *max = INT_MIN; 
	int i;
    
    for (i = 0; i < size; i++) {
        if (V[i] < *min) {
            *min = V[i]; 
        }
        if (V[i] > *max) {
            *max = V[i]; 
        }
    }
}

