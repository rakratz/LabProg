/* Pontifícia Universidade Católica de Goiás
Disciplina: Programação de Computadores Professor:
Me. Ricardo Kratz Aluno: Nome do aluno
Data: 07/04/2026
Descrição: Exercício 2. Crie uma biblioteca chamada calculos com uma função responsável por calcular a média de um conjunto de notas armazenadas em um vetor. O programa principal deve solicitar ao usuário a quantidade de notas, ler os valores, armazená-los em um vetor e exibir a média calculada por meio da função implementada na biblioteca. */

#include <stdio.h>
#include "calculos.h"


int main(){
    int quantidade, i;
    float media;
    // Leitura da quantidade de notas
    printf("Digite a quantidade de notas: ");
    scanf("%d", &quantidade);

    // iniciar ou declarar nosso vetor de notas
    float notas[quantidade];

    // Leitua da notas
    for (i=0; i < quantidade; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
    // Calcular a média
    media = calcularMedia(notas, quantidade);
    printf("Media: %.2f: ", media);
    return 0;
}
