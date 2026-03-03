#include <stdio.h>

int main()
{
    int num, cont = 0;
    double soma = 0.0;

    printf("Informe um número: ");
    scanf("%d", &num);
    printf("h = ");
    for(cont=1; cont<=num; cont++){
        soma += (double)1 / cont;
        if (cont < num)
            printf("1/%d + ", cont);
        else
            printf("1/%d = ", cont);
    }
    printf("%.2f\n", soma);
    return 0;
}