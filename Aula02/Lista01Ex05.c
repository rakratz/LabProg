#include <stdio.h>

int main()
{
    float produto, pago, troco;

    printf("Digite o valor do produto: ");
    scanf("%f", &produto);

    printf("Digite o valor pago: ");
    scanf("%f", &pago);

    troco = pago - produto;

    printf("Troco: %.2f\n", troco);

    return 0;
}