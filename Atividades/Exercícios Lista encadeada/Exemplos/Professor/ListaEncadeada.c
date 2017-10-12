/*
 ============================================================================
 Name        : ListaEncadeada.c
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

Lista* insereLista (Lista* l, int i){
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l;
	return novo;
}

Lista* insereFimLista (Lista* l, int i){
	Lista* p = l;
	if(p==NULL){
		insereLista(l,i);
	}else{
		Lista* novo = (Lista*) malloc(sizeof(Lista));
		while(p->prox != NULL){
			p = p->prox;
		}
		novo->info = i;
		novo->prox = NULL;
		p->prox = novo;
		return l;
	}
}


void imprimeLista (Lista* l)
{
	Lista* p;
	for (p = l; p != NULL; p = p->prox){
		printf("info = %d\n", p->info);
	}
}

int listaVazia (Lista* l)
{
	return (l == NULL);
}
int main ()
{
	Lista* l; /* declara uma lista não iniciada */
	l = criaLista(); /* inicia lista vazia */
//	l = insereLista(l, 23); /* insere na lista o elemento 23 */
//	l = insereLista(l, 45); /* insere na lista o elemento 45 */
//	l = insereLista(l, 56); /* insere na lista o elemento 56 */
//	l = insereLista(l, 78); /* insere na lista o elemento 78 */
//	imprimeLista(l); /* imprimirá: 78 56 45 23 */
//	l = retiraLista(l, 78);
//	printf("*********\n");
//	imprimeLista(l); /* imprimirá: 56 45 23 */
//	l = retiraLista(l, 45);
//	printf("*********\n");
//	imprimeLista(l); /* imprimirá: 56 23 */
//	printf("*********\n");
//	liberaLista(l);
	l = insereFimLista(l,3);
	l = insereFimLista(l,5);
	imprimeLista(l);
	return 0;
}
