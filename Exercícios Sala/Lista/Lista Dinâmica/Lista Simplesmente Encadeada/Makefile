all: compila
	 ./prog
compila: main.o ListaDinamica.o
	gcc main.o ListaDinamica.o -o prog
main.o: main.c
	gcc -c main.c
ListaVetor.o: ListaDinamica.c
	gcc -c ListaDinamica.c
clean:
	rm ListaDinamica.o main.o
