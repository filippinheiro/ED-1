all: compila
	clear; ./prog; make clean --silent
	
compila: main.o arvore.o
	gcc main.o arvore.o -o prog

main.o: main.c
	gcc -c main.c

arvore.o: arvore.c
	gcc -c arvore.c
	

clean: main.o arvore.o
	rm main.o arvore.o 
