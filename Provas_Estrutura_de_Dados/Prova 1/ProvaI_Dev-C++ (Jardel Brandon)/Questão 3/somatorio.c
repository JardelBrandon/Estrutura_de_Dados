#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int verificaPar(int n){
	int resto = n % 2;
	if (resto == 0){
		return n;
	}
	else{
		return n -= 1;
	}
}

int somatorio(int valor){
	if (valor == 2){
		return 2;
	}
	else if (valor < 2 && valor >= 0){
		return 0;
	}
	else{
		return (valor + somatorio(valor - 2));
	}
}

int main(int argc, char *argv[]) {
	int x, y;
	printf("Digite um valor para obter o somatorio dos numeros pares menores ou igual a ele :\n");
	scanf("%d", &x);
	if (x < 0){
		printf("Erro, Digite um valor inteiro maior ou igual a zero!");
		return 0;
	}
	else{
		y = verificaPar(x);
		printf("Resultado do somatorio obtido : %d", somatorio(y));
		return 0;
	}
}
