#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*2. (70 pontos) � Altere a classe dispon�vel na p�gina (Questao02.c) de acordo com a descri��o dispon�vel no corpo de cada m�todo.*/
/*
 ============================================================================
 Name        : Questao02.c
 Author      : PDT
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 

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
*/

struct lista {
	int info;
	struct lista* prox;
};

typedef struct lista Lista;

Lista* criaLista (){
	return NULL;
}

Lista* insereLista (Lista* l, int i){
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l;
	return novo;
}

int contPar(Lista* l){
	Lista* p;
	int contador = 0;
	for (p = l; p != NULL; p = p->prox){
		if ((p->info % 2) == 0){
			contador++;
		}
	}
	return contador;
}

int recuperaPosicao(Lista* l, int elemento){
	Lista* p = l;
	int posicao = 0;
	while (p->info != elemento){
		p = p->prox;
		posicao++;
		if (p->prox == NULL){
			if (p->info != elemento){
				return -1;
			}
			else{
				break;
			}
		}
	}
	return posicao;
}

void imprimirLista(Lista* l){
	Lista* p;
	int posicao;
	for (p = l, posicao = 0; p!= NULL; p = p->prox, posicao++){
		printf("Lista[%d].Dado: %d\n", posicao, p->info);
	}
	printf("\n");
}

int main (){
	Lista* novaLista;
	novaLista = criaLista();
	
	//Teste do m�todo insereLista
	novaLista = insereLista(novaLista, 2);
	novaLista = insereLista(novaLista, 8);
	novaLista = insereLista(novaLista, 6);
	novaLista = insereLista(novaLista, 2);
	imprimirLista(novaLista);

	//Teste do m�todo contPar
	printf("Quantidade de elementos pares na lista: %d\n\n", contPar(novaLista));
	
	//Teste do m�todo recuperaPosicao
	printf("Posicao do elemento buscado na lista: %d\n", recuperaPosicao(novaLista, 2));
	printf("Posicao do elemento buscado na lista: %d\n", recuperaPosicao(novaLista, 8));	
	printf("Posicao do elemento buscado na lista: %d\n", recuperaPosicao(novaLista, 7));
	return 0;
}

