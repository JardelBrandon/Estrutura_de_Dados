#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, 
system("pause") or input loop */

/*3. Crie um método responsável por contar o número de células
de uma lista encadeada.*/

typedef struct no{
	int dado;
	struct no* proximo;
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

int contarElementos(No* l){
	int contador = 0;
	No* p;
	for (p = l; p != NULL; p = p->proximo){
		contador++;
	}
	return contador;
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
	lista = insereNo(lista, 1);
	lista = insereNo(lista, 2);
	lista = insereNo(lista, 3);
	lista = insereNo(lista, 4);
	lista = insereNo(lista, 5);
	lista = insereNo(lista, 6);
	imprimeNo(lista);
	printf("\nQuantidade de celulas da lista: %d", contarElementos(lista));
	return 0;
}
