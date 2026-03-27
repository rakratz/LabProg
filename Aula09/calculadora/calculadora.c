#include <stdio.h>
#include "calculadora.h"

float soma(float a, float b)
{
    return a + b;
}
float subtracao(float a, float b)
{
    return a - b;
}
float divisao(float a, float b)
{
    return a / b;
}
float multiplicacao(float a, float b)
{
    return a * b;
}

void menu()
{
    int opcao;
    float a, b, resultado;

    do
    {
        printf("====== CALCULADORA ======\n");
        printf("1 = Soma\n");
        printf("2 = Subtrair\n");
        printf("3 = Dividir\n");
        printf("4 = Mutiplicar\n");
        printf("0 = Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4)
        {
            printf("Valor a: ");
            scanf("%f", &a);
            printf("Valor b: ");
            scanf("%f", &b);
        }

        switch (opcao)
        {
        case 1:
            resultado = soma(a, b);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = subtracao(a, b);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            if (b == 0)
            {
                printf("Valor de b = 0 eh invalido na divisao");
            }
            else
            {
                resultado = divisao(a, b);
                printf("Resultado: %.2f\n", resultado);
            }
            break;
        case 4:
            resultado = multiplicacao(a, b);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 0:
            printf("Saindo....");
            break;

        default:
            printf("Opcao invalida....\n");
            break;
        }
            


    } while (opcao != 0);
}
