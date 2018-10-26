#ifndef FILA_H
#define FILA_H

#define N 5

typedef struct fila {
    float info[N];
    int start, n;
}Fila;

int estaCheia(Fila* f);

int estaVazia(Fila* f);

Fila* criarFila();

#endif