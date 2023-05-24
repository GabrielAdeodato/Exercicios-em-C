#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
/*17. Faça um programa que mostre ao usuário um menu com quatro opções de operações
matemáticas (as operações básicas, por exemplo). O usuário escolhe uma das opções, e
o seu programa pede dois valores numéricos e realiza a operação, mostrando o
resultado.*/

int resultado, numero1, numero2;
char operacao;
    
printf ("Insira uma das 4 operações básicas: (+) (-) (*) (/): ");
scanf ("%c", &operacao);

printf ("Insira o primero número e o segundo em ordem: ");
scanf ("%d%d", &numero1, &numero2);


switch (operacao){
    case '+':
    	resultado = numero1 + numero2;
    	printf ("O resultado é: %d", resultado);
    break;
        
    case '-':
        resultado = numero1 - numero2;
        printf ("O resultado é: %d", resultado);
        break;
    case '*':
        resultado = numero1 * numero2;
        printf ("O resultado é: %d", resultado);
        break;
    case '/':
        resultado = numero1 / numero2;
        printf ("O resultado é: %d", resultado);
        break;
    default: 
    	printf ("Operação não existente");
        break;
    }
}
