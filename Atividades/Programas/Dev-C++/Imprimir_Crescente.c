#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
5) Fa�a uma fun��o recursiva que receba um n�mero inteiro positivo N e imprima todos
os n�meros naturais de 0 at� N em ordem crescente.
*/

int imprimirCrescente(int numero, int crescente){
	if (numero < crescente){
		return numero;
	}
	else{
		printf("%d - ", crescente);
	    imprimirCrescente(numero, crescente + 1);
		
	}
}

int main(int argc, char *argv[]) {
	imprimirCrescente(10, 0);
	return 0;
}
