#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");	

/*3. Elabore um algoritmo que receba os dados: nome completo, e-mail e endere�o de um usu�rio e
fa�a um backup de todos eles em novas vari�vies.*/

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
printf("\nSeu nome �: %s\n", novoNome);
printf("Seu e-mail �: %s\n", novoEmail);
printf("Seu endere�� �: %s\n", novoEndereco);

}
