#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");

/*4. Faça um programa que leia o salário de um trabalhador e o valor da prestação de um
empréstimo. Se a prestação, for maior que 20% do salário, imprima: “Empréstimo não
concedido.”, caso contrário, imprima: “Empréstimo concedido.”*/

float salario, valorPrestacao;
printf("Digite o valor do seu sálario: ");
scanf("%f", &salario);
printf("Digite o valor da prestação que você precisa: ");
scanf("%f", &valorPrestacao);
if(valorPrestacao <= salario/5){
	printf("Emprestimo concedido");
}
else{
	printf("Emprestimo não concedido");
}
}

