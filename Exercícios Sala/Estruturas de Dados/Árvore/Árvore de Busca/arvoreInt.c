#include <stdio.h>
#include <stdlib.h>

typedef struct arvore{
	int info;
	struct arvore* esq;
	struct arvore* dir;
}Arvore;

Arvore* criarArvoreVazia(){
	return NULL;
}

Arvore* criarArvore(char c, Arvore* sae, Arvore* sad){
	Arvore* n = (Arvore*) malloc(sizeof(Arvore));
	if(n!=NULL){
		n->info = c;
		n->esq = sae;
		n->dir = sad;
		return n;
	}else
		printf("Não foi possível alocar espaço!\n");
}

int estaVazia(Arvore* a){
	return (a == NULL);
}

void imprimirArvore(Arvore* a){
	printf("<");
	if(!estaVazia(a)){
		printf("%d",a->info);
		imprimirArvore(a->esq);
		imprimirArvore(a->dir);
	}
	printf(">");
}

Arvore* liberaArvore(Arvore* a){
	if(!estaVazia(a)){
		liberaArvore(a->esq);
		liberaArvore(a->dir);
		free(a);
	}
	return NULL;

}

int pertece(Arvore* a, char c){
	if(estaVazia(a))
		return 0;
	else{
		if(a->info == c)
			return 1;
		return(pertece(a->esq, c) || pertece(a->dir, c));
	}
}

int numeroNo(Arvore* a){
	if(estaVazia(a))
		return 0;
	return 1 + numeroNo(a->esq) + numeroNo(a->dir);
}

int alturaArvore(Arvore* a){
	if(estaVazia(a))
		return -1;
	else if(alturaArvore(a->esq) >= alturaArvore(a->dir)){
		return 1 + alturaArvore(a->esq);
	}
	else
		return 1 + alturaArvore(a->dir);
	
}

Arvore* busca(Arvore* a, int v){
	if(estaVazia(a))
		return NULL;
	else{
		if(a->info == v)
			return a;
		else if(v < a->info)
			return busca(a->esq,v);
		else
			return busca(a->dir,v);
	}#include <stdio.h>
#include <stdlib.h>

typedef struct arvore{
	int info;
	struct arvore* esq;
	struct arvore* dir;
}Arvore;

Arvore* criarArvoreVazia(){
	return NULL;
}

Arvore* criarArvore(char c, Arvore* sae, Arvore* sad){
	Arvore* n = (Arvore*) malloc(sizeof(Arvore));
	if(n!=NULL){
		n->info = c;
		n->esq = sae;
		n->dir = sad;
		return n;
	}else
		printf("Não foi possível alocar espaço!\n");
}

int estaVazia(Arvore* a){
	return (a == NULL);
}

void imprimirArvore(Arvore* a){
	printf("<");
	if(!estaVazia(a)){
		printf("%d",a->info);
		imprimirArvore(a->esq);
		imprimirArvore(a->dir);
	}
	printf(">");
}

Arvore* liberaArvore(Arvore* a){
	if(!estaVazia(a)){
		liberaArvore(a->esq);
		liberaArvore(a->dir);
		free(a);
	}
	return NULL;

}

int pertece(Arvore* a, char c){
	if(estaVazia(a))
		return 0;
	else{
		if(a->info == c)
			return 1;
		return(pertece(a->esq, c) || pertece(a->dir, c));
	}
}

int numeroNo(Arvore* a){
	if(estaVazia(a))
		return 0;
	return 1 + numeroNo(a->esq) + numeroNo(a->dir);
}

int alturaArvore(Arvore* a){
	if(estaVazia(a))
		return -1;
	else if(alturaArvore(a->esq) >= alturaArvore(a->dir)){
		return 1 + alturaArvore(a->esq);
	}
	else
		return 1 + alturaArvore(a->dir);
	
}

Arvore* busca(Arvore* a, int v){
	if(estaVazia(a))
		return NULL;
	else{
		if(a->info == v)
			return a;
		else if(v < a->info)
			return busca(a->esq,v);
		else
			return busca(a->dir,v);
	}
}

Arvore* inserir(Arvore* a, int v){
	if(estaVazia(a)){
		a = malloc(sizeof(Arvore));
		if(a != NULL){
			a->info = v;
			a->esq = a->dir = NULL;
			return a;
		}	
	}else{
		if(v < a->info)
			a->esq = inserir(a->esq,v);
		else
			a->dir = inserir(a->dir,v);
	}

} ,
}

Arvore* inserir(Arvore* a, int v){
	if(estaVazia(a)){
		a = malloc(sizeof(Arvore));
		if(a != NULL){
			a->info = v;
			a->esq = a->dir = NULL;
			return a;
		}	
	}else{
		if(v < a->info)
			a->esq = inserir(a->esq,v);
		else
			a->dir = inserir(a->dir,v);
	}

} 

#include "arvoreInt.h"
int main(){
	
	Arvore* ar = criarArvoreVazia();
	ar = inserir(ar, 3);
	ar = inserir(ar, 4);
	ar = inserir(ar, 5);
	ar = inserir(ar, 8);
	ar = inserir(ar, 7);
	
	imprimirArvore(ar);
	/*
	printf("\n");
	printf("Número de nós: %d\n",numeroNo(ar));
	printf("altura: %d\n",alturaArvore(ar));
	*/
	return 0;

} 
