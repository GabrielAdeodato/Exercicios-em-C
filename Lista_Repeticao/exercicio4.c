#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");


/*
4. Fa�a um programa que determine e mostre os cinco primeiros m�ltiplos de 3 considerando
n�meros maiores que 0.
*/

int soma, i=3;
for(soma = i; soma <= 15; soma = soma+i){
	printf("%d ", soma);
}
}
