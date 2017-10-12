#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*2) Uma string é uma palavra se não contiver caracteres em branco. Dado um texto como entrada no
teclado:
	a. Determinar a maior palavra e imprimi-la.
	b. Classificar as palavras em 3 classes e determinar a frequência absoluta de ocorrência
	delas em cada classe. Cada classe será criada de acordo com o tamanho das palavras, da
	seguinte forma: classe 1 vai de 0 a 3 caracteres na palavra; classe 2 vai de 4 a 6 caracteres;
	e classe 3 a partir de 7 caracteres na palavra. Após, imprimir a ocorrência da seguinte
	forma:
		Classe das palavras 		Frequência
		0 --- 3 						10
		4 --- 6 					    8
		A partir de 7 (7 ou mais)	 	12
OBS.: O tamanho da variável que recebe os caracteres do teclado deve ser de 200, mas, para teste
utilizar um valor menor. */

void maiorPalavra(char frase[]){
	char temp[200], maior[200];
	int i, j = 0;
	for(i = 0; i <= strlen(frase); i++){
		if (i == 0){
				for(i = 0; i <= strlen(frase); i++){
					if (frase[i] != ' '){
					maior[i] = frase[i]; 
				}
					else{
						break;
					}
				}
		}
		else{
			if (frase[i] != ' '){
				temp[j++] = frase[i];
			}
			else{
				if(strlen(temp) > strlen(maior)){
					strcpy(maior, temp);
				}
				j = 0;
			}	
		}
	}		
	if(strlen(temp) > strlen(maior)){
		strcpy(maior, temp);
	}	
	printf("A maior palavra do texto digitado foi :%s\n", maior);
}

void classe(char frase[]){
	int i, contador = 0, pequena = 0, media = 0, grande = 0; 
	for(i = 0; i <= strlen(frase); i++){
		if (frase[i] != ' '){
			contador += 1;
		}
		else{
			if (contador >= 0 && contador <= 3){
				pequena += 1;
			} 
			else if (contador > 3 && contador <=6){
				media += 1;
			}
			else{
				grande += 1;
			}
		contador = 0;
		}
	}
			if (contador >= 0 && contador <= 3){
				pequena += 1;
			} 
			else if (contador > 3 && contador <=6){
				media += 1;
			}
			else{
				grande += 1;
			}
	printf("Classe das palavras \t\tFrequencia\n0 --- 3 \t\t\t%d\n4 --- 6 \t\t\t%d\nA partir de 7(7 ou mais) \t%d\n", pequena, media, grande);
}

int main(int argc, char *argv[]) {
	char texto[200];
	printf("Digite um texto :\n");
	gets(texto);
	maiorPalavra(texto);
	classe(texto);
	return 0;
}
