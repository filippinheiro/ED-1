#include <stdio.h>



int main(){
	FILE* file = fopen("entrada.txt", "r");
	if(file!=NULL){
		/*
		char c;
		while(fscanf(file, "%c", &c) == 1) {
			if(c == '\n')
				n++;
		}
		*/
		int n =0;
		while(feof(file)==0) {
			if(fgetc(file) == '\n')
				n++;
		}
		printf("Numero de linhas igual a %d\n", n);
		fclose(file);
	}
	return 0;
}