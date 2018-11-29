#ifndef FILA_H
#define FILA_H

typedef struct no
{
	float info;
	struct no* prox;

}No;

typedef struct fila
{
	No* ini;
	No* fim;

}Fila;

Fila* criarFila();
int vazia(Fila*);
void inserir(Fila*, float);
void imprimeFila(Fila*);
float remover(Fila*);
void liberarFila(Fila*);

#endif
