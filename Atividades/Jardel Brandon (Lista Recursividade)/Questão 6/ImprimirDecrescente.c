#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*6) Fa�a uma fun��o recursiva que receba um n�mero inteiro positivo N e imprima todos
os n�meros naturais de 0 at� N em ordem decrescente.*/

void imprimirDecrescente(int numero){
	if (numero < 0){
		return 0;
	}
	else{
		printf("%d - ", numero);
	    imprimirDecrescente(numero - 1);
		
	}
}


int main(int argc, char *argv[]) {
	int x;
	printf("Digite um valor inteiro positivo :\n");
	scanf("%d", &x);
	printf("Imprimindo do valor digitado %d ate o 0:\n", x);
	imprimirDecrescente(x);
	return 0;
}
