#include <stdio.h>

int main(){
	FILE* ar = fopen("entrada.txt", "a");
	if(ar != NULL) {
		printf("Aberto com sucesso\n");
		fclose(ar);
	} else
		printf("Erro\n");
	return 0;
}