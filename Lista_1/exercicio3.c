#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	

//3. Construa um algoritmo que calcule a m�dia aritm�tica de 3 n�meros quaisquer fornecidos pelo usu�rio.

float numero1, numero2, numero3, media;
printf("Digite os 3 numeros que deseja: ");
scanf("%f %f %f", &numero1, &numero2, &numero3);
media = (numero1 + numero2 + numero3)/3;
printf("A m�dia aritmetica entre os numeros %.2f, %.2f, %.2f �: %.2f", numero1, numero2, numero3, media);

}
