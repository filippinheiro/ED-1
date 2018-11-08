#ifndef ALUNO_H

#define ALUNO_H

#define MAX 3

typedef struct aluno Aluno;


void inicializa(int, Aluno**);

void leAluno(int, Aluno**, int);

void imprimeAluno(int, Aluno**, int);

void retiraAluno(int, Aluno**, int);

void imprimeTudo(int, Aluno**);

//int opc();

//void menu(int, Aluno**, int);

#endif
