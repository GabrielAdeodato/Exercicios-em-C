#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	

/*1. Fa�a um programa que leia dois n�meros e mostre qual deles � o maior.*/

float numero1, numero2;

printf("Digite o valor do primeiro n�mero: ");
scanf("%f", &numero1);
printf("Digite o valor do segundo n�mero: ");
scanf("%f", &numero2);
if(numero1 > numero2){
	printf("O n�mero %.2f � maior que o %.2f", numero1, numero2);
}else{
	printf("O n�mero %.2f � maior que o %.2f", numero2, numero1);
}
}

