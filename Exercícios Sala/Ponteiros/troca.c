#include <stdio.h>
#include <stdlib.h>

void trocaValor(int *x, int *y){
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

int main(){
	int a, b;
	printf("Digite dois valores inteiros >> ");
	scanf("%d %d", &a, &b);
	trocaValor(&a, &b);
	printf("%d %d\n",a,b);
	return 0;
} 
