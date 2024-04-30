#include <stdio.h>

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
    float vetor[5];
	int i;
    for (i = 0; i < 5; i++) {
        printf("Digite o %d numero do vetor: ", i + 1);
        scanf_s("%f", &vetor[i]);
    }
         
    printf("Numero de negativos no vetor: %d\n\n", Negativos(0, vetor));
 
    return 0;
}
