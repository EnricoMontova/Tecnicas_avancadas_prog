#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct aluno {
    char nome[100];           
    char email[100];          
    char telefone[20];        
    char data_nascimento[11];  
}Aluno;

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    Aluno *aluno1 = (Aluno*)malloc(sizeof(Aluno));

    if (aluno1 == NULL) {
        printf("Erro ao alocar memória para o aluno.\n");
        return 1; 
    }

   
    printf("Digite o nome do aluno: ");
    scanf("%99s", aluno1->nome); 

    printf("Digite o email do %s: ", aluno1->nome);
    scanf("%99s", aluno1->email);

    printf("Digite o número de telefone do %s: ", aluno1->nome);
    scanf("%19s", aluno1->telefone); 

    printf("Digite a data de nascimento do %s (formato dd/mm/aaaa): ", aluno1->nome);
    scanf("%10s", aluno1->data_nascimento); 

    
    printf("Dados do Aluno:\n");
    printf("Nome: %s\n", aluno1->nome);
    printf("Email: %s\n", aluno1->email);
    printf("Telefone: %s\n", aluno1->telefone);
    printf("Data de Nascimento: %s\n", aluno1->data_nascimento);

    
    free(aluno1);

    return 0;
}
