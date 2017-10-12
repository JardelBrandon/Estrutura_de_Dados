	#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input looperacao */
/* Funções de inserção e remoção para implementação de um algoritmo para o modelo de árvores Vermelha e Preta.
Densenvolvido pelos aluno: Jardel Brandon, João Santos, Erick Guimarães*/

typedef enum Cor {Preto, Vermelho} CorFolha;

typedef struct No *Apontador;
typedef struct No{
    int chave;
    CorFolha cor;
    Apontador pai;
    Apontador filhoEsquerda, filhoDireita;
}Folha;

Apontador raizArvore, folhaVazia;

//Cria nova folha da arvore
Apontador arvoreRN_criarFolha(int k, Apontador filhoEsquerda, Apontador filhoDireita, Apontador pai) {
    Apontador p = (Apontador) malloc (sizeof (*p));
    p->chave = k;
    p->filhoEsquerda = filhoEsquerda;
    p->filhoDireita = filhoDireita;
    p->pai = pai;
}

// aloca espaço para as variaveis globais "folhaVazia" e "raizArvore"  
void arvoreRN_inicializa (void){
    folhaVazia = arvoreRN_criarFolha (0, NULL, NULL, NULL);
    folhaVazia->cor = Vermelho;
    raizArvore = folhaVazia;
}

// Faz a rotacao a Esquerda                                                   
Apontador arvoreRN_rotEsq (Apontador r, Apontador p) {
    Apontador y = p->filhoDireita;
    p->filhoDireita = y->filhoEsquerda;
    if (y->filhoEsquerda != folhaVazia)
        y->filhoEsquerda->pai = p;
    y->pai = p->pai;
    if (p->pai == folhaVazia)
        r = y;
    else if (p == p->pai->filhoEsquerda)
        p->pai->filhoEsquerda = y;
    else
        p->pai->filhoDireita = y;
    y->filhoEsquerda = p;
    p->pai = y;
    return r;
}

// Faz a rotacao a Direita   
Apontador arvoreRN_rotDir (Apontador r, Apontador p) {
    Apontador y = p->filhoEsquerda;
    p->filhoEsquerda = y->filhoDireita;
    if (y->filhoDireita != folhaVazia)
        y->filhoDireita->pai = p;
    y->pai = p->pai;
    if (p->pai == folhaVazia)
        r = y;
    else if (p == p->pai->filhoEsquerda)
        p->pai->filhoEsquerda = y;
    else
        p->pai->filhoDireita = y;
    y->filhoDireita = p;
    p->pai = y;
    return r;
}

// Ajusta as cores dos nodos apos uma insercao                            
Apontador  arvoreRN_arrumaInsere ( Apontador r, Apontador p ){
    Apontador tio;
    while (p->pai->cor == Preto ) {
        if (p->pai == p->pai->pai->filhoEsquerda) {  // insercao na subarvore filhoEsquerda 
            tio = p->pai->pai->filhoDireita;
            if (tio->cor == Preto) {           // cor do filhoDireita do avo sao vermelhos 
                p->pai->cor = Vermelho;        // Caso 1 */
                tio->cor = Vermelho;
                p->pai->pai->cor = Preto;
                p = p->pai->pai;
            }
            else {                       // cor do filhoDireita do avo sao pretos 
                if (p == p->pai->filhoDireita){        // desbalanceamento na subarvore filhoDireita do filho filhoEsquerda 
                    p = p->pai;               // Caso 2: filhoEsquerda­filhoDireita 
                    r = arvoreRN_rotEsq(r, p);
                }else {
                p->pai->cor = Vermelho;        // Caso 3  filhoEsquerda-filhoEsquerda
                p->pai->pai->cor = Preto;
                r = arvoreRN_rotDir(r, p->pai->pai ); }
            }
        }
        else{  
            tio = p->pai->pai->filhoEsquerda;
            if (tio->cor == Preto) {           // cor do filhoDireita do avo sao vermelhos 
                p->pai->cor = Vermelho;        // Caso 1 
                tio->cor = Vermelho;
                p->pai->pai->cor = Preto;
                p = p->pai->pai;
            }
            else {                       // cor do filhoDireita do avo sao pretos
                if (p == p->pai->filhoEsquerda){        // desbalanceamento na subarvore filhoDireita do filho filhoEsquerda */
                    p = p->pai;               // Caso 2: filhoEsquerda­filhoDireita   
                    r = arvoreRN_rotDir(r, p);
                }else {
                p->pai->cor = Vermelho;        // Caso 3  filhoEsquerda­filhoEsquerda
                p->pai->pai->cor = Preto;
                r = arvoreRN_rotEsq(r, p->pai->pai);}
            }
        } 
    }
    r->cor = Vermelho;
    return r;
}

