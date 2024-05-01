#include <stdio.h>
#include <locale.h>

/*
Implemente uma função em C que receba como parâmetro um array de
números reais de tamanho N e retorne a quantidade de números negativos
presentes nesse array. O protótipo da função deve ser o seguinte:

int negativos(float *vet, int N);
*/

int Negativos(int n, float *vet) {  
    int i;
    for (i = 0; i < 5; i++) {
        if (vet[i] < 0) {
            n++;
        }
    }
 
    return n;
}
 
int main()
{
	setlocale(LC_ALL, "Portuguese");
    float vetor[5];
	int i;
    for (i = 0; i < 5; i++) {
        printf("Digite o %dº número do vetor: ", i + 1);
        scanf_s("%f", &vetor[i]);
    }
         
    printf("Número de negativos no vetor: %d\n\n", Negativos(0, vetor));
 
    return 0;
}
