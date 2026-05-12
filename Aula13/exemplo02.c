#include <stdio.h>


void troca(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10;
    int b = 20;

    troca(&a, &b);

    printf("Valor de A: %d\n", a);
    printf("Valor de B: %d\n", b);

    return 0;
}