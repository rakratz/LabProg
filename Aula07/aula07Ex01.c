#include <stdio.h>

// Função qiu verifica se um valor inteiro é positivo
int lerNumeroPositivo(){
    // Variável Local, usada omente dentre dessa função
    // não existe e nao pode ser acessada fora desa função
    int num;
    do {
        printf("Informe um numero inteiro positivo: ");
        scanf("%d", &num);
        if (num <= 0) {
            printf("Valor invalido! Digite novamente\n");
        }
    } while (num <= 0);
    return num;
}



// Função qiu verifica se um valor inteiro é negativp
int lerNumeroNegativo()
{
    // Variável Local, usada omente dentre dessa função
    // não existe e nao pode ser acessada fora desa função
    int num;
    do
    {
        printf("Informe um numero inteiro negativo: ");
        scanf("%d", &num);
        if (num >= 0)
        {
            printf("Valor invalido! Digite novamente\n");
        }
    } while (num >= 0);
    return num;
}

// Formada a saida em REais
void printReais(double valor)
{
    printf("R$ %.2lf\n", valor);
}
// Formada a saida em REais
void printDollar(double valor)
{
    printf("$ %.2lf\n", valor);
}

int main(){
    //lerNumeroPositivo();
    //lerNumeroNegativo();
    printReais(22.55);
    printDollar(22.55);
    return 0;
}
