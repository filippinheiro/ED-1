all: compila
compila: listaHT.o main.o
	gcc listaHT.o main.o -o prog
listaHT.o: listaHT.c
	gcc -c listaHT.c
main.o: main.c
	gcc -c main.c
clean: listaHT.o main.o prog
	rm listaHT.o main.o prog