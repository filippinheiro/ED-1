#ifndef LISTAHT_H
#define LISTAHT_H

typedef struct noLista {
	int info;
	struct noLista* prox;
} NoLista;

typedef struct lista {
	NoLista* head;
	NoLista* tail;
} Lista;

void criarLista(Lista*);

void remover(Lista*,int);

void libera(Lista*);

int estaVazia(Lista*);

void insereIni(Lista*,int);

void imprime(Lista*);

#endif