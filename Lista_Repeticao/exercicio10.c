#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");	

/*10. Fa�a um programa que leia 10 inteiros positivos, ignorando n�o positivos, e imprima sua
m�dia.*/

int i;
float media, valor, soma;
	printf("Digite 10 valores para gerar a m�dia: ");
	
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
printf("M�dia = %.2f", media);

}
