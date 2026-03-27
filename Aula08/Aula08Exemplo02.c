#include <stdio.h>
#include <math.h> // Biblioteca matemática

// Verifica se os valores forma um triângulo
int ehTriangulo(int a, int b, int c);

// Cálcula o valor da prestação de um produto
double valorPrestacao(double valor, double taxa, int numParcelas);

// Recebe 'F' ou 'M' e imprime o sexo por extenso:
//"Feminino" ou "Masculino" void printSexo(char s);
void printSexo(char s);

int main()
{
    return 0;
}

int ehTriangulo(int a, int b, int c){
    // Se retornar 1 é triângulo 0 não é
    if (a < b + c && b < a + c && c < a + b)
        return 1;
    return 0;
}

double valorPrestacao(double valor, double taxa, int numParcelas){
    return valor + (valor * taxa * numParcelas);
}

void printSexo(char s){
    if (s == 'F' || s == 'f')
        printf("Feminino\n");
    else if (s == 'M' || s == 'm')
        printf("Masculino\n");
    else if (s == 'O' || s == 'o')
        printf("Outro/Prefiro não informar\n");
    else
        printf("Sexo invalido\n");
}