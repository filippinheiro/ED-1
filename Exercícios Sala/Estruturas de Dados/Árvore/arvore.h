#ifndef ARVORE_H
#define ARVORE_H

typedef struct arvore {
	char info;
	struct arvore* left;
	struct arvore* right;
}Arvore;

Arvore* criarArvoreVazia();
Arvore* criarArvore(char, Arvore*, Arvore*);
int estaVazia(Arvore*);
int pertenceArvore(Arvore*, char);
void imprimeArvore(Arvore*);
Arvore* liberarArvore(Arvore*);
void imprimeCPilha(Arvore*);
#endif