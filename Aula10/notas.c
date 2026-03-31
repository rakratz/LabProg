/* Pontifícia Universidade Católica de Goiás
Disciplina: Programação de Computadores
Professor: Me. Ricardo Kratz
Autor: Fulano de Tal
Data: 31/03/2026
Descrição: Sistema cálculo de notas com 5 vetores
Versão: 1.0 */

#include <stdio.h>
int main() {
    int i;
    int quant = 3;
    float notas[10];
    float np1[10], np2[10], np3[10], np4[10];

    for (i = 0; i < quant; i++) {
        printf("Nota NP1 do Aluno %d:", i + 1);
        scanf("%f", &np1[i]);
        printf("Nota NP2 do Aluno %d:", i + 1);
        scanf("%f", &np2[i]);
        printf("Nota NP3 do Aluno %d:", i + 1);
        scanf("%f", &np3[i]);
        printf("Nota NP4 do Aluno %d:", i + 1);
        scanf("%f", &np4[i]);
        notas[i] = (np1[i] + np2[i] + np3[i] + np4[i]) /4;
    }
     for (i = 0; i < quant; i++) {
        printf("Aluno %d tem media = %.2f\n", i + 1, notas[i]);
    }
    return 0;
}