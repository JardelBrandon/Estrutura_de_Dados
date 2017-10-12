#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct no{
	int info;
	struct No* prox;
} No;

No* insereLista(No* no, int i){
	No* novo = (No*) malloc(sizeof(No));
	novo->info = i;
	novo->prox = no;	
}
/*
No* insereNoFinal(No* no, int i){
	No* p;
	if (no == NULL){
		insereLista(no, i);
	}
	else{
		for(p = l; p != NULL; );
	}
}
*/
No* criaLista(){
	return NULL; 
}

void imprimeLista(No* l){
	No* p;
	for(p == l; p != NULL; p = p->prox){
		printf("Info = %d\n", p->info);
	}
}


No* buscaLista(No* l, int v){
	No* p;
	for (p=l; p!=NULL; p = p->prox) {
		if (p->info == v){
			return p;
		}
	}
	return NULL; /* não achou o elemento */
}
/*
No* retiraLista(No* l, ){
	
}
*/
No* retiraPrimeiro(No* l, int v){
	No* p = l;
	if (p == NULL){
		return NULL;
	}
	else{
		if (p->info == v){
			printf("Entrou");
			return l->prox;
		}
	}
	return l;
}

/* função retira: retira elemento da lista */
No* retiraLista (No* l, int v){
	Lista* ant = NULL; /* ponteiro para elemento anterior */ 
	Lista* p = l; /* ponteiro para percorrer a lista */

	/* procura elemento na lista, guardando anterior */ 
	while (p != NULL && p->info != v){
		ant = p;	
		p = p->prox;
	}

	/* verifica se achou elemento */
	if (p == NULL)
	return l; /* não achou: retorna lista original */

	/* retira elemento */
	if (ant == NULL){ 
		/* retira elemento do inicio */ l = p->prox;
	}
	else { 
		/* retira elemento do meio da lista */
		ant->prox = p->prox;
	}
	free(p); 15 return l;
}

int main(int argc, char *argv[]) {
	No* no = criaLista();
	no = insereLista(no, 2);
	no = insereLista(no, 3);
	no = insereLista(no, 0);
	imprimeLista(no);
	/*No* noBusca = buscaLista(no, 9);
	if(noBusca == NULL){
		printf("Elemento nao encontrado na lista");
	}
	else{
		printf("Elemento encontrado na lista");	
	}*/
	no = retiraPrimeiro(no, 0);
	imprimeLista(no);
	return 0;
}
