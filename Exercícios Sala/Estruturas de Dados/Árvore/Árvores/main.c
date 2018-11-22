#include "arvore.h"

#include <stdio.h>

int main(){
	
	Arvore* e = criarArvore('e', criarArvoreVazia(), criarArvoreVazia());

	//Arvore* g = criarArvore('g', criarArvoreVazia(), criarArvoreVazia());
	Arvore* f = criarArvore('f', criarArvoreVazia(), criarArvoreVazia());
	Arvore* d = criarArvore('d', criarArvoreVazia(), criarArvoreVazia());
	Arvore* b = criarArvore('b', criarArvoreVazia(), d);
	Arvore* c = criarArvore('c', e, f);
	Arvore* a = criarArvore('a', b, c);

	//Arvore* a = criarArvore('a', criarArvore('b', criarArvoreVazia(), criarArvore('d', criarArvoreVazia(), criarArvoreVazia())), criarArvore('c', criarArvore('e', criarArvoreVazia(), criarArvoreVazia()), criarArvore('f', criarArvoreVazia(), criarArvoreVazia())));

	imprimeArvore(a);
	/*
	if(pertenceArvore(a, 'g')) 
		printf("ta aqui\n"); 
	else
		printf("Nao ta n man\n");
	*/ 
	printf("\nNos: %d\n", numeroNos(a));
	printf("Altura: %d\n", altura(a));
	return 0;
} 