#include "leitor.h"

// Escrita no arquivo
void salvaArquivo(char *nomeArq, int *num1, int *num2)
{
    FILE *arquivo = fopen(nomeArq, "w"); // "w" cria o arquivo ou limpa se exisitir (write)
    if (arquivo == NULL)
    {
        printf("Erro ao salvar o arquivo $s!\n", nomeArq);
    }
    // Escrever os dois valores separados por um espaço
    fprintf(arquivo, "%d %d", *num1, *num2);
    fclose(arquivo);
}

// Leitura do Arquivo
void lerDoisNumeros(char *nomeArq, int *num1, int *num2)
{
    FILE *arquivo = fopen(nomeArq, "r"); // "r" apenas leitura (read)
    if (arquivo == NULL)
    {
        printf("Erro ao salvar o arquivo $s!\n", nomeArq);
    }
    fscanf(arquivo, "%d %d", num1, num2);
    fclose(arquivo);
}