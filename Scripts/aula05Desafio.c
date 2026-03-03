/* Pontifícia Universidade Católica de Goiás
Disciplina: Programação de Computadores
Professor: Me. Ricardo Kratz
Autor: Fulano de Tal
Data: 03/03/2026
Descrição: Faça um progama que calcule vários fatoriais. o program deve perguntar se o usuário gostaria de calcular outro fatorial a final de cada execução
Versão: 1.0 */

#include <stdio.h>

int main()
{
    int n, i, fatorial;
    char opcao;

    do
    {
        printf("Informe um numero para calcular o fatorial: ");
        scanf("%d", &n);

        if (n < 0)
        {
            printf("Nao existe fatorial de numero negativo.\n");
        }
        else
        {
            fatorial = 1;

            for (i = 1; i <= n; i++)
            {
                fatorial *= i;
            }

            printf("O fatorial de %d eh: %d\n", n, fatorial);
        }

        printf("Deseja calcular outro fatorial? (s/n): ");
        scanf(" %c", &opcao); // espaço antes do %c é importante

    } while (opcao == 's' || opcao == 'S');

    printf("Programa encerrado.\n");
    return 0;
}