/* Pontifícia Universidade Católica de Goiás
Disciplina: Programação de Computadores
Professor: Me. Ricardo Kratz
Autor: Fulano de Tal
Data: 14/04/2026
Descrição: Manipulação de String = array de char's
Versão: 1.0 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char texto[100];
    char maiusculo[100];
    char minusculo[100];
    char busca[20];
    char c;
    int i = 0;
    int tamanho = 0;
    int vogais = 0;
    int consoantes = 0;
    int espacos = 0;

    printf("Digite uma frase: ");
    fgets(texto, 100, stdin); 
    // lê a string com espaços standard input (entrada padrao)

    // Remover, se existir, o "\n" da nossa string
    texto[strcspn(texto, "\n")] = '\0';
    // strcspn conta os caracteres até um determinado caracter específico

    tamanho = strlen(texto); // strlen retorna a quantidade de caracters

    // Contar a quantidade de vogais
    for (i = 0; texto[i] != '\0'; i++) {
        c = texto[i];

        if (c == ' ') {
            espacos++;
        }
        // Converter o caracter para minúsculo para facilitar a verificação]
        c = tolower(c);
        // Verificar se é uma letra
        if (isalpha(c)) {
            // Verificar se é vogal
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vogais++;
            } else {
                consoantes++;
            }
        }
    }

        // Converter ma Maiúsculo
        strcpy(maiusculo, texto); // copia da string
        for (i = 0; maiusculo[i] != '\0'; i++)
        {
            maiusculo[i] = toupper(maiusculo[i]);
        }
        // Converter para Minúsculo
        strcpy(minusculo, texto);
        for (i = 0; minusculo[i] != '\0'; i++)
        {
            minusculo[i] = tolower(minusculo[i]);
        }


        // Exibir resultados
        printf("\n=== RESULTADOS ===\n");
        printf("Texto informado: %s\n", texto);
        printf("Tamanho da String: %d\n", tamanho);
        printf("Quantidade de Vogais: %d\n", vogais);
        printf("Quantidade de consoantes: %d\n", consoantes);
        printf("Quantidade de espacos: %d\n", espacos);
        printf("Texto Maiusculo: %s\n", maiusculo);
        printf("Texto Minusculo: %s\n", minusculo);

        printf("\nDigite uma palavra para buscar: ");
        fgets(busca, 20, stdin);
        busca[strcspn(busca, "\n")] = '\0';

        if (strstr(texto, busca) != NULL)
        {
            printf("A palavra '%s' foi encontrada na frase!\n", busca);
        }
        else
        {
            printf("A palavra '%s' NAO foi encontrada.\n", busca);
        }
        return 0;
    }