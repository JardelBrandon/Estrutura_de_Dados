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
	//m�todo respons�vel por fazer a inser��o no in�cio da lista
	//Ex.: insereLista(l, 4) --> Lista [4]
	//Ex.: insereLista(l, 8) --> Lista [8, 4]
}

int contPar(Lista* l)
{
	//peso 20
	//m�todo repons�vel por contar quantos elementos pares existem na lista
	//Ex.: Lista [2, 6, 8, 2] --> Sa�da 4
}

int recuperaPosicao(Lista* l, int elemento)
{
	//Peso 30
	//m�todo respons�vel por retornar a posi��o da ocorr�ncia do primeiro elemento na lista encadeada
	//Ex.: Lista [2, 6, 8, 2] --> recuperaPosicao(l, 2) --> Sa�da 0
	//Ex.: Lista [2, 6, 8, 2] --> recuperaPosicao(l, 8) --> Sa�da 2
}

int main ()
{
	//Peso 10
	//Crie um main para testar seus m�todos, ao menos um teste para cada m�todo
}
