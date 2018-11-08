#include "ListaVetor.h"
#include <stdlib.h>
#include <stdio.h>
int main() {
	Lista *l = (Lista*)malloc(sizeof(Lista));
	criarLista(l);
	inserirElemento(l, 3);
	inserirElemento(l, 4);
	inserirElemento(l, 5);
	inserirElemento(l, 9);
	imprimeLista(l);
	removerElemento(l, 3);
	removerElemento(l, 4);
	removerElemento(l, 1);
	removerElemento(l, 5);
	inserirElemento(l, 14);
	inserirElemento(l, 5);
	inserirElemento(l, 2);
	inserirElemento(l, 4);
	inserirElemento(l, 87);
	imprimeLista(l);	
	system("make clean --silent");
	return 0;
}
