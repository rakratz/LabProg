/* Pontifícia Universidade Católica de Goiás
Disciplina: Programação de Computadores
Professor: Me. Ricardo Kratz
Autor: Fulano de Tal
Data: 14/04/2026
Descrição: Calculador completa com switch case e estrutura de repetição do..while
Versão: 1.0 */
#include <stdio.h>

int main()
{
    int opcao;
    float a, b;
    char sair;

    do
    {
        printf("\n=== CALCULADORA ===\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        printf("Digite o primeiro valores: ");
        scanf("%f", &a);

        printf("Digite o segundo valores: ");
        scanf("%f", &b);

        switch (opcao)
        {
        case 1:
            printf("Resultado = %.2f\n", a + b);
            break;
        case 2:
            printf("Resultado = %.2f\n", a - b);
            break;
        case 3:
            printf("Resultado = %.2f\n", a * b);
            break;
        case 4:
            if (b != 0)
                printf("Resultado = %.2f\n", a / b);
            else
                printf("Erro: divisao por zero!\n");
            break;
        default:
            printf("Opcao invalida!\n");
        }

        printf("\nDeseja sair? (S/N): ");
        scanf(" %c", &sair);

    } while (sair != 'S' && sair != 's');
    printf("Programa encerrado.\n");
    return 0;
}