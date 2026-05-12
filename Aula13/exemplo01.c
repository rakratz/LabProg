#include <stdio.h>

int main(){

    int x = 10;
    int *p = &x;

    printf("Valor de X: %d\n",x);
    printf("Endereco de X: %p\n", &x);

    printf("Valor armazenado em p: %p\n",p);
    printf("Conteudo apontado por p: %d\n",*p);

    return 0;
}