#include <stdio.h>

int main()
{
    float n1, n2, soma, media;

    printf("Digite dois numeros reais: ");
    scanf("%f %f", &n1, &n2);

    soma = n1 + n2;
    media = soma / 2;

    printf("Soma: %.2f\n", soma);
    printf("Media: %.2f\n", media);

    return 0;
}