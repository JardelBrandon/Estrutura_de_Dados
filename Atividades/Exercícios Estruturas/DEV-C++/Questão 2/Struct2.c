#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*2. Escrever um programa que cadastre o nome, a altura, o
peso, o cpf e sexo de algumas pessoas. Com os dados
cadastrados, em seguida localizar uma pessoas através
do seu CPF e imprimir o seu IMC (peso (quilos) ÷ altura2
(metros)).
*/

struct Pessoa{
	char nome[40];
	float altura;
	float peso;
	char cpf[20];
	char sexo[20];
};

int main(int argc, char *argv[]) {
	int qtdPessoas, i, j;
	float imc;
	char localizarCpf[20];
	printf("Digite a quantidade de pessoas que deseja cadastrar: ");
	scanf("%d", &qtdPessoas);
	struct Pessoa pessoas[qtdPessoas];
 
	for (i = 0; i < qtdPessoas; i++){
		printf("Digite o nome da %dº pessoa: ", i + 1);
		fflush(stdin);
		gets(pessoas[i].nome);
		//strcpy(pessoas[i].nome, gets());
		printf("Digite a altura da %dº pessoa: ", i + 1);
		scanf("%f", &pessoas[i].altura);
		printf("Digite o peso da %dº pessoa: ", i + 1);
		scanf("%f", &pessoas[i].peso);
		printf("Digite o CPF da %dº pessoa: ", i + 1);
		scanf(" %s", &pessoas[i].cpf);
		//strcpy(pessoas[i].cpf, gets());		
		printf("Digite o sexo da %dº pessoa: ", i + 1);
		scanf(" %s", &pessoas[i].sexo);
		//strcpy(pessoas[i].sexo, gets());		
	}
	printf("Digite o cpf da pessoa que deseja obter o IMC: ");
	scanf(" %s", &localizarCpf);
	printf("%s\n", localizarCpf);
	for (i = 0; i < qtdPessoas; i++){
		printf("%s\n", pessoas[i].cpf);
		if (strcmp(localizarCpf,pessoas[i].cpf)==0){
		
			imc = (pessoas[i].peso / (pessoas[i].altura * pessoas[i].altura));
			printf("IMC de %s: %f", pessoas[i].nome, imc);
		}
		//printf("%s", pessoas[i].cpf);
	}
	
	return 1;
}
