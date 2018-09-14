#include "Aluno.h"
int main(){
	Aluno* tab[MAX];
	inicializa(MAX, tab);	
	int i;
	for(i=0; i<MAX; i++)
		leAluno(MAX, tab, i);
	imprimeTudo(MAX, tab);
	retiraAluno(MAX, tab, 2);
	imprimeTudo(MAX, tab);
	return 0;
} 
