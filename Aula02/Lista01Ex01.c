/* Pontifícia Universidade Católica de Goiás
Disciplina: Programação de Computadores
Professor: Me. Ricardo Kratz
Autor: Fulano de Tal
Data: 20/02/2026
Descrição: Exercício 01
Versão: 1.0 */

#include <stdio.h>

int main()
{
    char nome[100]; // Definindo tamanho do vetor
    int idade;
    float altura;

    printf("Informe o nome do aluno: ");
    scanf("%s", nome);

    printf("Informe a idade do aluno: ");
    scanf("%d", &idade);

    printf("Informe a altura do aluno: ");
    scanf("%f", &altura);

    printf("Aluno: %s | Idade: %d | Altura: %.2f\n", nome, idade, altura);

    return 0;
}