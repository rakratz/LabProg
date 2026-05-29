/* Pontifícia Universidade Católica de Goiás
Disciplina: Laboratório de Programação
Professor: Me. Ricardo Kratz
Aluno: Nome do Aluno
Data: 29/05/2026
Descrição: Leitura de uma matriz 3x3 e contagem de números pares.
*/

#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

// Protótipos das funções
int contarPares(int matriz[LINHAS][COLUNAS]);
void exibirMatriz(int matriz[LINHAS][COLUNAS]);

int main()
{
    int matriz[LINHAS][COLUNAS];
    int i, j;

    printf("=== LEITURA DA MATRIZ %dx%d ===\n\n", LINHAS, COLUNAS);

    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("Matriz[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    exibirMatriz(matriz);

    printf("\nQuantidade de numeros pares: %d\n",
           contarPares(matriz));

    return 0;
}

int contarPares(int matriz[LINHAS][COLUNAS])
{
    int quantidade = 0;
    int i, j;

    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                quantidade++;
            }
        }
    }

    return quantidade;
}

void exibirMatriz(int matriz[LINHAS][COLUNAS])
{
    int i, j;

    printf("\n=== MATRIZ INFORMADA ===\n");

    for (i = 0; i < LINHAS; i++)
    {
        printf(" |");
        for (j = 0; j < COLUNAS; j++)
        {
            printf("%4d", matriz[i][j]);
        }
        printf("   |\n");
    }
}