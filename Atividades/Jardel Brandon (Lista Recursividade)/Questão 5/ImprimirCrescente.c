#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*5) Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente.*/

void imprimirCrescente(int n){
	if (n != 0){
		imprimirCrescente(n - 1);
	}
		printf("%d - ", n);
}

int main(int argc, char *argv[]) {
	int x;
	printf("Digite um valor inteiro positivo :\n");
	scanf("%d", &x);
	printf("Imprimindo de 0 ate o valor digitado %d:\n", x);
	imprimirCrescente(x);
	return 0;
}

/* OU 
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
*/
