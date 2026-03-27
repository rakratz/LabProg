#include <stdio.h>

// Função que verifica se o número é par ou ímpar
void parOuImpar(int n)
{

    if (n % 2 == 0)
        printf("Numero par\n");
    else
        printf("Numero impar\n");
}

// Função que verifica se o número é primo
void verificarPrimo(int n)
{

    int i, primo = 1;

    if (n <= 1)
        primo = 0;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            primo = 0;
            break;
        }
    }

    if (primo)
        printf("Numero primo\n");
    else
        printf("Numero nao primo\n");
}

int main()
{

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    parOuImpar(num);
    verificarPrimo(num);

    return 0;
} 