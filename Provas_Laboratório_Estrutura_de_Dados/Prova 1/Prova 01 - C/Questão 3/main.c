#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*3) Faça uma função em C que receba dois vetores como parâmetros, com tamanho máximo 5, e que
retorne o quantitativo de números iguais entre os dois vetores. Exemplo: A = {1, 2, 3, 4, 5} e B = {1, 4, 5,
8, 10}. A função deverá retornar o valor 3, pois três números são comuns a ambos os vetores.*/

int elementosIguais(int a[], int b[]){
	int i, j, contadorIgualdade;

	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			if (a[i] == b[j]){
				contadorIgualdade += 1;
			}
		}
	}
	return contadorIgualdade;
}

int main(int argc, char *argv[]) {
	int vetorA[] = {1, 2, 3, 4, 5}; 
	int vetorB[] = {1, 4, 5, 8, 10};
	printf("Quantidade de numeros iguais nos vetores : %d", elementosIguais(vetorA, vetorB));
	return 0;
}
