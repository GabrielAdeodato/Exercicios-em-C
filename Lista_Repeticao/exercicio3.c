#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");



/*3. Faça um programa que leia um número inteiro N e depois imprima os N primeiros números
naturais ímpares (sem usar comando condicional).*/

int numeroImpar, numeroInicial, i;
printf("Escreva quantos inteiros impares você deseja: ");
scanf("%d", &numeroImpar);
for(i=1; i <= 2 * numeroImpar; i = i + 2) {
	printf("%d ", i);
}
}
