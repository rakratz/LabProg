#include <stdio.h>
#include <string.h>

#define MAX 100

/* Estrutura de Dados */
int contas[MAX];
char nomes[MAX][50];
float saldos[MAX];
int qtd = 0;

/* Protótipos */
void carregarDados();
void salvarDados();
void listarContas();
void cadastrarConta();

int main()
{
    int opcao;

    carregarDados();

    do
    {
        printf("============================\n");
        printf(" SISTEMA BANCARIO\n");
        printf("============================\n");
        printf("1 - Cadastrar Conta\n");
        printf("2 - Listar Contas\n");
        printf("3 - Consultar Conta\n");
        printf("4 - Depositar\n");
        printf("5 - Sacar\n");
        printf("6 - Excluir Conta\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            /* Cadastrar Conta */
            cadastrarConta();
            break;

        case 2:
            listarContas();
            break;

        case 3:
            /* Consultar Conta */
            break;

        case 4:
            /* Depositar */
            break;

        case 5:
            /* Sacar */
            break;

        case 6:
            /* Excluir Conta */
            break;

        case 0:
            printf("Programa encerrado...\n");
            break;

        default:
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}

void carregarDados()
{
    FILE *arquivo = fopen("contas.txt", "r");

    if (arquivo == NULL)
    {
        printf("Falha ao abrir o arquivo de contas!\n");
        return;
    }

    while (fscanf(arquivo, "%d;%49[^;];%f\n",
                  &contas[qtd],
                  nomes[qtd],
                  &saldos[qtd]) == 3)
    {
        qtd++;
    }

    fclose(arquivo);
}

void salvarDados()
{
    int i;
    
    FILE *arquivo = fopen("contas.txt", "w");

    if (arquivo == NULL)
    {
        printf("Falha ao salvar o arquivo de contas!\n");
        return;
    }

    for (i = 0; i < qtd; i++)
    {
        fprintf(arquivo, "%d;%s;%.2f\n",
                contas[i],
                nomes[i],
                saldos[i]);
    }

    fclose(arquivo);
}

void listarContas()
{
    int i;

    printf("============================\n");
    printf(" CONTAS CADASTRADAS\n");
    printf("============================\n");

    for (i = 0; i < qtd; i++)
    {
        printf("Conta: %d\n", contas[i]);
        printf("Cliente: %s\n", nomes[i]);
        printf("Saldo: R$ %.2f\n", saldos[i]);
        printf("----------------------------\n");
    }
}

void cadastrarConta(){
    printf("\nNumero da Conta: ");
        scanf("%d", &contas[qtd]);

        getchar(); // Limpar o buffer de teclado
        printf("Nome do cliente: ");
        fgets(nomes[qtd], 50, stdin);

        nomes[qtd][strcspn(nomes[qtd], "\n")] = '\0';

        printf("Saldo inicial: ");
        scanf("%f", &saldos[qtd]);
        qtd++;

        salvarDados();

        printf("\nConta cadastrada com sucesso!\n");
}