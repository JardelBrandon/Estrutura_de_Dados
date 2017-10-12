#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void quadradoPerfeito(int valor){
	float raiz, verificar;
	raiz = sqrt(valor);
	raiz = floor(raiz); //Raiz arredondada para o numero abaixo
	verificar = (raiz * raiz);
	if (verificar == valor){
		printf("O valor informado possui quadrado perfeito!");
	}
	else{
		printf("O valor informado nao possui quadrado perfeito!");
	}
}

int main(int argc, char *argv[]) {
	int x;
	printf("Digite o valor para verificar se possui o quadrado perfeito :\n");
	scanf("%d", &x);
	quadradoPerfeito(x);
	return 0;
}
