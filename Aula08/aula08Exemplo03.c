#include <stdio.h>

void troca1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void troca2(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int c = 4;
    int d = 5;
    printf("Troca 1\n");
    printf("c = %d, d = %d\n", c, d);
    troca1(c, d);
    printf("c = %d, d = %d\n", c, d);

    printf("Troca 2\n");
    printf("c = %d, d = %d\n", c, d);
    troca2(&c, &d);
    printf("c = %d, d = %d\n", c, d);
    return 0;
}
