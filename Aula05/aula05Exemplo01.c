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
    int num = -1;    
    int maior = 0;

    printf("Num = %d\n", num);
    printf("Maior = %d\n", maior);

    while (num != 0)
    {
        printf("Informe um numero [zero para sair]: ");
        scanf("%d", &num);
        if (num > maior)
        {
            maior = num;
        }
    }
    printf("O maior numero informado = %d\n", maior);
    return 0;
}