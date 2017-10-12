#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
? Escreva um programa em linguagem C que solicita ao
usu�rio a quantidade de alunos de uma turma e aloca
um vetor de notas (n�meros reais). Depois de ler as
notas, imprime a m�dia aritm�tica, a maior e a menor
nota.
? Obs1: n�o deve ocorrer desperd�cio de mem�ria; e ap�s
ser utilizada a mem�ria deve ser devolvida.
? Obs2: usar apenas as vari�veis a seguir:
? Int qtdAlunos, i;
? float *notas, *maior, *menor, *media;
*/

int main(int argc, char *argv[]) {
	int qtdAlunos, i;
	float *notas, *maior, *menor, *media;
	
	printf("Digite a quantidade de alunos da turma: ");
	scanf("%d", &qtdAlunos);
	notas = (float*) calloc(qtdAlunos,sizeof(float));
	maior = (float*) malloc(sizeof(float));
	menor = (float*) malloc(sizeof(float));
	media = (float*) malloc(sizeof(float));
	for(i = 0; i < qtdAlunos; i++){
		printf("Digite a nota do %d� aluno: ", i+1);
		scanf("%f", &notas[i]);
		*media += notas[i];
		if (i == 0){
			*maior = notas[i];
			*menor = notas[i];
		}
		else{
			if (notas[i] > *maior){
				*maior = notas[i];
			}
			else if(notas[i] < *menor){
				*menor = notas[i];
			}
		}
	}
	*media /= qtdAlunos;
	printf("Media das notas : %f\n Maior nota : %f\n Menor nota : %f", *media, *maior, *menor);
	free(notas);
	free(maior);
	free(menor);
	free(media);
	return 0;
}

