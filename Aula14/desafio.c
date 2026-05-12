/*
Desafio:
Ler 10 números inteiros em um vetor e utilizar apenas ponteiros
para exibir os valores, calcular a soma, encontrar o maior e o
menor valor e calcular a média dos elementos.

Regras:
- Não utilizar vetor[i]
- Utilizar apenas aritmética de ponteiros (*(v+i))
- Implementar funções com passagem por referência
Extra:
- Ordenar o vetor (antecipando Estrutura de Dados)
*/
#include <stdio.h>

// Protótipos de Funções
void maiorMenor(int *v, int tamanho, int *maior, int *menor);
float calcularMedia(int *v, int tamanho);
void ordenarVetor(int *v, int tamanho);
void imprimirVetor(int *v, int tamanho);

    int main()
{
    int tamanho = 3;
    int vetor[tamanho];
    int soma = 0;
    int maior, menor;
    float media;
    int i;
    

        // Leitura dos elementos do Vetor usando ponteiro
        printf("Digite %d numeros:\n", tamanho);
        for (i = 0; i < tamanho; i++)
        {
            scanf("%d", (vetor + i));
            soma += *(vetor + i);
        }

        // Imprimir o vetor original e somar
        printf("Vetor Original = [ ");
        imprimirVetor(vetor, tamanho);

        // Verificar o maior e menor

        maiorMenor(vetor, tamanho, &maior, &menor);

        media = calcularMedia(vetor, tamanho);

        printf("Soma do vetor: %d\n", soma);

        printf("Media do vetor: %.2f\n", (media));

        printf("Maior elemento do vetor: %d\n", maior);

        printf("Menor elemento do vetor: %d\n", menor);

        ordenarVetor(vetor, tamanho);
        printf("Vetor Ordenado = [ ");
        imprimirVetor(vetor, tamanho);

        return 0;
    }

void maiorMenor(int *v, int tamanho, int *maior, int *menor)
{
    int i;
    *maior = *v;
    *menor = *v;
    for (i = 0; i < tamanho; i++)
    {
        if (*(v + i) > *maior)
        {
            *maior = *(v + i);
        }
        if (*(v + i) < *menor)
        {
            *menor = *(v + i);
        }
    }
}
float calcularMedia(int *v, int tamanho)
{
    int soma = 0;
    int i;

    for (i = 0; i < tamanho; i++)
    {
        soma += *(v + i);
    }

    return (float)soma / tamanho;
}

void ordenarVetor(int *v, int tamanho){
   int temp, i, j;
   for (i = 0; i < tamanho - 1; i++) {
       for (j = 0; j < tamanho - 1 - i; j++)
       {
           // if (v[j] > v[j+1])
           if (*(v + j) > *(v + j + 1))
           {
               temp = *(v + j);         // temp = v[j]
               *(v + j) = *(v + j + 1); // v[j] = v[j + 1]
               *(v + j + 1) = temp;     // v[j+1] = temp
           }
       }
   }
}

void imprimirVetor(int *v, int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++)
    {
        if (i == tamanho - 1) {
            printf("%d ", *(v + i));
        } else {
            printf("%d | ", *(v + i));
        }

    }
    printf("]\n");
}