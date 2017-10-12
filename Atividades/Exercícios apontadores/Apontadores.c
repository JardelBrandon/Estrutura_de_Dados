#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
? Escreva um programa em linguagem C que solicita ao
usuário a quantidade de alunos de uma turma e aloca
um vetor de notas (números reais). Depois de ler as
notas, imprime a média aritmética, a maior e a menor
nota.
? Obs1: não deve ocorrer desperdício de memória; e após
ser utilizada a memória deve ser devolvida.
? Obs2: usar apenas as variáveis a seguir:
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
		printf("Digite a nota do %dº aluno: ", i+1);
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

