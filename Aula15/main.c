#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

#define TAM 100

int main()
{
    char nomes[TAM][50];
    char situacoes[TAM][50];

    float nota1[TAM];
    float nota2[TAM];
    float medias[TAM];

    int qtd = 0;
    int i;

    FILE *entrada;
    FILE *saida;

    /* Leitura dos Dados do Arquivo entrada.txt */

    entrada = fopen("entrada.txt", "r");

    if (entrada == NULL)
    {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    // Estrutura de repetição para ler as linhas do arquivo
    while (fscanf(entrada, "%s %f %f",
                  nomes[qtd],
                  &nota1[qtd],
                  &nota2[qtd]) == 3)
    {
        medias[qtd] = calculaMedia(nota1[qtd], nota2[qtd]);

        verificarSituacao(medias[qtd], situacoes[qtd]);

        qtd++;
    }

    fclose(entrada);

    // Estatísticas
    printf("*************************************\n");
    printf("Quantidade de alunos lidos: %d\n", qtd);
    printf("Media geral da turma: %.2f\n", calculaMediaTurma(medias, qtd));
    printf("Maior media da turma: %.2f\n", maiorValor(medias, qtd));
    printf("Menor media da turma: %.2f\n", menorValor(medias, qtd));
    printf("*************************************\n\n");

    /* Exibir os dados lidos */

    for (i = 0; i < qtd; i++)
    {
        printf("Nome: %s Nota_1: %.2f Nota_2: %.2f Media: %.2f - %s\n",
               nomes[i],
               nota1[i],
               nota2[i],
               medias[i],
               situacoes[i]);
    }

    /* Salvar os dados no arquivo de saida.txt */

    saida = fopen("saida.txt", "w");

    if (saida == NULL)
    {
        printf("Erro ao gerar o arquivo de saida.\n");
        return 2;
    }

    fprintf(saida, "RELATORIO FINAL DE MEDIAS\n\n");

    for (i = 0; i < qtd; i++)
    {
        fprintf(saida,
                "Nome: %s Nota_1: %.2f Nota_2: %.2f Media: %.2f - %s\n",
                nomes[i],
                nota1[i],
                nota2[i],
                medias[i],
                situacoes[i]);
    }

    fprintf(saida, "\nQuantidade de alunos lidos: %d\n", qtd);
    fprintf(saida, "Media geral da turma: %.2f\n",
            calculaMediaTurma(medias, qtd));

    fprintf(saida, "Maior media da turma: %.2f\n",
            maiorValor(medias, qtd));

    fprintf(saida, "Menor media da turma: %.2f\n",
            menorValor(medias, qtd));

    fclose(saida);

    printf("\nArquivo saida.txt gerado com sucesso!\n");

    return 0;
}