#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");	



printf("11. Fa�a um algoritmo que leia um n�mero positivo e imprima seus divisores. Exemplo: Os divisores do n�mero 66 s�o: 1, 2, 3, 6, 11, 22, 33 e 66.\n\n");
int i, numero;
printf("Escreva um n�mero para descobrir seus divisores: ");
scanf("%d", &numero);
for(i=1; i<=numero; i++){
	if(numero % i == 0){
		printf("%d\n", i);
		
	}
}
}
