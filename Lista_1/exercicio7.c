#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	


/*7. Escreva um programa que leia o nome do funcion�rio, o sexo (F ou M), o n�mero de
matr�cula do funcion�rio, o n�mero de horas trabalhadas, o valor que recebe por hora
e calcule o sal�rio desse funcion�rio. A seguir, mostre todos os dados na tela, os dados
de entrada e os dados de sa�da.*/

char nome[50];
char sexo[1], matricula[11];
float salarioHora , salarioTotal, horasTrabalhadas;


printf ("Digite o seu nome: ");
fgets (nome, 50, stdin);

printf("Digite seu sexo (M) para masculino, (F) para feminino: ");
scanf("%s", &sexo);

printf("Digite seu n�mero de matr�cula: ");
scanf("%s", &matricula);

printf("digite quantas horas voc� trabalhou: ", nome);
scanf("%f",&horasTrabalhadas);

printf("digite seu sal�rio por hora trabalhada: ", nome);
scanf("%f", &salarioHora);


printf ("funcionario: %s", nome);

printf("Sexo: %s // N�mero de matr�cula: %s\n", sexo, matricula);

salarioTotal = horasTrabalhadas * salarioHora;
printf("Seu sal�rio total � de: R$%.2f", salarioTotal);
}
