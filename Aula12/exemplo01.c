#include <stdio.h>
#include <string.h>

// Protótipo da função
void titulo(char texto[]);

int main()
{

    int i, j;

    int Valor[5] = {10, 20, 30, 40, 50};

    int Matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    titulo("Valores Vetor Original");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", Valor[i]);
    }

    titulo("Valores Vetor Alterado");

    for (i = 0; i < 5; i++)
    {
        Valor[i] *= 10;
        printf("%d ", Valor[i]);
    }

    titulo("Valores Matriz Original");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", Matriz[i][j]);
        }
        printf("\n");
    }

    titulo("Valores Matriz Alterada");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            Matriz[i][j] *= 10;
            printf("%d ", Matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void titulo(char texto[])
{
    int tamanho = strlen(texto);
    int i;

    printf("\n");

    for (i = 0; i < tamanho + 8; i++)
    {
        printf("=");
    }

    printf("\n=== %s ===\n", texto);

    for (i = 0; i < tamanho + 8; i++)
    {
        printf("=");
    }

    printf("\n");
}