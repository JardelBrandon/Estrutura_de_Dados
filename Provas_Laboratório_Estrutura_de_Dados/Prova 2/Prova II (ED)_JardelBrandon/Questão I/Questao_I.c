#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*1) Faça uma função que receba 2 strings (A e B) e retorne uma terceira string (C) formada pelos
caracteres de A e B intercalados. Ex.: Se A='Quarta' e B='Segunda', a resposta deve ser 'QSueagrutnada'.
OBS.: A terceira string deverá, obrigatoriamente, ser alocada de forma dinâmica. (3,5 pontos)*/

 intercalar(char A[], char B[]){
	char C[50] = "";
	int* ponteiro_C;
	int i, j;
	
	ponteiro_C = (int*) malloc(sizeof(C));

	//strcat(C,A[0]);
	//strcat(C,B[0]);
	for(i = 0, j = 0; i < (sizeof(A) + sizeof(B)); i++){
		C[j] = A[i]; 
		j++;
		C[j] = B[i];
		j++;
	}
	printf("%s", C);
}

int main(int argc, char *argv[]) {
	char primeira_palavra[50], segunda_palavra[50];
	printf("Digite a primeira palavra para intercalacao: ");
	fflush(stdin);
	gets(primeira_palavra);
	printf("Digite a segunda palavra intercalacao: ");
	fflush(stdin);
	gets(segunda_palavra);
	intercalar(primeira_palavra, segunda_palavra);
	
	return 0;
}
