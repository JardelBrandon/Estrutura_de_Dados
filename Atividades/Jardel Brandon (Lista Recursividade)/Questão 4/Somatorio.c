#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*4) Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório dos números de 1 a N.*/

int soma (int n){
	if (n == 1){
		return 1;
	}
	else{
		return (n + soma (n - 1));
	}
}

int main(int argc, char *argv[]) {
	int x;
	printf("Digite um valor inteiro positivo :\n"); 
	scanf("%d", &x);
	printf("O somatorio de 1 ate o valor digitado %d eh %d :", x, soma (x));
	return 0;
}
