#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
6) Fa�a uma fun��o recursiva que receba um n�mero inteiro positivo N e imprima todos
os n�meros naturais de 0 at� N em ordem decrescente.
*/

int imprimirCrescente(int numero){
	if (numero < 0){
		return 0;
	}
	else{
		printf("%d - ", numero);
	    imprimirCrescente(numero - 1);
		
	}
}

int main(int argc, char *argv[]) {
	imprimirCrescente(5);
	return 0;
}
