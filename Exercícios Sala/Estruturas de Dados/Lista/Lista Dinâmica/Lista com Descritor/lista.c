#include <stdlib.h>
#include <stdio.h>


typedef struct noLista {
	struct noLista* prox;
	int info;
} NoLista;

typedef struct descritor {
	NoLista* prim;
	NoLista* ult;
	int n;
} Descritor; 

Descritor criarLista() {
	Descritor d;
	d.n = 0;
	d.prim = NULL;
	d.ult = NULL;
	return d;
} 


int estaVazia(Descritor* d) {
	return(d->n==0);
}


void insereIni(Descritor* d, int v) {
	NoLista* novo = (NoLista*)malloc(sizeof(NoLista));
	if(novo!=NULL) {	 
		novo->info = v;
		novo->prox = d->prim;
		d->prim = novo;
		if(estaVazia(d)) 			
			d->ult = novo;
		d->n++;
	} else {
		printf("Erro de memória!\n");
		exit(1);
	}
}

void insereFim(Descritor* d, int v) {
	NoLista* novo = (NoLista*)malloc(sizeof(NoLista));
	if(novo!=NULL) { 
		novo->info = v;
		novo->prox = NULL;
		if(!estaVazia(d)) 
			d->ult->prox = novo;
		else 
			d->prim = novo;
		d->ult = novo;
		d->n++;
	} else {
		printf("Erro de memória!\n");
		exit(1);
	} 
} 

void remover(Descritor* d, int v) {
	NoLista *p, *ant = NULL;
	for(p=d->prim; p!=NULL&&p->info!=v;p=p->prox)
		ant = p;
	if(p==NULL)
		printf("Elemento não encontrado\n");
	else {
		if(ant==NULL) {
			d->prim = p->prox;
			if(d->prim==NULL)
				d->ult = NULL;
		} else {
			ant->prox = p->prox;
			if(p->prox==NULL)
				d->ult = ant;
		}
		free(p);
		d->n--;		
	}	
} 

void libera(Descritor* d){
	
}

void imprimeTudo(Descritor* d) {
	if(!estaVazia(d)) {
		NoLista* n;
		for(n=d->prim; n!=NULL; n=n->prox) 
			printf("%d ", n->info);
		printf("\n");
	} else 
		printf("Lista Vazia!\n");
} 
