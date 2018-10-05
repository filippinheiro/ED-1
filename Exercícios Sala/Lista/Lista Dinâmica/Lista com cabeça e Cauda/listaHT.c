#include <stdlib.h>
#include <stdio.h>

typedef struct noLista {
	int info;
	struct noLista* next;
} NoLista;

typedef struct lista {
	NoLista* head;
	NoLista* tail;
} Lista;

void criarLista(Lista* l) {
	l->head = (NoLista*)malloc(sizeof(NoLista));
	l->tail = (NoLista*)malloc(sizeof(NoLista));
	l->tail->next = NULL;
	l->head->next = l->tail;
}

int estaVazia(Lista* l) {
	return (l->head->next==l->tail);
}

void insereIni(Lista* l, int v) {
	NoLista* novo = (NoLista*)malloc(sizeof(NoLista));
	if(novo!=NULL) {
		novo->info = v;
		novo->next = l->head->next;
		l->head->next = novo;
	} else {
		printf("ERRO DE MEMÓRIA!\n");
		exit(1);
	}
} 

void remover(Lista* l, int v) {
	NoLista* p, *ant = l->head;
	for(p=l->head->next; p!=l->tail&&p->info!=v; p=p->next)
		ant = p;
	if(p==l->tail) 
		printf("Elemento n encontrado\n");
	else {
		ant->next = p->next;
		free(p);
	} 
}

void libera(Lista* l){
	NoLista* p, *temp;
	for(p=l->head->next; p!=l->tail; p=temp) {
		temp = p->next;
		free(p);
	} 
	l->head->next = l->tail;
}

void imprime(Lista* l) {
	if(!estaVazia(l)) {
		NoLista* p;
		for(p=l->head->next; p!=l->tail; p=p->next)
			printf("%d ", p->info);
		printf("\n");
	} else 
		printf("Lista Vazia!\n");
} 