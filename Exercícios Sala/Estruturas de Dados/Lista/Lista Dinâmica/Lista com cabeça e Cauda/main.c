#include "listaHT.h"

int main() {
	Lista l, l2;
	criarLista(&l);
	criarLista(&l2);
	insereIni(&l, 3);
	insereIni(&l2, 1);
	insereIni(&l, 2);
	insereIni(&l2, 6);
	insereIni(&l, 5);
	imprime(&l);
	remover(&l, 3);
	remover(&l, 5);
	remover(&l, 2);
	imprime(&l);
	libera(&l);
	imprime(&l);
	imprime(&l2);
	return 0;
} 