#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");	

/*10. Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua
média.*/

int i;
float media, valor, soma;
	printf("Digite 10 valores para gerar a média: ");
	
	for(i=1; i<=10; i++){
		scanf("%f", &valor);
		if(valor>0){
			
			soma = soma + valor	;
		}	
		else{
			i--;
		}
	}
media = soma/10;
printf("Média = %.2f", media);

}
