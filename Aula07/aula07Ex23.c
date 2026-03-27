/* Pontifícia Universidade Católica de Goiás
Disciplina: Programação de Computadores
Professor: Me. Ricardo Kratz
Autor: Fulano de Tal
Data: 06/03/2026
Descrição: Construa um programa que tenha uma função que verifica se um número inteiro, passado como parâmetro, e exiba na tela se o número é negativo ou positivo.

Versão: 1.0 */
#include <stdio.h>

// Função Void que verifica se um número é positivo, negativo ou nulo
void verificaNumero(int num)
{
    if (num > 0)
        printf("Numero positivo!");
    else if (num < 0)
        printf("Numero negativo!");
    else
        printf("Numero nulo!");
    num = 111;
    printf("\n numero: %d", num);
}

int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    verificaNumero(numero); // chamada da função
    printf("\n numero: %d", numero);
    return 0;
}