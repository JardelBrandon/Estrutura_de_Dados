#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void qualidadeDoAr(int n){
	if (n < 35){
		printf("De acordo com o indece, o valor da qualidade de ar informado %d eh considerado:\nBoa", n);
	}
	else if(n >= 35 && n <= 60){
		printf("De acordo com o indece, o valor da qualidade de ar informado %d eh considerado:\nRuim", n);
	}
	else{
		printf("De acordo com o indece, o valor da qualidade de ar informado %d eh considerado:\nPessima", n);
	}
}

int main(int argc, char *argv[]) {
	int x;
	printf("Digite o valor da qualidade do ar :\n");
	scanf("%d", &x);
	qualidadeDoAr(x);
	return 0;
}
