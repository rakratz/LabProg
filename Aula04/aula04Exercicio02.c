/* Pontifícia Universidade Católica de Goiás
Disciplina: Programação de Computadores
Professor: Me. Ricardo Kratz
Autor: Fulano de Tal
Data: 24/02/2026
Descrição: Exercício Distância dois pontos
Versão: 1.0 */

#include <stdio.h>
#include <math.h> // Biblioteca matemática

int main()
{
    double x1, y1, x2, y2, distancia;

    printf("Digite x1 e y1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Digite x2 e y2: ");
    scanf("%lf %lf", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distancia = %.2lf\n", distancia);
    return 0;
}
