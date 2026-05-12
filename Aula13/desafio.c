#include <stdio.h>

// Protótipos das funções (Passagem por referência)
void calcularEstatisticas(int *vetor, int tam, int *soma, int *maior, int *menor, float *media);
void inverterVetor(int *vetor, int tam);

int main()
{
    int v[10];
    int *p = v; // O ponteiro 'p' aponta para o início do vetor
    int soma = 0, maior, menor;
    float media;
    int i;

        // 1. Leitura dos dados usando apenas ponteiros
        printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Elemento %d: ", i + 1);
        // scanf espera um endereço. p + i é o endereço do elemento i
        scanf("%d", (p + i));
    }

    // 2. Processamento via função com passagem por referência
    // Passamos os endereços de soma, maior, menor e media para serem alterados lá dentro
    calcularEstatisticas(v, 10, &soma, &maior, &menor, &media);

    // 3. Exibição dos dados e endereços (Atividade Extra)
    printf("\n--- Analise do Vetor ---\n");
    for (i = 0; i < 10; i++)
    {
        // *(p + i) acessa o CONTEÚDO do endereço
        // (p + i) mostra o ENDEREÇO de memória
        printf("Valor: %d \t Endereco: %p\n", *(p + i), (void *)(p + i));
    }

    printf("\n--- Resultados ---\n");
    printf("Soma: %d\n", soma);
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Media: %.2f\n", media);

    // 4. Inverter o vetor (Desafio Extra)
    inverterVetor(v, 10);
    printf("\nVetor Invertido: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *(p + i));
    }
    printf("\n");

    return 0;
}

// Implementação: Cálculo de estatísticas usando aritmética de ponteiros
void calcularEstatisticas(int *vetor, int tam, int *soma, int *maior, int *menor, float *media)
{
    int i;
    // Inicializamos maior e menor com o conteúdo do primeiro elemento
    *soma = 0;
    *maior = *vetor;
    *menor = *vetor;

    for (i = 0; i < tam; i++)
    {
        int valorAtual = *(vetor + i); // Aritmética de ponteiro para pegar o valor

        *soma += valorAtual;

        if (valorAtual > *maior)
            *maior = valorAtual;
        if (valorAtual < *menor)
            *menor = valorAtual;
    }

    // Calculamos a média usando o valor apontado por soma
    *media = (float)(*soma) / tam;
}

// Implementação: Inversão de vetor usando dois ponteiros (início e fim)
void inverterVetor(int *vetor, int tam)
{
    int *inicio = vetor;          // Aponta para o primeiro elemento
    int *fim = vetor + (tam - 1); // Aponta para o último elemento
    int temp;

    while (inicio < fim)
    {
        // Troca os valores usando um auxiliar (Swap por referência)
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        // Move os ponteiros para o centro do vetor
        inicio++;
        fim--;
    }
}