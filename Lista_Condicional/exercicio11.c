#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	

/*11. Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
seguintes médias de acordo com um valor numérico digitado pelo usuário e mostrado na
tabela a seguir:*/

int operacao;
float x, y, z, resultado;
   
    printf ("Insira 3 numeros: ");
    scanf ("%f%f%f", &x, &y, &z);
    printf ("\nInsira a operação desejada: 1 = Geométrica / 2 = Ponderada / 3 = Harmônica / 4 = Aritmética: ");
    scanf ("%d", &operacao);
    switch (operacao){
    	
    case 1: 
    resultado = x * y * z;
    printf ("A média geometrica é: %.2f", resultado);
    break;
    
    case 2: 
    resultado = (x + 2 * y + 3 * z)/6;
    printf ("A média ponderada é: %.2f", resultado);
    break;
    
    case 3:
    resultado = 1/((1/x) + (1/y) + (1/z));
    printf ("A média harmonica é: %.2f", resultado);
    break;
    
    case 4: 
    resultado = (x + y + z)/3;
    printf ("A média aritmetica é: %.2f", resultado);
    break;
    }
}

