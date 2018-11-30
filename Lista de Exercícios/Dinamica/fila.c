#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
	float info;
	struct no* prox;

}No;

typedef struct fila
{
	No* ini;
	No* fim;

}Fila; 

Fila* criarFila(){
	Fila* f = (Fila*)malloc(sizeof(Fila));
	f->ini = f->fim = NULL;
	return f;
}

int vazia(Fila* f){
	return(f->fim==NULL);
}

void inserir(Fila* f, float v){
	No* novo = (No*)malloc(sizeof(No));
	if(novo!=NULL){
		novo->info = v;
		novo->prox = NULL;
		if(!vazia(f))
			f->fim->prox = novo;
		else 
			f->ini = novo;
		f->fim = novo;
	}
}

void imprimeFila(Fila* f){
	No* p;
	if(!vazia(f)) {
		for(p=f->ini; p!=NULL; p=p->prox)
			printf("%.3f ", p->info);
		printf("\n");
	} else 
		printf("Empty queue!\n");

}

float remover(Fila* f){
	float v;
	if(!vazia(f)){
		No* p = f->ini;
		v = p->info;
		f->ini = p->prox;
		if(f->ini == NULL)
			f->fim = NULL;
		free(p);
		return v;
	} else {
		printf("Empty queue!\n");
		v = 0;
	}
	return v;
}

void liberarFila(Fila* f){
	while(!vazia(f))
		printf("Removendo %.2f...\n", remover(f));
	free(f);
	f = NULL;
}
