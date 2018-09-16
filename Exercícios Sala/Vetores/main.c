#include <stdlib.h>
#include <stdio.h>

#define TAM 10

float media(int* vet, int n){
	int i;
	float soma = 0;
	for(i = 0; i < n; i++){
		soma += vet[i];
	}	
	return soma/n;
}

int main(){
	int* numeros = (int*) malloc(TAM*sizeof(int))/*Alocacação estática - numeros[TAM] - */, i;
	if(numeros != NULL){
		for(i = 0; i < TAM; i++){
			printf("Digite o %dº valor >> ", i+1);
			scanf("%d", &numeros[i]);
		}
		i = 0;
		printf("Vetor - ");
		while(i < TAM){
			printf("%d, ", numeros[i]);
			i++;
		}
		printf("\n Média: %.2f\n", media(numeros, TAM));
		free(numeros);
	} else {
		printf("ERRO AO ALOCAR MEMÓRIA\n");
		exit(1);
	}
	return 0;
} 
