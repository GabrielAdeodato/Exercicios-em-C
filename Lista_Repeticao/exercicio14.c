#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");	



/*14. Elabore um programa que fa�a a leitura de v�rios n�meros inteiros at� que se digite um
n�mero negativo. O programa tem de retornar o maior e o menor n�mero lido.*/

int numero=1, i=0, maior, menor;
printf("Digite valores de forma aleat�ria: ");

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
printf("O maior n�mero �: %d\n", maior);
printf("O menor n�mero �: %d\n", menor);
}
