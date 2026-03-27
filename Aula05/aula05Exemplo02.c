/* Pontifícia Universidade Católica de Goiás
Disciplina: Programação de Computadores
Professor: Me. Ricardo Kratz
Autor: Fulano de Tal
Data: 03/03/2026
Descrição: Teste Estutura de Repetição While
Versão: 1.0 */

#include <stdio.h>

int main()
{
    int num;
    int menor;
    // Primeira Leitura
    printf("Informe um numero [zero para sair]: ");
    scanf("%d", &num);
    if (num == 0){
        printf("O usuario nao informou um numero!\n");
        return 0;
    }
    menor = num; 
    while (num != 0)
    {
        printf("Informe um numero [zero para sair]: ");
        scanf("%d", &num);
        if (num < menor && num != 0)
        {
            menor = num;
        }
    }
    printf("O menor numero informado = %d\n", menor);
    return 0;
}