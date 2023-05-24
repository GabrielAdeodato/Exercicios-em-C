#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	

/*1. Faça um programa que leia dois números e mostre qual deles é o maior.*/

float numero1, numero2;

printf("Digite o valor do primeiro número: ");
scanf("%f", &numero1);
printf("Digite o valor do segundo número: ");
scanf("%f", &numero2);
if(numero1 > numero2){
	printf("O número %.2f é maior que o %.2f", numero1, numero2);
}else{
	printf("O número %.2f é maior que o %.2f", numero2, numero1);
}
}

