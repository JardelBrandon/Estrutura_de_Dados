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

Lista* insereListaFim (Lista* l, int i)
{
	//peso 10
	//m�todo respons�vel por fazer a inser��o no fim da lista
	//Ex.: insereLista(l, 4) --> Lista [4]
	//Ex.: insereLista(l, 8) --> Lista [4, 8]
}

int contPrimo(Lista* l)
{
	//peso 20
	//m�todo repons�vel por contar quantos n�meros primos existem na lista
	//Ex.: Lista [2, 6, 8, 2, 7] --> Sa�da 3
}

int contaOcorrencias(Lista* l, int elemento)
{
	//Peso 30
	//m�todo respons�vel por contar quantas vezes o elemento existe na lista
	//Ex.: Lista [2, 6, 8, 2] --> contaOcorrencias(l, 2) --> Sa�da 2
	//Ex.: Lista [2, 6, 8, 2] --> contaOcorrencias(l, 8) --> Sa�da 1
	//Ex.: Lista [2, 6, 8, 2] --> contaOcorrencias(l, 7) --> Sa�da 0
}

int main ()
{
	//Peso 10
	//Crie um main para testar seus m�todos, ao menos um teste para cada m�todo
}
