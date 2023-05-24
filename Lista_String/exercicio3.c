#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");	

/*3. Elabore um algoritmo que receba os dados: nome completo, e-mail e endereço de um usuário e
faça um backup de todos eles em novas variávies.*/

char nomeCompleto[100], email[100], endereco[100];
char novoNome[100], novoEmail[100], novoEndereco[100];

printf("Digite o seu nome completo: ");
fgets(nomeCompleto, 100, stdin);

printf("Digite o seu email: ");
fgets(email, 100, stdin);

printf("Digite o seu endereco: ");
fgets(endereco, 100, stdin);


strcpy(novoNome, nomeCompleto);
strcpy(novoEmail, email);
strcpy(novoEndereco, endereco);

printf("\n*********************************");
printf("\nSeu nome é: %s\n", novoNome);
printf("Seu e-mail é: %s\n", novoEmail);
printf("Seu endereçõ é: %s\n", novoEndereco);

}
