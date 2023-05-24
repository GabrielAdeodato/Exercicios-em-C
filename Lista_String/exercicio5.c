#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main () {
	setlocale(LC_ALL, "Portuguese");	
	
/*5. O usuario informa seu nome, sobrenome e numero do cpf. A partir destes dados é composta sua
senha de acesso, formada pelo nome, primeira letra do sobrenome e os 3 primeiros números do
cpf. Elabore um algoritmo que gere e imprima a senha.*/

char nome[33], sobrenome[34], cpf[15], senha[50];

printf("Digite seu primeiro nome: ");
scanf("%s", &nome);

printf("Digite seu último nome: ");
scanf("%s", &sobrenome);

printf("Digite seu CPF (xxx.xxx.xxx-xx): ");
scanf("%s", &cpf);

strcpy(senha, nome);
strncat(senha, sobrenome, 1);
strncat(senha, cpf, 3);

system("cls");

printf("Sua senha é: %s", senha);

}

