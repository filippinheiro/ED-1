all: compila
	 ./prog
compila: main.o lista.o
	gcc main.o lista.o -o prog
main.o: main.c
	gcc -c main.c
ListaVetor.o: lista.c
	gcc -c lista.c
clean:
	rm lista.o main.o
