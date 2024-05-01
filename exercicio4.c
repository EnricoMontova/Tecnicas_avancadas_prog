#include <stdio.h>
#include <locale.h>

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
