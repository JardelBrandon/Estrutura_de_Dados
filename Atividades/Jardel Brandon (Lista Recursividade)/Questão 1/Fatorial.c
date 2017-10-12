#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*1) Faça uma função recursiva que calcule e retorne o fatorial de um número inteiro N.*/

int fatorial (int n){
	if ((n == 0) || (n == 1)){
		return 1;
		}
	else{
		return fatorial (n -1)*n;
	}
}

int main(int argc, char *argv[]) {
	int x;                        
	printf("Digite o valor que deseja obter o fatorial:\n");
	scanf("%d",&x);
	printf("O fatorial de %d eh %d! \n",x,fatorial (x));	
	return 0;
}
