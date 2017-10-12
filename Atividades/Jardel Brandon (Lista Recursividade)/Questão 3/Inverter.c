#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*3) Faça uma função recursiva que permita inverter um número inteiro N. Ex: 123 – 321*/

int pot(int base, int expoente ){
	if (expoente == 0){
		return 1;
	}
	return (base*pot(base, expoente - 1));
	
}

int inverteValor(int numero, int posicao){
	if (numero == 0){
		return 0;
	}
	else{
		int div = numero / 10;
		int resto = (numero % 10);
		return resto * pot(10, posicao) + inverteValor(div, posicao - 1);
	}
}

int main(int argc, char** argv) {
	int invertido = inverteValor(1237, 3);
	printf("%d\n", invertido);
	return 0;
}

