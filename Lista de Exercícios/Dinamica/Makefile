##hbhbhbhbhbhbhb

all: compila
	clear; ./prog; make clean --silent

compila: fila.o pilha.o Lista_3.o
	gcc fila.o pilha.o Lista_3.o -o prog

fila.o: fila.c
	gcc -c fila.c

pilha.o: pilha.c
	gcc -c pilha.c 

Lista_3.o: Lista_3.c 
	gcc -c Lista_3.c

clean: fila.o pilha.o Lista_3.o prog 
	rm fila.o pilha.o Lista_3.o prog 