#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	

//3. Construa um algoritmo que calcule a média aritmética de 3 números quaisquer fornecidos pelo usuário.

float numero1, numero2, numero3, media;
printf("Digite os 3 numeros que deseja: ");
scanf("%f %f %f", &numero1, &numero2, &numero3);
media = (numero1 + numero2 + numero3)/3;
printf("A média aritmetica entre os numeros %.2f, %.2f, %.2f é: %.2f", numero1, numero2, numero3, media);

}
