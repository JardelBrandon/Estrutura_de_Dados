#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*6) Crie uma união que possua dois campos: idade(int) e CPF(char[12]). Crie uma estrutura chamada
Empregado, com os campos matricula(char[10]), nome(char[50]) e número(a união criada). Se a
matrícula do usuário iniciar com “123”, significa que o campo da união a ser impresso é a idade, caso
contrário, será impresso o CPF. Faça um programa que receba três empregados, de modo que ocorra as
duas possibilidades, tanto matrículas com início “123”, como com valores diferentes. Se o início da
matrícula do usuário for “123”, deverá ser solicitada idade, senão, o CPF. Você deverá imprimir todas as
informações ao término do programa corretas.*/

union tipo{
	int idade;
	char CPF[12];
};	

struct Empregado{
	char matricula[10];
	char nome[50];
	union tipo numero;
}empregado[2];

void verificarUniao(char key[], int j){
	if (strncmp(key, "123", 3) == 0){
		int x;
		printf("Digite a idade do %dºempregado :\n", (j + 1));
		scanf("%d", &empregado[j].numero.idade);
	}
	else{
		printf("Digite o CPF do %dºempregado :\n", (j + 1));
		scanf("%s", empregado[j].numero.CPF);
	}
}

int main(int argc, char *argv[]) {
	int i, MAX = 3;
	for(i = 0; i < MAX; i++){
		printf("Digite o nome do %dºempregado :\n", (i + 1));
		fflush(stdin);
		gets(empregado[i].nome);
		printf("Digite a matricula do %dºempregado :\n", (i + 1));
		fflush(stdin);
		gets(empregado[i].matricula);
		verificarUniao(empregado[i].matricula, i);
	}
	printf("\t\tEmpregados \t Matriculas \t Idade ou CPF\n");
	for (i = 0; i < MAX; i++){
		if (strncmp(empregado[i].matricula, "123", 3) == 0){
			printf("\t\t\n%dº Empregado : %s \t\t %s \t\t %danos\n", (i + 1), empregado[i].nome, empregado[i].matricula, empregado[i].numero.idade);
		}
		else{
			printf("\t\t\n%dº Empregado : %s \t\t %s \t\t CPF:%s\n", (i + 1), empregado[i].nome, empregado[i].matricula, empregado[i].numero.CPF);
		}
	}
	return 0;
}
