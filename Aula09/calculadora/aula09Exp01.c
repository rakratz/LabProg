#include <stdio.h>

int main()
{
    int opcao = 7;

    switch (opcao) {
        case 0:
            printf("Opcao 0");
            break;
        case 1:
            printf("Opcao 1");
            break;
        case 2:
            printf("Opcao 2");
            break;
        case 3:
            printf("Opcao 3");
            break;
        default:
            printf("Opcao Invalida");
    }

    if (opcao == 0) {
        printf("Opcao 0");
    }
    else if (opcao == 1) {
        printf("Opcao 1");
    }
    else if (opcao == 2) {
        printf("Opcao 2");
    }
    else if (opcao ==3) {
        printf("Opcao 3");
    }
    else {
        printf("Opcao Invalida");
    }
        return 0;
    }