#include <stdlib.h>
#include <stdio.h>

typedef struct noLista
{
	float info;
	struct noLista* prox;
}NoLista;

typedef struct pilha
{
	NoLista* topo;
}Pilha;

Pilha* criarPilha(){
	Pilha* p = (Pilha*)malloc(sizeof(Pilha));
	p->topo = NULL;
	return p;
}

int estaVazia(Pilha* p){
	return(p->topo==NULL);
}

void push(Pilha* p, float v){
	NoLista* novo = (NoLista*)malloc(sizeof(NoLista));
	novo->info = v;
	novo->prox = p->topo;
	p->topo = novo;
}

void imprime(Pilha* p){
	NoLista* l;
	if(!estaVazia(p)) {
		for(l=p->topo; l!=NULL;l=l->prox)
			printf("%.3f ", l->info);
		printf("\n");
	} else 
		printf("Pilha vazia!\n");
}

float pop(Pilha* p){
	NoLista* temp = p->topo;
	p->topo = temp->prox;
	float x = temp->info;
	free(temp);
	return x;
} 

void liberarPilha(Pilha* p) {
	while(!estaVazia(p))
		printf("removendo %.2f...\n", pop(p));
	free(p);
	p = criarPilha();
}  