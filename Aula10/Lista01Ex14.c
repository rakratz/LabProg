/* Pontifícia Universidade Católica de Goiás
Disciplina: Programação de Computadores
Professor: Me. Ricardo Kratz
Autor: Fulano de Tal
Data: 31/03/2026
Descrição: Sistema de Validação de Data
Versão: 1.0 */

#include <stdio.h>

int ehBissexto(int ano) {
    int resultado = 0;
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        resultado = 1;
    }
    return resultado;
}
int main()
{
    int dia, mes, ano;
    int diaDoMes;
    int valido = 0; 
    do {
        // Leitura do dia
        printf("Digite o dia: ");
        scanf("%d", &dia);
        // Leitura do Mês
        printf("Digite o mes: ");
        scanf("%d", &mes);
        // Leitura do ano
        printf("Digite o ano: ");
        scanf("%d", &ano);

        // Validação pedida
        if (!(dia >= 1 && dia <= 31 &&
              mes >= 1 && mes <= 12 &&
              ano >= 1900 && ano <= 2100)) {
                printf("Data inválida! Tente novamente\n");
                valido = 1;
        } else {
            valido = 0;
            // verificar fevereiro
            if (mes == 2) {
                if (ehBissexto(ano)){
                    diaDoMes = 29;
                } else {
                    diaDoMes = 28;
                }
            }
            // Verificar meses com 30 dias
            else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
                diaDoMes = 30;
            } else {
                diaDoMes = 31;
            }
            if (dia > diaDoMes) {
                printf("Dia invalido para o mes informado!\n");
                valido = 1;
            }
        }
    }
    while (valido == 1);

    printf("Esse dia correspode ao dia %d do mes %d do ano %d", dia, mes, ano);
    return 0;
}