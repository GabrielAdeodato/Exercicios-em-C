#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");	

/*4. Elabore um algoritmo que receba o primeiro nome, o(s) nome(s) do meio, e o ultimo nome do
usuário. Concatene os dados e imprima o valor final.*/

char nome[33], nomesMeio[34], ultimoNome[34];

printf("Digite o seu primeiro nome: ");
fgets(nome, 33, stdin);
nome[strcspn(nome, "\n")] = 0;
    
printf("Digite os seus nomes do meio: ");
fgets(nomesMeio, 34, stdin);
nomesMeio[strcspn(nomesMeio, "\n")] = 0;
    
printf("Digite o seu último sobrenome: ");
fgets(ultimoNome, 34, stdin);
ultimoNome[strcspn(ultimoNome, "\n")] = 0;


strcat(nome, nomesMeio);
strcat(nome, ultimoNome);

printf("O seu nome completo é: %s", nome); //procurar como dar espaço entre os nomes

}
