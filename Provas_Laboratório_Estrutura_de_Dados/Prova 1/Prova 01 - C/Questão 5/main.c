#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*5) Criar uma estrutura de usu�rio, com os campos nome (char 30), login (char 10) e senha (char 10).
Dever�o ser criados, previamente, dois usu�rios (estaticamente) e, ao executar o programa, dever� ser
solicitado o login e senha de quem rodou o programa. Se o login e senha for de algum dos dois usu�rios
previamente cadastrado, o programa dever� apresentar uma mensagem �Seja bem-vindo Fulano�, em que
Fulano � o nome do usu�rio. Caso o usu�rio n�o exista, informar a mensagem �Usu�rio n�o cadastrado!�,
e sair do programa.*/

struct Usuario{
	char nome[30];
	char login[10];
	char senha[10];
} userA, userB;

void verificarLogin(char log[], char key[]){
	if (strcmp (userA.login, log) == 0 && (strcmp (userA.senha, key) == 0) ){
			printf("Seja bem vindo %s", userA.nome);
	}
	else if (strcmp(userB.login, log) == 0 && (strcmp(userB.senha, key) == 0)){
			printf("Seja bem vindo %s", userB.nome);
	}
	else{
		printf("Usuario nao cadastrado!\nsair do programa");
	}
}


int main(int argc, char *argv[]) {
	char user[10], password[10];
	strcpy(userA.nome, "Jardel Brandon");
	strcpy(userA.login, "Jardel");
	strcpy(userA.senha, "123456");
	strcpy(userB.nome, "Francielli Alves");
	strcpy(userB.login, "Fran");
	strcpy(userB.senha, "abc");
	printf("Digite seu login : \n");
	gets(user);
	printf("Digite sua senha : \n");
	gets(password);
	verificarLogin(user, password);
	return 0;
}
