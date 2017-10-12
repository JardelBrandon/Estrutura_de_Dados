#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*6) Crie uma uni�o que possua dois campos: idade(int) e CPF(char[12]). Crie uma estrutura chamada
Empregado, com os campos matricula(char[10]), nome(char[50]) e n�mero(a uni�o criada). Se a
matr�cula do usu�rio iniciar com �123�, significa que o campo da uni�o a ser impresso � a idade, caso
contr�rio, ser� impresso o CPF. Fa�a um programa que receba tr�s empregados, de modo que ocorra as
duas possibilidades, tanto matr�culas com in�cio �123�, como com valores diferentes. Se o in�cio da
matr�cula do usu�rio for �123�, dever� ser solicitada idade, sen�o, o CPF. Voc� dever� imprimir todas as
informa��es ao t�rmino do programa corretas.*/

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
		printf("Digite a idade do %d�empregado :\n", (j + 1));
		scanf("%d", &empregado[j].numero.idade);
	}
	else{
		printf("Digite o CPF do %d�empregado :\n", (j + 1));
		scanf("%s", empregado[j].numero.CPF);
	}
}

int main(int argc, char *argv[]) {
	int i, MAX = 3;
	for(i = 0; i < MAX; i++){
		printf("Digite o nome do %d�empregado :\n", (i + 1));
		fflush(stdin);
		gets(empregado[i].nome);
		printf("Digite a matricula do %d�empregado :\n", (i + 1));
		fflush(stdin);
		gets(empregado[i].matricula);
		verificarUniao(empregado[i].matricula, i);
	}
	printf("\t\tEmpregados \t Matriculas \t Idade ou CPF\n");
	for (i = 0; i < MAX; i++){
		if (strncmp(empregado[i].matricula, "123", 3) == 0){
			printf("\t\t\n%d� Empregado : %s \t\t %s \t\t %danos\n", (i + 1), empregado[i].nome, empregado[i].matricula, empregado[i].numero.idade);
		}
		else{
			printf("\t\t\n%d� Empregado : %s \t\t %s \t\t CPF:%s\n", (i + 1), empregado[i].nome, empregado[i].matricula, empregado[i].numero.CPF);
		}
	}
	return 0;
}
