#include "fila.h"

int main(){
	Fila* f = criarFila();
	inserir(f, 3);
	inserir(f, 2);
	inserir(f, 1);
	inserir(f, 98);
	imprimeFila(f);
	remover(f);
	imprimeFila(f);
	remover(f);
	imprimeFila(f);
	liberarFila(f);
	imprimeFila(f);
	return 0;
} 