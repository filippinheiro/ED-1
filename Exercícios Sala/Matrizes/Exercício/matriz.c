#include <stdlib.h>
#include <stdio.h>

int** criaMatriz(int m, int n) {
	int i, j; 
	int** matriz = (int**)malloc(m*sizeof(int*));
	for(i = 0; i < m; i++)
		matriz[i] = (int*)malloc(n*sizeof(int));
	return matriz; 	
} 

int** transposta(int m, int n, int** mat) {
	int i, j; 
	int** trans = criaMatriz(n, m);
	for(i=0; i<n; i++){
		for(j=0; j<m; j++)
			trans[i][j] = mat[j][i];
	} 
	return trans;	
} 

void imprime(int** mat, int m, int n){
	if(mat != NULL) {
		int i, j;
		for(i=0; i<m; i++){
			printf("linha %d |", i+1);
			for(j=0; j<n; j++)
				printf("%d | ", mat[i][j]);
			printf("\n");
		}
	} else {
		printf("Matriz Vazia!\n");
	} 
}

void preencheMatriz(int** mat, int m, int n){
	int i, j;
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("Digite o valor da matriz na posição %dx%d - ", i+1, j+1);
			scanf("%d", &mat[i][j]);
		}
	}	
}

void libera(int** mat, int m){
	int i;
	for(i = 0; i < m; i++)
		free(mat[i]);
	free(mat);
} 
