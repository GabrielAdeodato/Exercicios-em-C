#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	

/*3. Fa�a um programa que leia um n�mero inteiro e verifique se esse n�mero � par ou
�mpar.*/

int numero;
printf("Digite um n�mero inteiro qualquer: ");
scanf("%d", &numero);
if (numero % 2 == 0) {
	printf("O n�mero digitado � PAR!");
}
else {
	printf("O n�mero digitado � IMPAR!");
}
}
