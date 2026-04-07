#include "calculos.h"

float calcularMedia(float notas[], int tamanho){
    float soma = 0.0;
    int i;

    for (i = 0; i < tamanho; i++){
        soma += notas[i];
    }
    return soma/tamanho;
}