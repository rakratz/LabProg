#include <stdio.h>

int main() {
    int numMat;
    float nota1, nota2, nota3, me, ma;
    char conceito;

    printf("Digite o numero de matricula do aluno: ");
    scanf("%d", &numMat);

    printf("Digite as tres notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("Digite a media dos exercicios: ");
    scanf("%f", &me);

    ma = (nota1 + (2 * nota2) + (3 * nota3) + me) / 7.0;

    if (ma >= 9.0) {
        conceito = 'A';
    } else if (ma >= 7.5) {
        conceito = 'B';
    } else if (ma >= 6.0) {
        conceito = 'C';
    } else if (ma >= 4.0) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    printf("\n===== RESULTADO =====\n");
    printf("Matricula: %d\n", numMat);
    printf("Nota 1: %.2f\n", nota1);
    printf("Nota 2: %.2f\n", nota2);
    printf("Nota 3: %.2f\n", nota3);
    printf("Media dos exercicios: %.2f\n", me);
    printf("Media de aproveitamento: %.2f\n", ma);
    printf("Conceito: %c\n", conceito);

    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        printf("Situacao: APROVADO\n");
    }
    else {
        printf("Situacao: REPROVADO\n");
    }

    return 0;
}