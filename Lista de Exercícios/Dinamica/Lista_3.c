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

void concatenaPilhas(Pilha* p1, Pilha* p2) {
	Pilha* p_aux = criarPilha();
	imprime(p1);
	imprime(p2);
	while(!estaVazia(p2)) {
		NoLista* p;
		for(p = p2->topo; p!=NULL; p=p->prox);
		push(p_aux, p->info);
		pop(p2);
	}
	while(!estaVazia(p_aux)) {
		NoLista* p;
		for(p = p_aux->topo; p!=NULL; p=p->prox);
		push(p1, p->info);
		pop(p_aux);
	}
	imprime(p1);
	imprime(p2);
}

int main(){
	//Fila* f1 = criarFila();
	Pilha* p1 = criarPilha();
	Pilha* p2 = criarPilha();
	push(p1, 1);
	push(p1, 3);
	push(p2, 4);
	push(p2, 5);
	push(p2, 7.8);
	push(p2, 9.1);
	concatenaPilhas(p1, p2);
	return 0;
	
		
}
