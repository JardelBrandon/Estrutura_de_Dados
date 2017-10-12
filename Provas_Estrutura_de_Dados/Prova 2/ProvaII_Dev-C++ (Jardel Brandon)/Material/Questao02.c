/*
 ============================================================================
 Name        : Questao02.c
 Author      : PDT
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct lista {
	int info;
	struct lista* prox;
};

typedef struct lista Lista;

Lista* criaLista (){
	return NULL;
}

Lista* insereLista (Lista* l, int i)
{
	//peso 10
	//método responsável por fazer a inserção no início da lista
	//Ex.: insereLista(l, 4) --> Lista [4]
	//Ex.: insereLista(l, 8) --> Lista [8, 4]
}

int contPar(Lista* l)
{
	//peso 20
	//método reponsável por contar quantos elementos pares existem na lista
	//Ex.: Lista [2, 6, 8, 2] --> Saída 4
}

int recuperaPosicao(Lista* l, int elemento)
{
	//Peso 30
	//método responsável por retornar a posição da ocorrência do primeiro elemento na lista encadeada
	//Ex.: Lista [2, 6, 8, 2] --> recuperaPosicao(l, 2) --> Saída 0
	//Ex.: Lista [2, 6, 8, 2] --> recuperaPosicao(l, 8) --> Saída 2
}

int main ()
{
	//Peso 10
	//Crie um main para testar seus métodos, ao menos um teste para cada método
}
