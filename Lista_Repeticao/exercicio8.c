#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");



/* 8. Faça um programa que leia 10 inteiros e imprima sua média. */
float valor, media, soma;
int i;	
	printf("Digite 10 valores para gerar a média: ");
	
	for(i=1; i<=10; i++){
		scanf("%f", &valor);
	soma = soma + valor	;
		
	}
media = soma/10;
printf("Média = %.2f", media);
}
