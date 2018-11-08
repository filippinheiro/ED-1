all:main.o
	gcc main.o -o prog; clear; ./prog; make clean --silent
main.o: main.c
	gcc -c main.c

clean:
	rm main.o