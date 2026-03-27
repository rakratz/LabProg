/* Pontifícia Universidade Católica de Goiás
Disciplina: Programação de Computadores
Professor: Me. Ricardo Kratz
Autor: Fulano de Tal
Data: 06/03/2026
Descrição: Calcular a média da nota de 5 alunos e verificar quantos conseguiram nota acima da média
Versão: 1.0 */

#include <stdio.h>
int main()
{
    int i, contAcima = 0;
    int quantAluno = 10;
    double soma = 0.0, media = 0.0;
    double notas[quantAluno];
    // Leitura das notas e calculo da média
    for (i = 0; i < quantAluno; i++){
        printf("Informe %d - nota: ", i + 1);
        scanf("%lf", &notas[i]);
        soma += notas[i];}
    media = soma / quantAluno;
    printf("Nossa media = %.2f \n", media);
    // Verificar quais alunos tiver not    return 0;
}a acima da média
    for (i = 0; i < quantAluno; i++){
        if (notas[i] > media)
            contAcima += 1;}
    printf("Tivemos %d alunos acima da media!", contAcima);
