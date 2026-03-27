/* Pontifícia Universidade Católica de Goiás
Disciplina: Programação de Computadores
Professor: Me. Ricardo Kratz
Autor: Fulano de Tal
Data: 06/03/2026
Descrição: Gerar um vetor com 10 números da seguinte forma: cada número guardado no vetor será o valor da sua própria posição no vetor (seu índice) menos 2 (ou seja, Xi = i-2). Mostrar na tela este vetor.
Versão: 1.0 */
#include <stdio.h>
int main()
{
    int i;
    int vetor[10];
    // Preencher o vetor
    for (i = 0; i < 10; i++) {
        vetor[i] = i-2;
    }

    //Motrar o vetor final
    printf("==== Valores do Vetor ===\n");
    for (i = 0; i < 10; i++){
        printf("  X[%d] = %d\n", i, vetor[i]);
    }
    printf("=========================\n");
    return 0;
}