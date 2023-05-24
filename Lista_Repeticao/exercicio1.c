#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");

/* 1. Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem crescente.*/

int numeroFinal, i=0;
printf("Digite o numero final da sequencia crescente de inteiros positivos: ");
scanf("%d", &numeroFinal);
for(i=1; i<=numeroFinal; i++){
	printf("%d, ", i);
	
} 
}
