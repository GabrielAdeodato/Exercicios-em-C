#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");



/*3. Fa�a um programa que leia um n�mero inteiro N e depois imprima os N primeiros n�meros
naturais �mpares (sem usar comando condicional).*/

int numeroImpar, numeroInicial, i;
printf("Escreva quantos inteiros impares voc� deseja: ");
scanf("%d", &numeroImpar);
for(i=1; i <= 2 * numeroImpar; i = i + 2) {
	printf("%d ", i);
}
}
