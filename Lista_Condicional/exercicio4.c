#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");

/*4. Fa�a um programa que leia o sal�rio de um trabalhador e o valor da presta��o de um
empr�stimo. Se a presta��o, for maior que 20% do sal�rio, imprima: �Empr�stimo n�o
concedido.�, caso contr�rio, imprima: �Empr�stimo concedido.�*/

float salario, valorPrestacao;
printf("Digite o valor do seu s�lario: ");
scanf("%f", &salario);
printf("Digite o valor da presta��o que voc� precisa: ");
scanf("%f", &valorPrestacao);
if(valorPrestacao <= salario/5){
	printf("Emprestimo concedido");
}
else{
	printf("Emprestimo n�o concedido");
}
}

