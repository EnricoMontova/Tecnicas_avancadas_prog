#include <stdio.h>
#include <locale.h>

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
