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
		printf(" %c ", a->info);
		imprimeArvore(a->left);
		imprimeArvore(a->right);
	}
	printf(">");
}

int altura(Arvore* a){
	if(estaVazia(a))
		return -1;
	else {
		int l = altura(a->left);
		int r = altura(a->right);
		if(l > r)
			return 1 + l;
		else 
			return 1 + r; 
	}
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

int numeroNos(Arvore* a){
	if(estaVazia(a))
		return 0;
	else 
		return 1 + numeroNos(a->left) + numeroNos(a->right);
}

Arvore* liberarArvore(Arvore* a){
	if(!estaVazia(a)){
		liberarArvore(a->left);
		liberarArvore(a->right);
		free(a);
	}
	return NULL;
}

int pertenceArvore(Arvore* a, char c){
	if(estaVazia(a))
		return 0;
	else {
		if (c == a->info)
			return 1;
		else {
			return(pertenceArvore(a->left,c)||pertenceArvore(a->right, c));
		}
	}

}