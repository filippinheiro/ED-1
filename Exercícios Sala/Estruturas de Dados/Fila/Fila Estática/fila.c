#include <stdio.h>
#include <stdlib.h>

#define N 5

typedef struct fila {
    float info[N];
    int start, n;
}Fila;

int estaCheia(Fila* f){
    return(f->n==N);
}

int estaVazia(Fila* f){
    return(f->n==0);
} 

Fila* criarFila(){
    Fila* fila = (Fila*)malloc(sizeof(Fila));
    fila->n = 0;
    fila->start = 0;
    return fila;
} 