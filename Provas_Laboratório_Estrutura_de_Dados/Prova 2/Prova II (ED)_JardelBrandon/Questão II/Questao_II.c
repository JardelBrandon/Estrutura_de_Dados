#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*2) Faça um programa que receba do usuário quatro números em um vetor de inteiros. Você deverá
criar dois vetores, dinamicamente, com tamanho dois: o primeiro vetor receberá os dois primeiros
elementos; e o segundo vetor os dois últimos elementos. Após isso, você deverá ordenar o vetor resultante
(o vetor que possui quatro elementos). (3,0 pontos)*/

int main(int argc, char *argv[]) {
	int tamanho_vetor = 4, i;
	int vetor[tamanho_vetor];
	int* ponteiro_vetorA; 
	int* ponteiro_vetorB;
	ponteiro_vetorA = (int*) malloc(2* sizeof(int));
	ponteiro_vetorB = (int*) malloc(2* sizeof(int));
	
	for (i = 0; i < tamanho_vetor; i++){
		printf("Digite o %dº elemento do vetor: ", i + 1);
		fflush(stdin);
		scanf("%d", &vetor[i]);
	}
	ponteiro_vetorA[0] = vetor[0];
	ponteiro_vetorA[1] = vetor[1];	
	ponteiro_vetorB[0] = vetor[2];
	ponteiro_vetorB[1] = vetor[3];	
	
	for (i = 0; i < tamanho_vetor; i++){
		printf("%dº Elemento do vetor: %d\n", i, vetor[i]);
	}
	free(ponteiro_vetorA);
	free(ponteiro_vetorB);
	return 0;
}
