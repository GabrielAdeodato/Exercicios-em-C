#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");

/*5. Fa�a um programa que leia um n�mero e, caso ele seja positivo, calcule e mostre: o
n�mero digitado ao quadrado e raiz quadrada do n�mero digitado.*/

float numero, potencia, raiz;

printf("Digite o n�mero que deseja: ");
scanf("%f", &numero);

potencia = pow(numero, 2);
raiz = sqrt(numero);
if(numero >= 0){
	printf("O %.2f ao quadrado �: %.2f\n e a sua raiz �: %.2f", numero, potencia, raiz);
}
else{
	printf("N�mero inv�lido");
}
}
