all: compila
	clear; ./prog; make clean --silent
compila: main.o fila.o
	gcc main.o fila.o -o prog
main.o: main.c
	gcc -c main.c
fila.o: fila.c
	gcc -c fila.c

clean:
	rm main.o fila.o