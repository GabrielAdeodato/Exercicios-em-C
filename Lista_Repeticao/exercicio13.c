#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");	


/*printf("13. Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário.
Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de
ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos
anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.\n\n");*/

int numero, i, a=0, b=1, x;
printf("***ACEITAMOS ATÉ O VALOR 47, DEPOIS SÓ DEUS SABE***\n\n");
printf("Digite qual número da sequência de fibonacci você deseja descobrir: ");
scanf("%d", &numero);
for(i=0; x<numero; x++){
	
	i = a + b; 	
	a = b;
	b = i;
}
printf("O número digitado, corresponde ao número: %d\n na sequência de fibonacci"), a;
}
