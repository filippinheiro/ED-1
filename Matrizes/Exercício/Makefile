all: compila
	./prog
compila: main.o matriz.o
	gcc main.o matriz.o -o prog
main.o: main.c
	gcc -c main.c
matriz.o: matriz.c
	gcc -c matriz.c
clean:
	rm main.o matriz.o prog
