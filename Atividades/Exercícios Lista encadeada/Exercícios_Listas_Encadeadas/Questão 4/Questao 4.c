#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, 
system("pause") or input loop */

/*4. Crie um método responsável por inserir o elemento
desejado em determinada posição na lista.
Ex.: A lista possui os elementos [2,7,1], 
ao executar o método inserePosicao (no, 4, 1) 
a lista deverá ficar assim: [2,4,7,1]*/

typedef struct No{
	int dado;
	struct No* proximo;
}No;

No* criarNo(){
	return NULL;
}

No* insereNo(No* l, int i){
	No* novo = (No*) malloc(sizeof(No));
	novo->dado = i;
	novo->proximo = l;
	return novo;
}

No* insereFimLista (No* l, int i){
	No* p = l;
	if(p==NULL){
		insereNo(l,i);
	}else{
		No* novo = (No*) malloc(sizeof(No));
		while(p->proximo != NULL){
			p = p->proximo;
		}
		novo->dado = i;
		novo->proximo = NULL;
		p->proximo = novo;
		return l;
	}
}


No* inserePosicao(No* l, int elemento, int posicao){
	No* p = l;
	if(posicao==0)
		l=insereNo(l, elemento);
	else{
		int i;
		for (i = 0; i < (posicao - 1); i++){
			p = p->proximo;
			if (p->proximo == NULL){
				break;
			}
		}
		No* novo = (No*) malloc(sizeof(No));
		novo->dado = elemento;
		novo->proximo = p->proximo;
		p->proximo = novo;
	}
	return l;
}


void imprimeNo(No*l){
	No* p;
	int i = 0;
	for (p = l; p != NULL; p = p->proximo){
		printf("Lista[%d].dado: %d\n", i++, p->dado);
	}
}

int main(int argc, char *argv[]) {
	No* lista;
	lista = criarNo();
	lista = insereFimLista(lista, 2);
	lista = insereFimLista(lista, 7);
	lista = insereFimLista(lista, 1);
	lista = inserePosicao(lista, 4, 1);
	//lista = inserePosicao(lista, 32, 0);
	//lista = inserePosicao(lista, 50, 8);
	imprimeNo(lista);	
	return 0;
}
