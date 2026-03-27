#include <stdio.h>
/* Pontifícia Universidade Católica de Goiás
Disciplina: Programação de Computadores
Professor: Me. Ricardo Kratz
Autor: Fulano de Tal
Data: 24/02/2026
Descrição: Exercício para pintar tanques cilíndricos de combustível
Versão: 1.0 */

#include <math.h>

int main()
{

    double raio, altura;
    double area, litros, custo;
    int latas;

    printf("Digite o raio: ");
    scanf("%lf", &raio);

    printf("Digite a altura: ");
    scanf("%lf", &altura);

    area = 3.14 * pow(raio, 2) + 2 * 3.14 * raio * altura;

    litros = area / 3.0;

    latas = ceil(litros / 5.0);

    custo = latas * 20.0;

    printf("Area total: %.2lf m2\n", area);
    printf("Litros necessarios: %.2lf\n", litros);
    printf("Quantidade de latas: %d\n", latas);
    printf("Custo total: R$ %.2lf\n", custo);

    return 0;
}
