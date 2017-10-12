#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, 
system("pause") or input loop */

/*1. Crie duas estruturas, uma estrutura responsável por armazenar 
o nome do funcionário, o cargo na empresa, data de nascimento e 
data de admissão e outra responsável por armazenar as informações 
da data (dia, mês e ano). Em seguida, crie um programa responsável
por armazenar as informações de 3 funcionários e imprimir na tela.*/

typedef struct empregado{
	char nome[50];
	char cargo[50];
	struct Data{
		struct Nascimento{
			char dia[10];
			char mes[10];
			char ano[10];			
		}nascimento;
		struct Admitido{
			char dia[10];
			char mes[10];
			char ano[10];
		}admitido;
	} data;
} Empregado;


int main(int argc, char *argv[]) {
	int i;
	int qtdEmpregados = 3;
	Empregado funcionarios[qtdEmpregados];
	
	for(i = 0; i < qtdEmpregados; i++){
		printf("Digite o nome do %d funcionario: ", i + 1);
		fflush(stdin);
		gets(funcionarios[i].nome);

		printf("Digite o cargo do %d funcionario: ", i + 1);
		fflush(stdin);
		gets(funcionarios[i].cargo);

		printf("Digite o dia de nascimento do %d funcionario: ", i + 1);
		fflush(stdin);
		gets(funcionarios[i].data.nascimento.dia);

		printf("Digite o mes de nascimento do %d funcionario: ", i + 1);
		fflush(stdin);
		gets(funcionarios[i].data.nascimento.mes);

		printf("Digite o ano de nascimento do %d funcionario: ", i + 1);
		fflush(stdin);
		gets(funcionarios[i].data.nascimento.ano);

		printf("Digite o dia de admissao do %d funcionario: ", i + 1);
		fflush(stdin);
		gets(funcionarios[i].data.admitido.dia);

		printf("Digite o mes de admissao do %d funcionario: ", i + 1);
		fflush(stdin);
		gets(funcionarios[i].data.admitido.mes);

		printf("Digite o ano de admissao do %d funcionario: ", i + 1);
		fflush(stdin);
		gets(funcionarios[i].data.admitido.ano);	
		printf("\n\n");						
	}
	
	printf("**********************************************************\nImprimindo informacoes dos funcionarios:\n\n\n");
	for (i = 0; i < qtdEmpregados; i++){
		printf("Nome do %d empregado: %s\n", i + 1, funcionarios[i].nome);
		printf("Cargo do %d empregado: %s\n", i + 1, funcionarios[i].cargo);
		printf("Data de nascimnto do %d empregado: %s/%s/%s\n", i + 1, 
		funcionarios[i].data.nascimento.dia, funcionarios[i].data.nascimento.mes, funcionarios[i].data.nascimento.ano);		
		printf("Data de admissao do %d empregado: %s/%s/%s\n\n\n", i + 1, 
		funcionarios[i].data.admitido.dia, funcionarios[i].data.admitido.mes, funcionarios[i].data.admitido.ano);				
	}
	printf("**********************************************************\n");
	return 0;
}
