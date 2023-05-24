#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");	



//1. Elabore um algoritmo que receba o nome completo de um cliente e imprima a quantidade de caracteres digitados.\n\n");

char nomeCompleto[100];

printf("Digite seu nome completo: ");
fgets(nomeCompleto, 100, stdin);

nomeCompleto[strcspn(nomeCompleto, "\n")] = 0;
printf("%s, o seu nome completo tem %d caracteres", nomeCompleto, (strlen (nomeCompleto) ));

}
