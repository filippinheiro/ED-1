#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

int main() {
	Pilha* p = criarPilha();
	push(p,2);
	push(p,3);
	imprime(p);
	push(p,4);
	push(p,5);
	push(p,6);
	imprime(p);
	printf("\n\n");
	printf("Elemento removido : %.2f\n", pop(p));
	imprime(p);
	printf("\n");
	//push(p,9);
	printf("Elemento removido : %.2f\n", pop(p));
	imprime(p);
	printf("\n\n");
	push(p,10);
	imprime(p);
	push(p,11);
	imprime(p);
	printf("\n\n");
	liberarPilha(p);
	imprime(p);
	return 0;
}
