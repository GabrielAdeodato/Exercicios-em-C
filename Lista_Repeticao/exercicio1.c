#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");

/* 1. Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os n�meros
naturais de 0 at� N em ordem crescente.*/

int numeroFinal, i=0;
printf("Digite o numero final da sequencia crescente de inteiros positivos: ");
scanf("%d", &numeroFinal);
for(i=1; i<=numeroFinal; i++){
	printf("%d, ", i);
	
} 
}
