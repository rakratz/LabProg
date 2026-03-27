/* Pontifícia Universidade Católica de Goiás
Disciplina: Programação de Computadores
Professor: Me. Ricardo Kratz
Autor: Fulano de Tal
Data: 24/02/2026
Descrição: Exercício Peso ideal
Versão: 1.0 */

#include <stdio.h>
int main()
{
    float altura;
    float pesoIdeal;
    char sexo;

    printf("Informe a altura (em metros): ");
    scanf("%f", &altura);
    printf("Informe o sexo (M/F): ");
    scanf(" %c", &sexo); // espaço antes do %c evita problema com ENTER

    pesoIdeal = (72.7 * altura) - 58; // Calcula o peso ideal

    printf("\nAltura informada: %.2f m", altura);
    printf("\nSexo informado: %c", sexo);
    printf("\nPeso ideal: %.2f kg\n", pesoIdeal);

    return 0;
}