#include <stdlib.h>
#include <stdio.h>



typedef struct arvore {
	char info;
	struct arvore* left;
	struct arvore* right;
}Arvore; 

Arvore* criarArvoreVazia() {
	return NULL;
}

Arvore* criarArvore(char c, Arvore* sae, Arvore* sad){
	Arvore* novo = (Arvore*)malloc(sizeof(Arvore));
	if(novo!=NULL){
		novo->info = c;
		novo->left = sae;
		novo->right = sad;
	} else {
		printf("Erro de memoria!\n");
		exit(1);
	}
	return novo;
}

int estaVazia(Arvore* a) {
	return (a == NULL);
}

void imprimeArvore(Arvore* a){
	printf("<");
	if(!estaVazia(a)) {
		printf("%c ", a->info);
		imprimeArvore(a->left);
		imprimeArvore(a->right);
	}
	printf(">");
}

/*

void imprimeCPilha(Arvore* a){
	Arvore* aux;
	Pilha* p = criarPilha();
	push(p, a);
	while(!estaVaziaP(p)) {
		aux = pop(p);
		printf("%c\n", aux->info);
		if(aux->right !=NULL)
			push(p, aux->right);
		if(aux->left !=NULL)
			push(p, aux->left);

	}
}
*/

Arvore* liberarArvore(Arvore* a){
	if(!estaVazia(a)){
		liberarArvore(a->left);
		liberarArvore(a->right);
		free(a);
	}
	return NULL;
}