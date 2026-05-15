#ifndef LEITOR_H
#define LEITOR_H

#include <stdio.h>
#include <stdlib.h>

// Escrita no arquivo
void salvaArquivo(char *nomeArq, int *num1, int *num2);

// Leitura do Arquivo
void lerDoisNumeros(char *nomeArq, int *num1, int *num2);

#endif