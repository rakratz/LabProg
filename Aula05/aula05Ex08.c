#include <stdio.h>

int main()
{

    int n, i;
    unsigned long long fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Fatorial nao existe para numeros negativos.\n");
    }
    else
    {

        for (i = 1; i <= n; i++)
        {
            fatorial *= i;
        }

        printf("%d! = %llu\n", n, fatorial);
    }

    return 0;
}