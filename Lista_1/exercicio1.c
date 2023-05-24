#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	//***LISTA1***//
	
// 1. Construa um algoritmo que leia um número inteiro de horas e mostre ao usuário o correspondente em minutos e segundos destas horas

int horas, minutos, segundos;
printf("Digite um numero: ");
scanf("%d", &horas);
minutos = horas * 60;
segundos = minutos * 60;
printf("Em %d horas, existem %d minutos ou %d segundos.", horas, minutos, segundos);
}
