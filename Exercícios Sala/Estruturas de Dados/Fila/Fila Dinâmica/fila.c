#include <stdio.h>
#include <stdlib.h>

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

Fila* criarFila(){
	Fila* f = (Fila*)malloc(sizeof(Fila));
	f->ini = f->fim = NULL;
	return f;
}

int estaVazia(Fila* f){
	return(f->fim==NULL);
}

void inserir(Fila* f, float v){
	NoLista* novo = (NoLista*)malloc(sizeof(NoLista));
	if(novo!=NULL){
		novo->info = v;
		novo->prox = NULL;
		if(!estaVazia(f))
			f->fim->prox = novo;
		else 
			f->ini = novo;
		f->fim = novo;
	}
}

void imprimeFila(Fila* f){
	NoLista* p;
	if(!estaVazia(f)) {
		for(p=f->ini; p!=NULL; p=p->prox)
			printf("%.3f ", p->info);
		printf("\n");
	} else 
		printf("Empty queue!\n");

}

float remover(Fila* f){
	float v;
	if(!estaVazia(f)){
		NoLista* p = f->ini;
		v = p->info;
		f->ini = p->prox;
		if(f->ini == NULL)
			f->fim == NULL;
		free(p);
		return v;
	} else {
		printf("Empty queue!\n");
		v = 0;
	}
	return v;
}

void liberarFila(Fila* f){
	while(!estaVazia(f))
		printf("Removendo %.2f...\n", remover(f));
	free(f);
	f = NULL;
}