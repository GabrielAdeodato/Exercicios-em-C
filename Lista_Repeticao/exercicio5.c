#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");



/* 5. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/

int soma, i;
for (i=2; i<=100;i=i+2){
	
	soma = i + soma;
}
	printf("A soma entre os primeiros 50 números pares é: %d ", soma);
}
