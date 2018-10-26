#include <stdlib.h>
#include <stdio.h>

#define N 10

typedef struct pilha {
	float info[N];
	int n;
}Pilha;

Pilha* criarPilha() {
	Pilha* p = (Pilha*)malloc(sizeof(Pilha));
	if(p!=NULL)
		p->n = 0;
	return p;
} 

int estaVazia(Pilha* p) {
	return(p->n==0);
}

int estaCheia(Pilha* p) {
	return (p->n==N);
}

void push(Pilha* p, float v){
	if(!estaCheia(p)) {
		p->info[p->n] = v;
		p->n++;
	} else {
		printf("Stack Overflow!\n");
		exit(1); 
	}
}

void imprime(Pilha* p) {
	if(!estaVazia(p)) {
		int i;
		printf("[");
		for(i=p->n-1; i > 0; i--)
			printf("%.2f, ", p->info[i]);
		if(i == 0) 
			printf("%.2f", p->info[i]);
		printf("]\n");
	} else {
		printf("Lista Vazia! \n");
	}
}

float pop (Pilha* p) {
	if(!estaVazia(p)) {
		p->n--;
		return p->info[p->n];
	}

}

void liberarPilha(Pilha* p){
	p->n=0;
	free(p);
}