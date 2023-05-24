#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");	



printf("11. Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.\n\n");
int i, numero;
printf("Escreva um número para descobrir seus divisores: ");
scanf("%d", &numero);
for(i=1; i<=numero; i++){
	if(numero % i == 0){
		printf("%d\n", i);
		
	}
}
}
