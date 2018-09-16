#ifndef LISTADINAMICA_H
#define LISTADINAMICA_H

typedef struct nolista {
	int info;
	struct nolista* prox;	
} NoLista;

NoLista* criarLista();

int estaVazia(NoLista*);

void insereInicio(NoLista**, int);

void imprimeTudo(NoLista*);

NoLista* buscaElemento(NoLista*, int);

#endif
