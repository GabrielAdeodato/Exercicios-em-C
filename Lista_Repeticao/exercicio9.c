#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");	

/*9. Escreva um programa que leia 10 n�meros e escreva o menor valor lido e o maior valor
lido.*/

int numero=0, i=0, maior, menor;
printf("Digite 10 valores de forma aleat�ria: ");
for(i=1; i<=10; i++){
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