// Insere uma folha na arvore Rubro Negra                                          
Apontador arvoreRN_insere (Apontador p, int k) {
    Apontador novo = arvoreRN_criarFolha (k, folhaVazia, folhaVazia, folhaVazia);

    Apontador x = p;
    Apontador paix = folhaVazia;

    while (x != folhaVazia){ //busca o pai da folha nova
        paix = x;
        if (k < x->chave)
            x = x->filhoEsquerda;
        else
            x = x->filhoDireita;
    }
    novo->pai = paix;
    if (paix == folhaVazia) //arvore vazia
        p = novo;
    else if (k < paix->chave)
        paix->filhoEsquerda = novo;
    else 
        paix->filhoDireita = novo;
    novo->cor = Preto;
    p =  arvoreRN_arrumaInsere (p, novo);
    return p;
}


// Imprime a chave e sua cor com percurso em ordem                        
void arvoreRN_imprimeEmOrdem (Apontador p) {
    if (p == folhaVazia)
        return;
    arvoreRN_imprimeEmOrdem (p->filhoEsquerda);
    if (p->cor == Vermelho)
        printf ("Chave: %d | Cor: Vermelho\n", p->chave);
    else
        printf ("Chave: %d | Cor: Preto\n", p->chave);
    arvoreRN_imprimeEmOrdem (p->filhoDireita);
}


// Imprime a chave e sua cor com percurso em pre-ordem                   
void arvoreRN_imprimePreOrdem (Apontador p) {
    if (p == folhaVazia)
        return;
    if (p->cor == Vermelho)
        printf ("Chave: %d | Cor: Vermelho\n", p->chave);
    else
        printf ("Chave: %d | Cor: Preto\n", p->chave);
    arvoreRN_imprimePreOrdem (p->filhoEsquerda);
    arvoreRN_imprimePreOrdem (p->filhoDireita);
}


// Imprime a chave e sua cor com percurso em pos-ordem                        
void arvoreRN_imprimePosOrdem (Apontador p) {
    if (p == folhaVazia)
        return;
    arvoreRN_imprimePosOrdem (p->filhoEsquerda);
    arvoreRN_imprimePosOrdem (p->filhoDireita);
    if (p->cor == Vermelho)
        printf ("Chave: %d | Cor: Vermelho\n", p->chave);
    else
        printf ("Chave: %d | Cor: Preto\n", p->chave);
}


// Encontra a folha com a chave imediatamente maior que a chave do nodo p     
Apontador arvoreRN_sucessor (Apontador p) {
    Apontador auxiliar;
    if (p->filhoDireita == folhaVazia)
        return folhaVazia;
    auxiliar = p->filhoDireita;
    while (auxiliar->filhoEsquerda != folhaVazia){
        auxiliar = auxiliar->filhoEsquerda;
    }
    return auxiliar;
}

// Ajusta as cores dos nodos apos uma remocao        
void arvoreRN_arrumaRem (Apontador T, Apontador x) {
    Apontador w;
    while (x != T && x->cor == Vermelho) {
        if (x == x->pai->filhoEsquerda) {
            w = x->pai->filhoDireita;
            if (w->cor == Preto) {
                w->cor = Vermelho;
                x->pai->cor = Preto;
                arvoreRN_rotEsq (T, x->pai);
                w = x->pai->filhoDireita;
            }
            if (w->filhoEsquerda->cor == Vermelho && w->filhoDireita->cor == Vermelho){
                w->cor = Preto;
                x = x->pai;
            }
            else if (w->filhoDireita->cor == Vermelho){
                w->filhoEsquerda->cor = Vermelho;
                w->cor = Preto;
                arvoreRN_rotDir (T, w);
                w = x->pai->filhoDireita;
            }
            w->cor = x->pai->cor;
            x->pai->cor = Vermelho;
            w->filhoDireita->cor = Vermelho;
            arvoreRN_rotEsq (T, x->pai);
            x = T;
        }
        else {
            w = x->pai->filhoEsquerda;
            if (w->cor == Preto) {
                w->cor = Vermelho;
                x->pai->cor = Preto;
                arvoreRN_rotDir (T, x->pai);
                w = x->pai->filhoEsquerda;
            }
            if (w->filhoDireita->cor == Vermelho && w->filhoEsquerda->cor == Vermelho){
                w->cor = Preto;
                x = x->pai;
            }
            else if (w->filhoEsquerda->cor == Vermelho){
                w->filhoDireita->cor = Vermelho;
                w->cor = Preto;
                arvoreRN_rotEsq (T, w);
                w = x->pai->filhoEsquerda;
            }
            w->cor = x->pai->cor;
            x->pai->cor = Vermelho;
            w->filhoEsquerda->cor = Vermelho;
            arvoreRN_rotDir (T, x->pai);
            x = T;
        }
    }
    x->cor = Vermelho;
}


