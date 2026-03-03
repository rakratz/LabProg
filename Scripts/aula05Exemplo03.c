/* Pontifícia Universidade Católica de Goiás
Disciplina: Programação de Computadores
Professor: Me. Ricardo Kratz
Autor: Fulano de Tal
Data: 03/03/2026
Descrição: Teste Estutura de Repetição do While
Versão: 1.0 */

#include <stdio.h>

int main()
{
    int num;
    int menor;
    int flag_primeiro = 1;

    do {
        printf("Informe um numero [zero para sair]: ");
        scanf("%d", &num);

        if (flag_primeiro) // Testar se é a primeira leitura (flag = 1)
        {
            menor = num;
            flag_primeiro = 0;
        }
        else if (num < menor && num != 0)
            menor = num;

    } while (num != 0);
    if (menor == 0)
        printf("O usuario nao informou um numero!\n");
    else 
        printf("O menor numero informado = %d\n", menor);
    return 0;
}