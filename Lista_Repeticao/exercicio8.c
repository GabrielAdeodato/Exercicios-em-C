#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");



/* 8. Fa�a um programa que leia 10 inteiros e imprima sua m�dia. */
float valor, media, soma;
int i;	
	printf("Digite 10 valores para gerar a m�dia: ");
	
	for(i=1; i<=10; i++){
		scanf("%f", &valor);
	soma = soma + valor	;
		
	}
media = soma/10;
printf("M�dia = %.2f", media);
}
