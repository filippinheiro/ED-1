#include <stdlib.h>
#include <stdio.h>

typedef struct nolista {
	int info;
	struct nolista* prox;	
} NoLista;

NoLista* criarLista() {
	return NULL;
}

int estaVazia(NoLista* l){
	return (l == NULL);
} 

void insereInicio(NoLista** l, int v){
	NoLista* novo = (NoLista*) malloc(sizeof(NoLista));
	if(!estaVazia(novo)) {
		novo->info = v;
		novo->prox = *l;
		*l = novo;
	} else {
		printf("Erro de Memória!");
		exit(1);
	}
}

NoLista* buscaElemento(NoLista* l, int v){
	for(l; l!=NULL && l->info!=v; l=l->prox);
	return l;
} 

void imprimeTudo(NoLista *l){
	if(!estaVazia(l)) {
		NoLista* p;
		int i = 1;
		for(p=l; p!=NULL; p=p->prox) {
			printf("%d ", p->info);
			i++;
		}
		printf("\n");
	} else {
		printf("Lista Vazia!\n");
	}	
} 
