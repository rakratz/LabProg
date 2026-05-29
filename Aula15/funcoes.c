#include <stdio.h>
#include <string.h>
#include "funcoes.h"

float calculaMedia(float nota1, float nota2){
    return nota1 * 0.4 + nota2 * 0.6;  
}

float calculaMediaTurma(float medias[], int qtd){
    int i;
    float soma = 0;
    for (i =0; i < qtd; i++) {
        soma += medias[i];
    }
    return soma/qtd;
}


float maiorValor(float vetor[], int qtd){
    int i;
    float maior = vetor[0];
    for (i = 1; i < qtd; i++){
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}
float menorValor(float vetor[], int qtd){
    int i;
    float menor = vetor[0];
    for (i = 1; i < qtd; i++){
        if (vetor[i] < menor){
            menor = vetor[i];
        }
    }
    return menor;
}
void verificarSituacao(float media, char situacao[]){
    if (media >= 6.0) {
        strcpy(situacao, "Aprovado");
    } else if (media >= 4.0) {
        strcpy(situacao, "Recuperacao");
    } else {
        strcpy(situacao, "Reprovado");
    }
}