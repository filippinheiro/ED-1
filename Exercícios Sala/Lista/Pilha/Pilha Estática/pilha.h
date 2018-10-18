#ifndef PILHA_H
#define PILHA_H

#define N 10

typedef struct pilha {
	float info[N];
	int n;
}Pilha;

Pilha* criarPilha();

int estaVazia(Pilha* p);

int estaCheia(Pilha* p);

void push(Pilha* p, float v);

float pop (Pilha* p);

void imprime(Pilha* p);

void liberarPilha(Pilha* p);

#endif 