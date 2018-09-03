#ifndef MATRIZ_H
#define MATRIZ_H
#include <stdlib.h>
#include <stdio.h>
int** criaMatriz(int, int);


int** transposta(int, int, int**);

void imprime(int**, int, int);


void preencheMatriz(int**, int, int);

void libera(int**, int);


#endif
