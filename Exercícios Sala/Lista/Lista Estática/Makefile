all: compila
	 ./prog
compila: main.o ListaVetor.o
	gcc main.o ListaVetor.o -o prog
main.o: main.c
	gcc -c main.c
ListaVetor.o: ListaVetor.c
	gcc -c ListaVetor.c
clean:
	rm ListaVetor.o main.o
