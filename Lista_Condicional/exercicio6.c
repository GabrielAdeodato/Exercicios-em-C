#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");

/*6. Fa�a um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes f�rmulas (em que �h� corresponde � altura):
? Homens: (72,7 * h) � 58
? Mulheres: (62,1 * h) � 44,7*/

float altura, pesoIdeal;
char sexo;
printf("Digite sua altura: ");
scanf("%f", &altura);
printf("Digite seu sexo: ");
scanf("%s", &sexo);
if (sexo == 'M' || sexo =='m'){
	pesoIdeal = (72.7 * altura) - 58;
	printf("Seu peso ideal � %.2f", pesoIdeal);
}
else if (sexo == 'F' || sexo == 'f'){
	
	pesoIdeal = (62.1 * altura) - 44.7;
	printf("Seu peso ideal � %.2f", pesoIdeal);
}
else{
	printf("Sexo Biol�gico por favor");
}
}
