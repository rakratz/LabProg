/* Pontifícia Universidade Católica de Goiás
Disciplina: Programação de Computadores
Professor: Me. Ricardo Kratz
Autor: Fulano de Tal
Data: 06/03/2026
Descrição: Difrença entre o scanf e gets
Versão: 1.0 */
#include <stdio.h>
#include <string.h>

int main()
{
    char nome[80];
    int tamanhoNome = 0;
    printf("Digite o sue nome completo:");
    // scanf("%s", &nome);
    gets(nome);
    printf("Nome informado: %s\n", nome);
    tamanhoNome =strlen(nome);
    printf("Nome informado tem %d bits", nome);
    return 0;
}