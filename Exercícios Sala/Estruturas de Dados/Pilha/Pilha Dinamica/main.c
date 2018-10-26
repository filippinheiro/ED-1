#include "pilha.h"
#include <stdio.h>
int main(){
	Pilha* c = criarPilha();
	push(c, 2);
	push(c, 4);
	push(c, 9.1);
	push(c, 11);
	imprime(c);
	printf("Elemento removido %f\n", pop(c));
	imprime(c);
	printf("Elemento removido %f\n", pop(c));
	imprime(c);
	printf("Elemento removido %f\n", pop(c));
	imprime(c);
	printf("Elemento removido %f\n", pop(c));
	imprime(c);
	push(c, 5);
	push(c, 1);
	push(c, 16);
	push(c, 1);
	push(c, 18);
	push(c, 12.6);
	push(c, 16.98);
	push(c, 0.638);
	push(c, 78.5);
	imprime(c);
	liberarPilha(c);
	imprime(c);
	return 0;
}
