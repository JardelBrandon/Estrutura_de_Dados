#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*7) Seja uma estrutura para descrever os im�veis de uma imobili�ria, contendo os seguintes campos:
bairro: string de tamanho 20
pre�o: real
tamanho privativo: real
vagas de garagem: inteiro
tipo do im�vel: enumera��o (apartamento ou casa)
a) Escrever a defini��o da estrutura im�vel.
b) Declarar o vetor vetor_imovel do tipo da estrutura definida acima, de tamanho 5 e local � fun��o
main( ).
c) Definir um bloco de programa para ler o vetor vetor_imovel.
d) Definir um bloco de programa que obtenha a string �apartamento� ou �casa�, quando os tipos dos
im�veis forem, respectivamente, apartamento ou casa.
e) Defina um bloco de programa imprima o tipo do im�vel, seguido pelo bairro e pre�o.
OBS.: Um bloco de programa representa um conjunto de comandos, escritos em C, que est� no corpo da
fun��o main( ).*/

struct imobiliaria{
	char bairro[20];
	float preco;
	float tamanho;
	int garagem;
	enum tipo_imovel{
	apartamento, casa
	};
	char estilo[10];
};

int main(int argc, char *argv[]) {
	int i, tipo, MAX = 2;
	struct imobiliaria vetor_imovel[5];
	for(i = 0; i < MAX; i++){
		printf("Digite o bairro da %d�imovel :\n", (i + 1));
		fflush(stdin);
		gets(vetor_imovel[i].bairro);
		printf("Digite o preco do %d�imovel :\n", (i + 1));
		scanf("%f", &vetor_imovel[i].preco);
		printf("Digite o tamanho do %d�imovel :\n", (i + 1));
		scanf("%f", &vetor_imovel[i].tamanho);
		printf("Digite a quantidade de vagas de garagem do %dimovel :\n", (i + 1));
		scanf("%d", &vetor_imovel[i].garagem);
		printf("Digite o tipo do %dimovel (0 para apartamento / 1 para casa):\n", (i + 1));
		scanf("%d", &tipo);
		if (tipo == apartamento){
			strcpy(vetor_imovel[i].estilo, "Apartamento");
		}
		else if(tipo == casa){
			strcpy(vetor_imovel[i].estilo, "Casa");
		}
		else{
			strcpy(vetor_imovel[i].estilo, "Indefinido");
		}
	}
	
	printf("\t\t Tipo do imovel \t Bairro \t Preco\n");
	for (i = 0; i < MAX; i++){
			printf("\t\t\n%d� Imovel : %s \t\t %s \t\t %f\n", (i + 1), vetor_imovel[i].estilo, vetor_imovel[i].bairro, vetor_imovel[i].preco);
}
	return 0;
}
