#include "matriz.h"
int main(){ 
	system("clear");
	int i, j, l, c;
	printf("Escolha a ordem da matriz - \nLinhas >> ");
	scanf("%d", &l);
	printf("Colunas >> ");
	scanf("%d", &c);
	int** A = criaMatriz(l, c);
	preencheMatriz(A, l, c);
	printf("Sua Matriz - \n");
	imprime(A, l, c);
	int** Q = transposta(l, c, A);
	printf("Trasposta - \n");
	imprime(Q, c, l);
	libera(A, l);
	libera(Q, c);
	return 0; 
} 
