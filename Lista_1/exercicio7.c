#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	


/*7. Escreva um programa que leia o nome do funcionário, o sexo (F ou M), o número de
matrícula do funcionário, o número de horas trabalhadas, o valor que recebe por hora
e calcule o salário desse funcionário. A seguir, mostre todos os dados na tela, os dados
de entrada e os dados de saída.*/

char nome[50];
char sexo[1], matricula[11];
float salarioHora , salarioTotal, horasTrabalhadas;


printf ("Digite o seu nome: ");
fgets (nome, 50, stdin);

printf("Digite seu sexo (M) para masculino, (F) para feminino: ");
scanf("%s", &sexo);

printf("Digite seu número de matrícula: ");
scanf("%s", &matricula);

printf("digite quantas horas você trabalhou: ", nome);
scanf("%f",&horasTrabalhadas);

printf("digite seu salário por hora trabalhada: ", nome);
scanf("%f", &salarioHora);


printf ("funcionario: %s", nome);

printf("Sexo: %s // Número de matrícula: %s\n", sexo, matricula);

salarioTotal = horasTrabalhadas * salarioHora;
printf("Seu salário total é de: R$%.2f", salarioTotal);
}
