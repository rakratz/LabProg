#include <stdio.h>

// Protótipos
void imprimeMatriz(int m[3][3]);
int somaMatriz(int m[3][3]);
void multiplicaMatriz(int m[3][3]);

int main()
{

    int Matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    printf("Matriz Original:\n");
    imprimeMatriz(Matriz);

    int soma = somaMatriz(Matriz);
    printf("Soma = %d\n", soma);

    multiplicaMatriz(Matriz);

    printf("\nMatriz Alterada:\n");
    imprimeMatriz(Matriz);

    soma = somaMatriz(Matriz);
    printf("Soma = %d\n", soma);

    return 0;
}

void imprimeMatriz(int m[3][3]) {
    int i, j;
    printf("   1   2   3 \n");
    for (i = 0; i < 3; i++){
        printf("%d ", i+1);
        for (j = 0; j < 3; j++){
            printf("[%d] ", m[i][j]);
        }
        printf("\n");
    }
}

int somaMatriz(int m[3][3]){
    int i, j, soma = 0;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            soma += m[i][j];
        }
    }
    return soma;
}

void multiplicaMatriz(int m[3][3]){
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            m[i][j] *= 2;
        }
    }
}