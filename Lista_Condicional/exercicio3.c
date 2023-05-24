#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	

/*3. Faça um programa que leia um número inteiro e verifique se esse número é par ou
ímpar.*/

int numero;
printf("Digite um número inteiro qualquer: ");
scanf("%d", &numero);
if (numero % 2 == 0) {
	printf("O número digitado é PAR!");
}
else {
	printf("O número digitado é IMPAR!");
}
}
