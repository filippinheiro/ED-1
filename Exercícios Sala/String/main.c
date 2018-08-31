#include <stdio.h>

int comprimento(char* s){
	if(s[0] == '\0')
		return 0;
	else 
		return 1 + comprimento(&s[1]);
}

int main(){
	printf("%d\n", comprimento("Filipe Pinheiro"));
} 
