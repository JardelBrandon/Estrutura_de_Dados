#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*3) Faça um programa em C que leia uma string s1, uma string s2, um inteiro pos e insira a string s2 em
s1 na posição pos. Você deverá usar alocação dinâmica de memória, para a inserção da segunda string na
primeira. (3,5 pontos)*/

int insere_string(char s1[], char s2[], int pos){
	int* s3; 
	int i, j;
	s3 = (int*) malloc(sizeof(s1) + sizeof(s2));
	for(i =  0; i < pos; i++){
		&s3[i] = s1[i];
	}
	for(i = 0, j = pos; i < sizeof(s2); i++, j++){
		s3[j] = s2[i];
	}
	for(i = 0; i < sizeof(s3); i++){
		printf("%c", s3[i]);
	}
	//printf("%s", s3);
	
}


int main(int argc, char *argv[]) {
	char primeira_palavra[50], segunda_palavra[50];
	int posicao;
	printf("Digite a primeira palavra: ");
	fflush(stdin);
	gets(primeira_palavra);
	printf("Digite a segunda palavra para ser inserida: ");
	fflush(stdin);
	gets(segunda_palavra);
	printf("Digite a posicao em que deseja a insercao: ");
	scanf("%d", &posicao);
	insere_string(primeira_palavra, segunda_palavra, posicao);
	return 0;
}
