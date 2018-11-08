#ifndef FILA_H
#define FILA_H

typedef struct noLista
{
	float info;
	struct noLista* prox;

}NoLista;

typedef struct fila
{
	NoLista* ini;
	NoLista* fim;

}Fila;

Fila* criarFila();
int estaVazia(Fila*);
void inserir(Fila*, float);
void imprimeFila(Fila*);
float remove(Fila*);
void liberarFila(Fila*);

#endif