#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");


/* 2. Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem decrescente.
*/

int numeroInicial, i=0;
printf("Digite o numero inicial da sequencia decrescente de inteiros positivos: ");
scanf("%d", &numeroInicial);
for(i=numeroInicial; i<=numeroInicial&&i>0; i--){
	printf("%d, ", i);
}
}
