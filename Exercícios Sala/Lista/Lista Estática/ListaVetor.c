#include <stdio.h>

#define MAX 4

typedef struct lista {
	int itens[MAX], 
	prox;
}Lista;

void criarLista(Lista* l){
	l->prox = 0;
} 

int estaVazia(Lista* l) {
	return (l->prox == 0);
}

int estaCheia(Lista* l){
	return (l->prox == MAX);
}

void inserirElemento(Lista* l, int v){
	if(!estaCheia(l)){
		l->itens[l->prox] = v;
		l->prox++;
		//printf("Inserido!\n");
	} else 
		printf("Lista Cheia!\n");
}

void imprimeLista(Lista* l){
	if(!estaVazia(l)){
		printf("\n##Lista Completa##");
		for(int i = 0; i<l->prox; i++)
			printf("\nItem %d - %d", i+1, l->itens[i]);
	} else 
		printf("Lista Vazia!");
	printf("\n");
}  

void removerElemento(Lista* l, int i){
	if(!estaVazia(l)){
		if(i-1>=0 && i<=MAX) {
			for(i; i<MAX; i++)
				l->itens[i-1] = l->itens[i];
			l->prox--;
			//printf("removido!\n");
		} else 
			printf("\nPosição Inválida!\n");
	} else
		printf("Lista Vazia!\n");
} 


