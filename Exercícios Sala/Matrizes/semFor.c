#include <stdlib.h>
#include <stdio.h>
int main(){
	int* v1 = (int*)malloc(2*sizeof(int));
	int* v2 = (int*)malloc(2*sizeof(int));
	int* v3 = (int*)malloc(2*sizeof(int));
	int** vetvet = (int**)malloc(3*sizeof(int*));
	vetvet[0] = v1;
	vetvet[1] = v2;
	vetvet[2] = v3;
	vetvet[1][2] = 3;
	printf("\n-%d-\n", vetvet[1][2]);
	free(v1);
	free(v2);
	free(v3);
	return 0;
}
