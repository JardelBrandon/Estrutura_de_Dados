#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*2. (70 pontos) – Altere a classe disponível na página (Questao02.c) de acordo com a descrição disponível no corpo de cada método.*/
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
	
	//Teste do método insereLista
	novaLista = insereLista(novaLista, 2);
	novaLista = insereLista(novaLista, 8);
	novaLista = insereLista(novaLista, 6);
	novaLista = insereLista(novaLista, 2);
	imprimirLista(novaLista);

	//Teste do método contPar
	printf("Quantidade de elementos pares na lista: %d\n\n", contPar(novaLista));
	
	//Teste do método recuperaPosicao
	printf("Posicao do elemento buscado na lista: %d\n", recuperaPosicao(novaLista, 2));
	printf("Posicao do elemento buscado na lista: %d\n", recuperaPosicao(novaLista, 8));	
	printf("Posicao do elemento buscado na lista: %d\n", recuperaPosicao(novaLista, 7));
	return 0;
}

