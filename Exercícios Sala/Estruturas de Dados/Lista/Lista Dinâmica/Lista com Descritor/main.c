#include "lista.h"
#include <stdio.h>

int main() {

	Descritor d = criarLista();
	Descritor d1 = criarLista();
	
	int n = 0;
	while (n < 4) {
		printf("Insira um nó na lista >> ");
		int v;
		scanf("%d", &v);
		insereFim(&d, v);
		n++;
	} 
	
	while (n < 8) {
		printf("Insira um nó na lista >> ");
		int v;
		scanf("%d", &v);
		insereFim(&d1, v);
		n++;
	} 
	
	for(int i = 0; i<=2; i++){
		printf("remova elemento(s) >> ", i);
		int v;
		scanf("%d", &v);
		remover(&d, v);
	}
	
	imprimeTudo(&d);
	imprimeTudo(&d1);
	
	return 0;
}
