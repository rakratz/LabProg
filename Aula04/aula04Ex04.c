#include <stdio.h>
int main()
{
    float altura, peso, pesoIdeal;

    printf("Informe a altura (em metros): ");
    scanf("%f", &altura);

    printf("Informe seu peso (em kilos): ");
    scanf("%f", &peso);

    pesoIdeal = (72.7 * altura) - 58; // Calcula o peso ideal

    printf("\nAltura informada: %.2f m", altura);
    printf("\nPeso ideal: %.2f kg\n", pesoIdeal);

    if (peso <= pesoIdeal)
        printf ("Vc está em forma!");
    else
        printf("Necessario fazer dieta !");
    return 0;
}