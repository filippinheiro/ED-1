#ifndef PILHA_H
#define PILHA_H

typedef struct noLista
{
	float info;
	struct noLista* prox;
}NoLista;

typedef struct pilha
{
	NoLista* topo;
}Pilha;

Pilha* criarPilha();

int estaVazia(Pilha* p);

void push(Pilha* p, float v);

void imprime(Pilha* p);

float pop(Pilha* p);

void liberarPilha(Pilha* p);

#endif