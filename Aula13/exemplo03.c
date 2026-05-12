#include <stdio.h>

int main()
{
    int v[5] = {10, 20, 30, 40, 50};

    int *p;
    int i;

        p = v; // ponteiro recebe o endereço do primeiro elemento

    printf("Endreco po primeiro elemento: %p\n", p);

    for (i = 0; i < 5; i++) {
        printf("Valor[%d] %p\n",i+1, (p+i));
    }



    return 0;
}