#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");	


/*printf("13. Escreva um programa que leia um n�mero inteiro, maior ou igual a zero, do usu�rio.
Imprima o en�simo termo da sequ�ncia de Fibonacci. Essa sequ�ncia come�a no termo de
ordem zero, e, a partir do segundo termo, seu valor � dado pela soma dos dois termos
anteriores. Alguns termos dessa sequ�ncia s�o: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.\n\n");*/

int numero, i, a=0, b=1, x;
printf("***ACEITAMOS AT� O VALOR 47, DEPOIS S� DEUS SABE***\n\n");
printf("Digite qual n�mero da sequ�ncia de fibonacci voc� deseja descobrir: ");
scanf("%d", &numero);
for(i=0; x<numero; x++){
	
	i = a + b; 	
	a = b;
	b = i;
}
printf("O n�mero digitado, corresponde ao n�mero: %d\n na sequ�ncia de fibonacci"), a;
}
