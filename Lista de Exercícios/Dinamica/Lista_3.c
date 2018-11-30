#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include "fila.h"

float maior(Fila* fila){
	float maior;
	No* n = fila->ini;
	maior = n->info;
	for(n; n != NULL; n=n->prox) {
		if(n->info > maior)
			maior = n->info;
	}
	return maior; 
} 

void concatenaPilhas1(Pilha* p1, Pilha* p2) {
	Pilha* p_aux = criarPilha(); 
	while(!estaVazia(p2)) 
		push(p_aux, pop(p2));
	while(!estaVazia(p_aux))
		push(p1, pop(p_aux));
} 

void concatenaPilhas2(Pilha* p1, Pilha* p2) {
	if(estaVazia(p2))
		return;
	else {
		float v = pop(p2);
		concatenaPilhas2(p1, p2);
		push(p1, v);
	} 
} 

void combinaFila1(Fila* f_res, Fila* f1, Fila* f2) {
	while(!vazia(f1) || !vazia(f2)) {
		if(!vazia(f1))
			inserir(f_res, remover(f1));
		if(!vazia(f2))
			inserir(f_res, remover(f2));
	}
}

void combinaFila2(Fila* f_res, Fila* f1, Fila* f2) {
	
}

int main() {
	Pilha* p1, *p2;
	p1 = criarPilha();
	p2 = criarPilha();
	Fila* f1, *f2, *f_res;
	f1 = criarFila();
	f2 = criarFila();
	f_res = criarFila();
	inserir(f1, 1);
	inserir(f1, 4);
	inserir(f2, 2.1);
	inserir(f2, 3.0);
	inserir(f2, 4.5);
	imprimeFila(f1);
	imprimeFila(f2);
	imprimeFila(f_res);
	printf("---------------\n");
	combinaFila(f_res, f1, f2);
	imprimeFila(f1);
	imprimeFila(f2);
	imprimeFila(f_res);
	return 0;	
		
} 