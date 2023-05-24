#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");

/*5. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre: o
número digitado ao quadrado e raiz quadrada do número digitado.*/

float numero, potencia, raiz;

printf("Digite o número que deseja: ");
scanf("%f", &numero);

potencia = pow(numero, 2);
raiz = sqrt(numero);
if(numero >= 0){
	printf("O %.2f ao quadrado é: %.2f\n e a sua raiz é: %.2f", numero, potencia, raiz);
}
else{
	printf("Número inválido");
}
}
