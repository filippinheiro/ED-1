#include <stdio.h>

void soma_prod(int a, int b, int *s, int *p){
	*s = a + b;
	*p = a*b;
}

int main(){
	int x, y, soma, prod;
	x = y = soma = prod = 0; 
	printf("Digite dois valores inteiros >> ");
	scanf("\t%d %d", &x, &y);
	soma_prod(x, y, &soma, &prod);
	printf("\t\n%d + %d = %d e %d x %d = %d\n\n", x, y, soma, x, y, prod);
	return 0; 
} 
