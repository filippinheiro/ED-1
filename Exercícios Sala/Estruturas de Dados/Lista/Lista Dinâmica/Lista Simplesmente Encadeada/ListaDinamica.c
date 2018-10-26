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

void inserir(NoLista** l, int v) {
	NoLista *p, *tmp = NULL;
	for(p=*l; p!=NULL && p->info<v; p=p->prox)
		tmp = p;
	NoLista* novo = (NoLista*) malloc(sizeof(NoLista));
	if(novo!=NULL) {
		if(tmp == NULL) {
			novo->info = v;
			novo->prox = p;
			*l = novo;
		} else	{
			novo->info = v;
			novo->prox = p;
			tmp->prox = novo;
		}
	} else {
		printf("Falha de Memória!\n");
		exit(1);
	}
}

NoLista* buscaElemento(NoLista* l, int v){
	for(l; l != NULL && l->info!=v; l=l->prox);
	return l;
} 

void remover(NoLista** l, int v) {
	NoLista *p, *ant = NULL;
	for(p=*l; p != NULL && p->info != v; p=p->prox)
		ant = p;
	if(p==NULL) 		
		printf("\nElemento não encontrado\n");
	else {
		if (ant == NULL) 
			*l = p->prox;
		else
			ant->prox = p->prox;
		free(p);
	} 
}	

void libera(NoLista** l) {
	NoLista *p, *tmp;
	for(p=*l; p!=NULL; p=tmp) { 
		tmp=p->prox;
		free(p);
	} 
	*l = criarLista();
}  

NoLista* ultimo(NoLista* l) {
	NoLista *p;
	for(p=l; p->prox != NULL; p=p->prox);
	return p;
} 

int tamanho(NoLista* l) {
	int i = 0;
	NoLista* p;
	for (p=l; p!=NULL; p=p->prox)
		i++;
	return i;
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
