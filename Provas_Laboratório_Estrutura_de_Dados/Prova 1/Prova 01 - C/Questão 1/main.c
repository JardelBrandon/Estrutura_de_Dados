#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*1) O que são e qual a diferença entre os parâmetros reais e os formais? E a diferença entre passagem por
valor e por referência? Identifique no trecho de código abaixo os parâmetros reais e formais, e as
passagens por valor e por referência. Informe os valores de x e y em (1), (2) e (3).*/

int operacao(int n1, int n2, char op);
void permuta(int *a, int *b);

int main(){
	int x = 10;
	int y = 50;
	permuta(&x, &y);
	printf("%d - %d\n", x, y);
	//(1)
	x = operacao(x, y, '+');
	printf("%d - %d\n", x, y);
	//(2)
	y = operacao(x, y, '+');
	printf("%d - %d\n", x, y);
	//(3)
}

int operacao(int n1, int n2, char op){
	int res = 0;
	switch(op){
		case '+' : res = n1+n2; break;
		case '-' : res = n1-n2; break;
		case '*' : res = n1*n2; break;
		case '/' : res = n1/n2; break;
		case '%' : res = n1%n2;
break;
	} 
return res;
}

void permuta(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
