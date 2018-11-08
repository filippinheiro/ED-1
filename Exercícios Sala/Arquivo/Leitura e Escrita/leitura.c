#include <stdio.h>
int main(){
	FILE* file = fopen("entrada.txt", "w");
	if(file!=NULL) {
		char nome[121];
		printf("digite o seu nome >> ");
		scanf("%121[^\n]", nome);
		fprintf(file, "%s\n", nome);
		fclose(file);
	}
	return 0;
} 