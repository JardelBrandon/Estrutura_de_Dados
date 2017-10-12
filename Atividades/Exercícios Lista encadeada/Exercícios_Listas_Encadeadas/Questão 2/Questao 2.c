#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch,
 system("pause") or input loop */

/*2. Crie o método inserePar, que insere o elemento na lista caso ele seja par,
caso contrário insere o próximo. 
Ex.: caso o usuário execute a inserePar(no, 2)
 o elemento 2 será inserido, caso execute inserePar(no, 7) 
 o valor inserido deverá ser o 8.*/
 
typedef struct no{
	int dado;
	struct no* proximo;
}No;

No* criarNo(){
	return NULL;
}

No* inserePar(No* l, int i){
	if ((i % 2) != 0){
		i++;
	}
	No* p = l;
	if (p == NULL){
		No* novo = (No*) malloc(sizeof(No));
		novo->dado = i;
		novo->proximo = l;
		return novo;	
	}
	else{
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

void imprimeNo(No* l){
	No* p;
	int i = 0;
	for (p = l; p != NULL; p = p->proximo){
		printf("Lista[%d].Dado : %d\n", i++, p->dado);
	}
}

int main(int argc, char *argv[]) {
	No* lista;
	lista = criarNo();
	lista = inserePar(lista, 2);
	lista =inserePar(lista, 7);
	lista = inserePar(lista, 4);
	lista =inserePar(lista, 9);
	imprimeNo(lista);
	return 0;
}
