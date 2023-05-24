#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	/*7. Elabore um programa que peça ao usuário para digitar 10 valores. Some esses valores e
apresente o resultado na tela.*/

int valor , soma = 0, i=1;
	printf("Digite 10 valores para serem somados: \n");
	
for(i=1; i<=10; i++){
	
	scanf("%d", &valor);
	
	soma = soma + valor;
}
printf("Soma = %d", soma);
}
