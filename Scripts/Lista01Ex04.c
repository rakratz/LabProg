#include <stdio.h>

int main()
{
    float base, altura, area, perimetro;

    printf("Digite a base e a altura: ");
    scanf("%f %f", &base, &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);

    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);

    return 0;
}