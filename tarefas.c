#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>

#define MAX_DESCRICAO 100
#define MAX_TAREFAS 100

// Definindo a estrutura para representar uma tarefa
struct Tarefa {
    char data[11]; // DD/MM/AAAA + \0
    char descricao[MAX_DESCRICAO];
};

// Fun��o para adicionar uma nova tarefa ao arquivo
void adicionar_tarefa(FILE *arquivo){
    struct Tarefa nova_tarefa;
    printf("Digite a data da tarefa (DD/MM/AAAA): ");
    scanf("%s", nova_tarefa.data);
    printf("Digite a descri��o da tarefa: ");
    getchar(); // Limpar o buffer do teclado
    fgets(nova_tarefa.descricao, MAX_DESCRICAO, stdin);

    // Escrevendo a nova tarefa no arquivo
    fprintf(arquivo, "%s - %s", nova_tarefa.data, nova_tarefa.descricao);
    printf("Tarefa adicionada com sucesso!\n");
}

// Fun��o para mostrar as tarefas do dia atual
void mostrar_tarefas_do_dia(FILE *arquivo){
    char data_atual[11];
    // Obtendo a data atual
    time_t now = time(NULL);
    struct tm *t = localtime(&now);
    strftime(data_atual, sizeof(data_atual), "%d/%m/%Y", t);

    char linha[MAX_DESCRICAO + 15]; // Tamanho m�ximo de uma linha no arquivo
    // Voltando para o in�cio do arquivo
    rewind(arquivo);
    // Lendo cada linha do arquivo
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        // Verificando se a linha come�a com a data atual
        if (strncmp(linha, data_atual, 10) == 0) {
            // Se sim, mostrando a tarefa
            printf("%s", linha);
        }
    }
}

// Fun��o para mostrar todas as tarefas presentes no arquivo
void mostrar_todas_tarefas(FILE *arquivo){
    char linha[MAX_DESCRICAO + 15]; // Tamanho m�ximo de uma linha no arquivo
    // Voltando para o in�cio do arquivo
    rewind(arquivo);
    // Lendo cada linha do arquivo e mostrando-a
    while (fgets(linha, sizeof(linha), arquivo) != NULL){
        printf("%s", linha);
    }
}

// Fun��o para limpar o arquivo de tarefas
void limpar_arquivo(FILE *arquivo){
    // Fechando o arquivo
    fclose(arquivo);
    // Abrindo o arquivo em modo de escrita para limpar seu conte�do
    arquivo = fopen("tarefas.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao limpar o arquivo.\n");
        exit(1);
    }
    printf("Arquivo 'tarefas.txt' limpo com sucesso!\n");
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    FILE *arquivo;
    // Abrindo o arquivo em modo de leitura e escrita
    arquivo = fopen("tarefas.txt", "a+");
    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int opcao;
    do{
    	printf("\n-----AGENDA DE TAREFAS-----\n");
        // Exibindo o menu de op��es
        printf("\n1. Adicionar Tarefa\n");
        printf("2. Mostrar Tarefas do Dia\n");
        printf("3. Mostrar Todas as Tarefas\n");
        printf("4. Limpar o Arquivo de Tarefas\n");
        printf("5. Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionar_tarefa(arquivo);
                // Limpar a tela do console apenas ap�s o usu�rio escolher a op��o 1
                system("cls");
                break;
            case 2:
                mostrar_tarefas_do_dia(arquivo);
                break;
            case 3:
                mostrar_todas_tarefas(arquivo);
                break;
            case 4:
                limpar_arquivo(arquivo);
                break;
            case 5:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Op��o inv�lida. Tente novamente.\n");
        }
    }while (opcao != 5);

    // Fechando o arquivo
    fclose(arquivo);
    return 0;
}
