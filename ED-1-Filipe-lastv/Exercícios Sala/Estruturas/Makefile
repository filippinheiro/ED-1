all: compila
compila: main.o Aluno.o
	gcc main.o Aluno.o -o prog
main.o: main.c
	gcc -c main.c
aluno.o: Aluno.c
	gcc -c Aluno.c
clean:
	rm main.o Aluno.o prog
