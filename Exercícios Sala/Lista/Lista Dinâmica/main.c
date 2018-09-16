#include "ListaDinamica.h"
#include <stdio.h>
int main () {
	NoLista* lista = criarLista();
	NoLista* lista1 = criarLista();
	NoLista* lista2 = criarLista();
	NoLista* lista3 = criarLista();
	insereInicio(&lista, 4);
	insereInicio(&lista, 5);
	insereInicio(&lista, 1);
	insereInicio(&lista, 9);
	insereInicio(&lista, 14);
	insereInicio(&lista, 3);
	insereInicio(&lista1, 5);
	insereInicio(&lista1, 53);
	insereInicio(&lista1, 0);
	insereInicio(&lista1, 7);
	insereInicio(&lista1, 174);
	insereInicio(&lista1, 3);
	insereInicio(&lista2, 76);
	insereInicio(&lista2, 2);
	insereInicio(&lista2, 10);
	insereInicio(&lista2, 98);
	insereInicio(&lista2, 1);
	insereInicio(&lista2, 37);
	insereInicio(&lista3, 49);
	insereInicio(&lista3, 3);
	insereInicio(&lista3, 87);
	insereInicio(&lista3, 969);
	insereInicio(&lista3, 14025);
	insereInicio(&lista3, 1000000000);
	/*
	imprimeTudo(lista);
	imprimeTudo(lista1);
	imprimeTudo(lista2);
	imprimeTudo(lista3);
	*/
	NoLista* q = buscaElemento(lista2, 98);
	if(q!=NULL)
		printf("%d\n", q->info);
	else 
		printf("Nao encontrado");
}  
