/* Pontifícia Universidade Católica de Goiás
Disciplina: Programação de Computadores
Professor: Me. Ricardo Kratz
Autor: Fulano de Tal
Data: 03/03/2026
Descrição: Exercício 12
Versão: 1.0 */

#include <stdio.h>

int main()
{
    float fulano = 150.0;  // em cm
    float ciclano = 110.0; // em cm
    int anos = 0;

    while (ciclano <= fulano)
    {
        fulano += 2;  // cresce 2 cm por ano
        ciclano += 3; // cresce 3 cm por ano
        anos++;
    }
    printf("Serao necessarios %d anos para Ciclano ser maior que Fulano.\n", anos);
    printf("Altura final de Fulano: %.2f cm\n", fulano);
    printf("Altura final de Ciclano: %.2f cm\n", ciclano);
    return 0;
}