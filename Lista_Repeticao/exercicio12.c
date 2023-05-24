
#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");	

printf("12. Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000 que são múltiplos de 3 ou 5.\n\n");


int soma=0, i ;
for ( i = 0; i < 1000; i++){
    
	if (i%3 == 0|| i%5 == 0){
        soma = soma + i;
    }      
}

	printf("A soma de todos os números naturais abaixo de 1000 que são múltiplos de 3 ou 5 é: %d",soma);
}
