#include <stdio.h>
#include <stdlib.h>

#define MAX 3

typedef struct aluno {
	char nome[80];
	int matricula;
} Aluno;


void inicializa(int n, Aluno** alunos){
	int i;
	for(i = 0; i < n; i++)
		alunos[i] = NULL;
} 

void leAluno(int n, Aluno** tab, int i){
	if(i >= 0 && i <= n){
		if(tab[i] == NULL){
			setbuf(stdin, NULL);
			tab[i] = (Aluno*)malloc(sizeof(Aluno));
			printf("Digite o nome >> ");
			scanf("%80[^\n]", tab[i]->nome);
			setbuf(stdin, NULL);
			printf("Digite a matricula >> ");
			scanf("%d", &(tab[i]->matricula));
		} else 
			printf("Não há mais espaço");
	}	
}

void imprimeAluno(int n, Aluno** tab, int i){
	if(i >= 0 && i <= n){
		if(tab[i] != NULL){
			printf("\n");
			printf("Nome: %s \n", tab[i]->nome);
			printf("Matricula: %d \n", tab[i]->matricula);
		} else 
			printf("Posição vazia\n");
	}
}

void retiraAluno(int n, Aluno** tab, int i){
	if(i >= 0 && i <= n){
		if(tab[i] != NULL){
			free(tab[i]);
			tab[i] = NULL;
		} else 
			printf("Posição vazia!");
	}
} 

void imprimeTudo(int n, Aluno** tab){
	int i;
	for(i = 0; i < n; i++) {
		if(tab[i]!=NULL)
			imprimeAluno(n, tab, i);
	}
} 

/*
int opc(){
	int opc;
	printf("1. Ler um aluno\n2. Imprimir um Aluno\n3. Retirar um aluno\n4. Imprimir lista\n>> ");	
	scanf("%d", &opc);
	return opc;
}

void menu(int opc, Aluno** tab, int n){
	int pos;
	switch(opc){
		case 1 : printf("Digite a posição do aluno na lista");
			scanf("%d", &pos);
			leAluno(n, tab, pos);
			break;
		case 2 : printf("Digite a posição do aluno na lista");
			scanf("%d", &pos);
			imprimeAluno(n, tab, pos);
			break;
		case 3 : printf("Digite a posição do aluno na lista");
			scanf("%d", &pos);
			retiraAluno(n, tab, pos);
			break;
		case 4 : imprimeTudo(n, tab);
			break;
		}
} 
*/
