
//  Testeteste.c
//  testes.c
//
//  Created by Gabriel Alvarenga on 28/03/23.
//
#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
#include<string.h>
#include"cola.h"



int main () {

	setlocale(LC_ALL, "Portuguese"); 

 
/*faça um programa na linguagem C e receba como dados de entrada o valor de uma venda e a quantidade de 
parcelas e mostre como resultado o valor da venda com desconto obedecendo a seguinte tabela 
parcelas 
0 a 1 = 5% de desconto
2 até 3 = juros de 5%
4 ou mais = juros de 10% 


float valor;
int parcela;

printf("digite o valor do produto: ");
scanf("%f", &valor);

printf("Digite quantas parcelas foi efetuada a compra: ");
scanf("%d", &parcela);

if(parcela >= 0 && parcela <=1){
	valor = valor * 0.95;
}	else if(parcela >= 2 && parcela <= 3){
		valor = valor * 1.05;	
	}	else if(parcela >= 4){
			valor = valor * 1.1;
		}	
printf("o valor final ficou %0.2f", valor);
*/
//////////////////////////////////////////////////////////////
/* faca um programa que receba como dado de entrada o salario de uma pessoa e o seu tempo de servico e 
mostre como resultado o salario final onde: 
tempo > 5 anos = bonus de 10%
caso o salario final seja > que 1800
descontar INSS de 11%


int tempo;
float salario;
float salarioFinal;

printf("digite o seu salário: ");
scanf("%f", &salario);

printf("Digite seu tempo na empresa: ");
scanf("%d", &tempo);

salarioFinal = salario;

if(tempo >= 5){
	salarioFinal = salario * 1.1;
}
if(salarioFinal > 1800){
	salarioFinal = salarioFinal * 0.89; 
}

system("clear");

printf("%0.2f é o seu salário final", salarioFinal);
*/

/////////////////////////////////////////////////////////////////////////////////
/*faca um programa que receba como dados de entrada 5 numeros inteiros 
obs: o programa só pode ter 2 variáveis *


int numero;
int i = 1;


for (i = 1; i < 6; i++){
printf("%d\n", i);

//system("clear");
}*/


/*faca um programa que receba 5 numeros inteiros e mostre no resultado: 
A Qual foi o maior numero digitado, 
B Qual foi o menor numero digitado
4 VAR

int maior = 0, menor = 9999, i , num;

for ( i = 1; i <= 5; i++)
{
	printf("Digite o %dº número: ", i);
	scanf("%d", &num);

	if (num > maior)
	{
		maior = num;
	}
	if (num < menor)
	{
		menor = num;
	}

}
printf("%d foi o maior número digitado.\n", maior);
printf("%d foi o menor número digitado", menor);
*/



// faca um programa que receba varios numeros inteiros e o programa deve funalizar quando for digitado
// o valor 0
/*
while (valor != 0){
	printf("Digite um valor: ");
	scanf("%d", &i);

	printf("\nDigite 1 para continuar e 0 para sair: ");
	scanf("%d", &valor);
*/
	/*receba como dado de entrada varios numeros inteiros e mostre como resultado:
	A: quantas vezes o programa rodou
	B: Qual foi o maior numero digitado*/
/*
int valor=0, cont=0, maior=0, parar = 1;

while(parar != 0){
	printf("digite um número entre 1 a 1000: ");
	scanf("%d", &valor);
if(valor > maior){
	maior = valor;
}
	cont++;
	printf("digite 0 para parar, digite qualquer outro numero para continuar: ");
	scanf("%d", &parar);
}
system("clear");
printf("%d é quantas vezes o programa repetiu", cont);
printf("\n%d é o maior valor digitado", maior);
*/


/*faca um programa que imprima na tela 6 numeros inteiros entre 1 e 60 cada um de uma cor (fazer a cor em casa)

    srand(time(NULL));
    

    for (int i = 0; i < 6; i++) {
        int numero = (rand() % 60) + 1;
        printf("Numero %d: %d\n", i+1, numero);
    }*/


/*faca um programa que recaba como dado de entrada 2 notas de varios alunos e mostre como resultado:
A: qual foi a maior média obtida
B: Quantos alunos tiveram média >= 7


int pararPrograma = 1, i = 1, contadorMedia = 0;
float notaUm = 0, notaDois = 0, mediaFinal, maiorFinal;

while (pararPrograma != 0)
{
	printf("\nDigite a 1ª nota do aluno: ");
	scanf("%f", &notaUm);

	printf("\nDigite a 2ª nota do aluno: ");
	scanf("%f", &notaDois);

	mediaFinal = (notaUm + notaDois) / 2;

	printf("\n%0.2f é a media final do %dº aluno.\n", mediaFinal, i);
	i++;

	if(mediaFinal >= 7){
		contadorMedia++;
	}
	if(mediaFinal > maiorFinal){
		maiorFinal = mediaFinal;
	}
	printf("\n-----------------------------------------------------------------------------");
	printf("\ndeseja incluir mais algum aluno? caso NÃO digite 0, caso SIM digite 1: ");
	printf("\n-----------------------------------------------------------------------------");
	printf("\n:");
	scanf("%d", &pararPrograma);
}
system("clear");
printf("\nmaior media final = %0.2f", maiorFinal);
printf("\nA quantidade de alunos com nota maior ou igual a 7 é: %d", contadorMedia);
*/


/*faca um programa que receba como dados de entrada um valor de um serviço e mostre como resultado
o valor do serviço com 10% de desconto. (obs: utilizar função em um arquivo .h)

const float DESC = 0.9;
float valor;

printf("Digite o valor do serviço: "); 
scanf("%f", &valor);

descontar(valor, DESC);
*/

/*faça um programa em que o usuario ira escolher uma das 4 operaões aritmeticas e também tera a opção de
sair do programa quando digitar 0, ao final informar quantas vezes o programa rodou e a cada rodada mostrar
a opção escolhida pelo usuário (obs: utilizar função obrigatoriamente)*/
/*
float num1, num2;
int cont = 0, continua = 1;
char operacao;


while (continua != 0)
{
	system("clear");
	fflush(stdin);
	printf("\nDigite o simbolo da operação desejada (+ - * /): ");
	scanf("%c", &operacao);
		
	printf("\nDigite o num1: "); 
	scanf("%f", &num1);

	printf("\nDigite o num2: ");
	scanf( "%f", &num2);

	switch (operacao)
	{
		case '+':
			somar(num1, num2);
		break;

		case '-':
			subtrair(num1, num2);
		break;

		case '/':
			dividir(num1, num2);
		break;

		case '*': 
			multiplicar(num1, num2);
		break;

		default:
			printf("\nEssa operação não é valida");
		break;
	}
	cont++;

	printf("\nDeseja continuar? (digite 0 para não): ");
	scanf("%d", &continua);
	
}
system("clear");
printf("O programa rodou %d vezes", cont);
*/


/*****	introdução a vetores	*****/

/*
int cont, valor[3];

//Usuário atribui os valores
for (cont = 0; cont < 3; cont++)
{
	printf("\nDigite o %dº valor: ", cont + 1);
	scanf("%d", &valor[cont]);
}

//Sistema devolve na tela a lista 
for (cont = 0; cont < 3; cont++)
{
printf("\n%d", valor[cont]);
}
*/	

/*
Faça um programa que receba como dados de entrada 5 números inteiros e mostre como resultado:
A: A lista com os números digitados
B: A média dos números digitados
Obs: Utilizar no máximo 2 variáveis e 1 vetor;
*/
/*
int cont;
float soma, valor[5];

//Usuário atribui os valores
for (cont = 0; cont < 5; cont++)
{
	printf("\nDigite o %dº valor: ", cont + 1);
	scanf("%f", &valor[cont]);
}

//Soma todos os valores
for (cont = 0; cont < 5; cont++)
{
	soma += valor[cont];
}

//Sistema devolve na tela a lista 
system("clear");
for (cont = 0; cont < 5; cont++)
{
printf("\nO %dº valor digitado foi: %.2f",cont + 1, valor[cont]);
}

//Sistema devolve a média dos valores digitados
printf("\n\nA média dos valores digitados é: %.2f", soma / cont);
*/

/*
faça um programa que receba como dados de entrada 5 números inteiros 
e mostre como resultado:
A: A lista com os números digitados
B: A lista com os números pares digitados
C: A lista com os números impares digitados
obs: Utilizar obrigatoriamente 3 vetores
*/
/*
int numeros[5], pares[5], impares[5], stop;
int cont, contPar = 0, contImpar = 0;

for ( cont = 0; cont < 5; cont++)
{
	printf("Digite um número qualquer: ");
	scanf("%d", &numeros[cont]);
}

for ( cont = 0; cont < 5; cont++)
{
	if (numeros[cont] % 2 == 0)
	{
		pares[contPar] = numeros[cont];
		contPar++;
	}else
	{
		impares[contImpar] = numeros[cont];
		contImpar++;
	}
}	

	system("clear");
	printf("lista dos numeros digitados:");

	for (cont = 0; cont < 5; cont++)
	{
		printf("\n%d", numeros[cont]);
	}

	printf("\nLista dos números pares:");
	for (cont = 0; cont < contPar; cont++)
	{
		printf("\n%d", pares[cont]);
	}
	printf("\nLista dos números impares:");

	for ( cont = 0; cont < contImpar; cont++)
	{
		printf("\n%d", impares[cont]);
	}

	printf("\nF.I.M");
*/
/*
faça um programa que receba como dados de entrada o valor do salário 
calculando o desconto de inss que é de 11% de 5 funcionários e mostre como resultado:
A: A lista com os salários e os descontos
B: Qual foi o maior salário
C: A média dos descontos
*/
/*
const float INSS = 0.89;
float salario[5], maiorSalario = 0;
int cont = 0;

//recebe os dados dos salários
for ( cont = 0; cont < 5; cont++)
{
	printf("\nDigite o valor do %dº salário: ", cont + 1 );
	scanf("%f", &salario[cont]);
}

//calcula desconto do INSS
for ( cont = 0; cont < 5; cont++)
{
	salario[cont] *= INSS;
}

//calcula maior salário
for (cont = 0; cont < 5; cont++)
{
	if (salario[cont] > maiorSalario)
	{
		maiorSalario = salario[cont];
	}	
}

system("clear");

//mostra Desconto do INSS para usuário
for ( cont = 0; cont < 5; cont++)
{
	printf("\n%dº Salário pós desconto do INSS: R$%.2f\n", cont + 1, salario[cont]);
}

//mostra Maior salário
printf("\nO maior salário é: R$%.2f", maiorSalario);
*/
/*
#define QUANTALUNO 1
#define MAXLETRAS 50

char nomeAluno[QUANTALUNO][MAXLETRAS];
int cont = 0;


for (cont = 0; cont < 1; cont++)
{
printf("\nDigite o nome do %dº aluno: ", cont + 1);
fgets(nomeAluno[cont], MAXLETRAS, stdin);
}

for (cont = 0; cont < 1; cont++)
{
printf("\nO nome do %dº aluno é: %s", cont + 1, nomeAluno[cont]);
}
*/
