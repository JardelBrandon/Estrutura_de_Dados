#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
1. Escrever um programa que cadastre o nome, a
matr�cula e duas notas de v�rios alunos. Em seguida
imprima a matr�cula, o nome e a m�dia de cada um
deles.
*/

struct Aluno{
	char nome[40];
	char matricula[20];
	float notas[2];
	float media;
};
	

int main(int argc, char *argv[]) {
	int qtdAlunos, i, j;
	int qtdNotas = 2;
	char nome[40], matricula[20];
	printf("Digite a quantidade de alunos: ");
	scanf("%d", &qtdAlunos);
	struct Aluno listaAlunos[qtdAlunos];
	for (i = 0; i < qtdAlunos; i++){
		printf("Digite o nome do %d� aluno: ", i + 1);
		fflush(stdin);
		gets(listaAlunos[i].nome);
		//strcpy(listaAlunos[i].nome, nome);
		printf("Digite a matricula do %d� aluno: ", i + 1);
		gets(listaAlunos[i].matricula);
		//strcpy(listaAlunos[i].matricula, matricula);	
	
	for (j = 0; j < qtdNotas; j++){
		printf("Digite a %d� nota do %d� aluno: ", j + 1, i + 1);
		scanf("%f", &listaAlunos[i].notas[j]);
		listaAlunos[i].media += listaAlunos[i].notas[j]; 
	}
	listaAlunos[i].media /= qtdNotas;		
	}
	for (i = 0; i < qtdAlunos; i++){
		printf("Imprimindo informacoes cadastradas: \nNome do %d� aluno: %s\nMatricula do %d� aluno: %s\nMedia do %d� aluno: %f\n\n",
		 i+1, listaAlunos[i].nome, i+1, listaAlunos[i].matricula, i+1, listaAlunos[i].media);
	}
	return 0;
}
