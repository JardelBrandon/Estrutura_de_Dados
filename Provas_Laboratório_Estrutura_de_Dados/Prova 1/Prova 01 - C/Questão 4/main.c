#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*4) Fa�a uma fun��o que receba dois par�metros: uma string; e um vetor de inteiros. A fun��o dever�
armazenar, na primeira posi��o do vetor de inteiros, o quantitativo de letras mai�sculas. Na segunda
posi��o, o quantitativo de letras min�sculas e, na terceira, o quantitativo de espa�os em branco.*/

void detalharString(char texto[], int quantidade[]){
	int i;
	char caractere;
	for (i = 0; i < strlen(texto); i++){
		caractere = texto[i];
		if(caractere>='A' && caractere<='Z'){
			quantidade[0] += 1;
   		}
	    else if(caractere>='a' && caractere<='z'){
	    	quantidade[1] += 1;
    	}
    	else if(caractere == ' '){
    		quantidade[2] += 1;
		}
	}
	printf("Quantidade de caracteres\nMaiusculos : %d\nMinusculos : %d\nVazios(branco) : %d", quantidade[0], quantidade[1], quantidade[2]);	
}

int main(int argc, char *argv[]) {
	char frase[200];
	int vetor[3] = {0,0,0};
	printf("Digite uma frase : ");
	gets(frase );
	detalharString(frase, vetor);
	return 0;
}
