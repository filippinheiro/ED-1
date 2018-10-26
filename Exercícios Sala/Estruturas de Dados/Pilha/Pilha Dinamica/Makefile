all:compila
	clear; ./prog; make clean -s
compila: main.o pilha.o
	gcc main.o pilha.o -o prog
main.o: main.c
	gcc -c main.c
pilha.o: pilha.c
	gcc -c pilha.c

make clean: 
	rm main.o pilha.o