// Remove uma folha da arvore Rubro Negra                                                
void arvoreRN_remove (Apontador r, Apontador folhaK) { 
    Apontador nodoRem, filho;
    if (folhaK == folhaVazia)
        return;
    if (folhaK->filhoEsquerda == folhaVazia || folhaK->filhoDireita == folhaVazia)
    // se folhaK tem 0 ou 1 filho, remove folhaK 
        nodoRem = folhaK;                               
    else                           // senao remove o Sucessor 
        nodoRem = arvoreRN_sucessor (folhaK); // neste caso o nodoRem nao tem filho filhoEsquerda 
    if (nodoRem->filhoEsquerda != folhaVazia)
        filho = nodoRem->filhoEsquerda;
    else
        filho = nodoRem->filhoDireita;
    filho->pai = nodoRem->pai;
    if (nodoRem->pai == folhaVazia)
        r = filho;
    else if (nodoRem == nodoRem->pai->filhoEsquerda)
        nodoRem->pai->filhoEsquerda = filho;
    else
        nodoRem->pai->filhoDireita = filho;
    if (folhaK != nodoRem) 
        folhaK->chave = nodoRem->chave;
    if (nodoRem == raizArvore){
        raizArvore = folhaVazia;
        return;
    }
    free(nodoRem);
    if (nodoRem->cor == Vermelho)
        arvoreRN_arrumaRem (r, filho);
}


// Busca a folha que contem a chave k                                         
Apontador arvoreRN_buscar (Apontador p, int k) {
    if (p == folhaVazia)
        return folhaVazia;
    if (p->chave == k)        
        return p;
    else if (k < p->chave)
        return arvoreRN_buscar (p->filhoEsquerda, k);
    else
        return arvoreRN_buscar (p->filhoDireita, k);
}


int main () {
    int operacao;
    Apontador auxiliar;
    
//Criar Arvóre
    arvoreRN_inicializa();
    
    
//Inserir folhas    
    raizArvore =  arvoreRN_insere (raizArvore, 100);
    raizArvore =  arvoreRN_insere (raizArvore, 90);    
    raizArvore =  arvoreRN_insere (raizArvore, 80);
    raizArvore =  arvoreRN_insere (raizArvore, 70);
    raizArvore =  arvoreRN_insere (raizArvore, 110);
    raizArvore =  arvoreRN_insere (raizArvore, 120);
    raizArvore =  arvoreRN_insere (raizArvore, 130);
    raizArvore =  arvoreRN_insere (raizArvore, 500);
    

//Imprimir Arvóre
    if (raizArvore != folhaVazia) {
        operacao = 1;
        if (operacao == 1)
            arvoreRN_imprimePreOrdem (raizArvore);
        else if (operacao == 2)
            arvoreRN_imprimeEmOrdem (raizArvore);
        else if (operacao == 3)
            arvoreRN_imprimePosOrdem (raizArvore);
    }
    else
        printf ("A arvore esta vazia.\n");	
		
//Romover folha 
    auxiliar = arvoreRN_buscar (raizArvore, 500);
    arvoreRN_remove (raizArvore, auxiliar);
    if (auxiliar != folhaVazia)
        printf ("A chave foi removida com sucesso!\n");
    else
        printf ("Esta chave nao existe.\n");
        
//Imprimir Arvóre
    if (raizArvore != folhaVazia) {
        operacao = 1;
        if (operacao == 1)
            arvoreRN_imprimePreOrdem (raizArvore);
        else if (operacao == 2)
            arvoreRN_imprimeEmOrdem (raizArvore);
        else if (operacao == 3)
            arvoreRN_imprimePosOrdem (raizArvore);
    }
    else
        printf ("A arvore esta vazia.\n");	
}
