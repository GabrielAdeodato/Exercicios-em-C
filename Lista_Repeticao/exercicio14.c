#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");	



/*14. Elabore um programa que faça a leitura de vários números inteiros até que se digite um
número negativo. O programa tem de retornar o maior e o menor número lido.*/

int numero=1, i=0, maior, menor;
printf("Digite valores de forma aleatória: ");

	for(i=1; numero>0; i++){
		scanf("%d", &numero);
		
	 	if (i == 1) {
	           maior = numero;
	           menor = maior;
	       }
	      	else if (numero > maior) {
	        	maior = numero;
	      	}
	      	else if (numero < menor) {
	      		menor = numero;
	       }
	}
printf("O maior número é: %d\n", maior);
printf("O menor número é: %d\n", menor);
}
