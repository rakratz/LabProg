#include <stdio.h>
#include "leitor.h"

/* Criar um sistema de Notas da PUC, onde a nota é dotipo float e calcular
a média sabendo que a n1 x 0,4 + n2 x 0,6. Ao final mostre a média e notas na tela e salve apenas as notas no arquivo: notas.txt */

int main(){
    char *nomeArq = "nota.txt";

    int nota1, nota2;
    int nota1_lida, nota2_lida;

    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);

    salvaArquivo(nomeArq, &nota1, &nota2);

    // Leitura
    lerDoisNumeros(nomeArq, &nota1_lida, &nota2_lida);
    printf("Primeira nota: %d\n", nota1_lida);
    printf("Segunda nota: %d\n", nota2_lida);
    return 0;
}