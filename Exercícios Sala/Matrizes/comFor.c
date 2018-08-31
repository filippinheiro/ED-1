#include <stdlib.h>
#include <stdio.h>
int main(){	
	int i, m=3, n=4;
	int** mat = (int**)malloc(m*sizeof(int*));
	for(i = 0; i<m; i++){
		mat[i] = (int*)malloc(n*sizeof(int));
	}
	mat[2][1] = 8;
	printf("-%d-\n", mat[2][1]);
	for(i=0; i<m; i++)
		free(mat[i]);
	free(mat);
}
