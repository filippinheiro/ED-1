#ifndef LISTA_H
#define LISTA_H

typedef struct noLista  {
	struct noLista* prox;
	int info;
} NoLista;

typedef struct descritor {
	NoLista* prim;
	NoLista* ult;
	int n;
} Descritor;

Descritor criarLista();

NoLista* leNo();

int estaVazia(Descritor*);


void insereIni(Descritor*,int);

void insereFim(Descritor*,int);

void remover(Descritor*, int);

void imprimeTudo(Descritor*);


#endif
