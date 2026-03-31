/* Pontifícia Universidade Católica de Goiás
Disciplina: Programação de Computadores
Professor: Me. Ricardo Kratz
Autor: Fulano de Tal
Data: 31/03/2026
Descrição: Exemplo de Matriz
Versão: 1.0 */

#include <stdio.h>
int main()
{
    int i, j;
    int matriz[3][3];
    int matriz_3[3][3][3];
    int matriz_4[3][3][3][3];
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;

    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;

    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %d ", matriz[i][j]);
        }
         printf("\n");
    }
    return 0;
}