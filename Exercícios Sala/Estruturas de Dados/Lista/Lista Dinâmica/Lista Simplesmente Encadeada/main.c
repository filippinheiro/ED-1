#include "ListaDinamica.h"
#include <stdio.h>
int main () {

	NoLista* lista = criarLista();
	NoLista* lista1 = criarLista();
	
	inserir(&lista, 4);
	inserir(&lista, 5);
	inserir(&lista, 1);
	inserir(&lista, 3);
	inserir(&lista1, 3);
	inserir(&lista1, 53);
	inserir(&lista1, 0);
	inserir(&lista1, 7);

	imprimeTudo(lista);
	imprimeTudo(lista1);
	printf("Tamanho 1 - %d \n", tamanho(lista));
	printf("Tamanho 2 - %d \n", tamanho(lista1));
	printf("Ultimo 1 - %d \n", ultimo(lista)->info);
	printf("Ultimo 2 - %d \n", ultimo(lista1)->info);

	printf("\n");
	remover(&lista, 5);
	remover(&lista, 1);
	remover(&lista1, 3);

	
	imprimeTudo(lista);
	imprimeTudo(lista1);
	printf("Tamanho 1 - %d \n", tamanho(lista));
	printf("Tamanho 2 - %d \n", tamanho(lista1));
	printf("Ultimo 1 - %d \n", ultimo(lista)->info);
	printf("Ultimo 2 - %d \n", ultimo(lista1)->info);
	printf("\n");
	libera(&lista1);
	imprimeTudo(lista);
	imprimeTudo(lista1);
	printf("Tamanho 1 - %d \n", tamanho(lista));
	printf("Tamanho 2 - %d \n", tamanho(lista1));
	printf("Ultimo 1 - %d \n", ultimo(lista)->info);
	printf("Ultimo 2 - %d \n", ultimo(lista1)->info);
	
	return 0;
	
}  
