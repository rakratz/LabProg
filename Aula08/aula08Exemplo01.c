#include <stdio.h>

int maior2(int a, int b) {
    int maior;
    if (a > b) 
        maior = a;
    else
        maior = b;
    return maior;
}

int maior3(int a, int b, int c)
{
    int maior;
    if ((a > b) && (a > c))
        maior = a;
    else {
        if ((b > a) && (b > c))
            maior = b;
        else
            maior = c; }
    return maior;
}
void titulo(char msg[22])
{
    printf("===============================\n");
    printf("==  %s  ==\n", msg);
    printf("===============================\n");
}

void main(){
    int valorA = 15, valorB = 30, valorC = 20;
    int maior;
    titulo("VERIFICAR MAIOR NUMERO");
    maior = maior2(valorA, valorB);
    printf("Maior valor = %d\n", maior);
    maior = maior3(valorA, valorB, valorC);
    printf("Maior valor = %d\n", maior);
    titulo("    FIM DO PROGRAMA   ");
    return 0;
}