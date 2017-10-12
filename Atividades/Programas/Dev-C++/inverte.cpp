#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
/*
int doisElevadoAN(int n){
	if (n == 0){
		return 1;
	}
		return 2 * (doisElevadoAN(n - 1));
}
*/
int main(int argc, char** argv) {
	/*
	int x = pot(2,2);
	int y = doisElevadoAN(4);
	printf("%d\n", y);
	*/
	int invertido = inverteValor(12378, 4);
	printf("%d\n", invertido);
	return 0;
}

