#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*1. (20 pontos) � Para que seja poss�vel armazenar os dados de um funcion�rio de uma loja de carros, 
torna-se necess�ria a cria��o de duas estruturas, uma respons�vel por armazenar os dados do cliente
(nome, idade, cpf) e carro que o cliente comprou (marca, modelo e ano). 
Crie estruturas para que este problema seja solucionado de tal forma que consigamos associar o cliente ao carro que ele comprou. 
Para testar, crie um main e teste a inser��o de 3 clientes que compraram 3 carros (a sua escolha) e imprima a sa�da ao final da execu��o.*/

typedef struct dadosClientes{
	char nome[50];
	char idade[20];
	char cpf[20];
	struct Carro{
		char marca[50];
		char modelo[50];
		char ano[20];
	}carro;
} DadosClientes;

int main(int argc, char *argv[]) {
	int quantidadeClientes = 3;
	int i;
	DadosClientes informacoesCliente[quantidadeClientes];
	for (i = 0; i < quantidadeClientes; i++){
		printf("Digite o nome do %d� cliente: ", i + 1);
		fflush(stdin);
		gets(informacoesCliente[i].nome);
		//scanf("%s", &informacoesCliente[i].nome);
		
		printf("Digite a idade do %d� cliente: ", i + 1);
		fflush(stdin);
		gets(informacoesCliente[i].idade);
		//scanf("%s", &informacoesCliente[i].idade);	
			
		printf("Digite o CPF do %d� cliente: ", i + 1);
		fflush(stdin);
		gets(informacoesCliente[i].cpf);
		//scanf("%s", &informacoesCliente[i].cpf);		
		
		printf("Digite a marca do carro que o %d� cliente adquiriu: ", i + 1);
		fflush(stdin);
		gets(informacoesCliente[i].carro.marca);
		//scanf("%s", &informacoesCliente[i].carro.marca);
		
		printf("Digite o modelo do carro que o %d� cliente adquiriu: ", i + 1);
		fflush(stdin);
		gets(informacoesCliente[i].carro.modelo);
		//scanf("%s", &informacoesCliente[i].carro.modelo);				
			
		printf("Digite o ano do carro que o %d� cliente adquiriu: ", i + 1);
		fflush(stdin);
		gets(informacoesCliente[i].carro.ano);
		//scanf("%s", &informacoesCliente[i].carro.ano);	
		printf("\n\n");	
	}
	printf("***********************************************************************\nImprimindo informacoes dos clientes:\n\n");
	for (i = 0; i < quantidadeClientes; i++){
		printf("Nome do %d� cliente: %s\n", i + 1, informacoesCliente[i].nome);
		printf("Idade do %d� Cliente: %s\n", i + 1, informacoesCliente[i].idade);
		printf("CPF do %d� Cliente: %s\n", i + 1, informacoesCliente[i].cpf);
		printf("Marca do carro adquirido pelo %d� Cliente: %s\n", i + 1, informacoesCliente[i].carro.marca);	
		printf("Modelo do carro adquirido pelo %d� Cliente: %s\n", i + 1, informacoesCliente[i].carro.modelo);
		printf("Ano do carro adquirido pelo %d� Cliente: %s\n\n", i + 1, informacoesCliente[i].carro.ano);	
	}
	printf("***********************************************************************");
	return 0;
}
