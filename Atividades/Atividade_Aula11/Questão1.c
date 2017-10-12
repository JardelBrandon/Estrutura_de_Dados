#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*1. Escrever um programa que cadastre o nome, a
matrícula e duas notas de vários alunos. Em seguida
imprima a matrícula, o nome e a média de cada um
deles.*/
struct pessoa{
	char[20] nome;
	char[40] matricula;
	float[2] notas;
};

int main(int argc, char *argv[]) {
	int qtdAlunos, i, j;
	int  qtdNotas = 2;
	printf("Digite a quantidade de alunos que deseja cadastrar:");
	struct pessoa alunos[qtdAlunos];
	
	for (i = 0; i < qtdAlunos; i++){
		printf("Digite o nome do %d aluno"; i + 1)
		strcpy(alunos[i].nome, gets(nome));
		printf("Digite a matricula do %d aluno"; i + 1)
		strcpy(alunos[i].nome, gets(matricula));
		for (j = 0; j < qtdNotas; i++){
			printf("Digite a %d nota do %d aluno", j + 1, i + 1);
			scanf("%f", alunos[i].notas[j]);
		}
	}
	
	return 0;
}
