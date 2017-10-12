#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*2) Fa�a uma fun��o recursiva que calcule e retorne o N-�simo termo da sequ�ncia Fibonacci.
 Alguns n�meros desta sequ�ncia s�o: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...*/

int fibonacci (int n){
	if (n == 0){
		return 0;
	}
	else if (n == 1){
		return 1;
	}
	else{
		return fibonacci (n -1) + fibonacci (n - 2);
	}
}

int main(int argc, char *argv[]) {
	int x;
	printf("Digite a posicao que deseja obter seu valor na sequencia Fibonacci :\n");
	scanf("%d", &x);
	printf("O valor da sequencia Fibonacci para a posicao %d eh %d", x, fibonacci (x));
	return 0;
}
