#ifndef LISTAVETOR_H
#define LISTAVETOR_H
#define MAX 4


typedef struct lista {
	int itens[MAX], 
	prox;
}Lista;

void criarLista(Lista*);

int estaVazia(Lista*);

void removerElemento(Lista*, int);

int estaCheia(Lista*);

void inserirElemento(Lista*, int);

void imprimeLista(Lista*);

void removerElemento(Lista*, int);

#endif
