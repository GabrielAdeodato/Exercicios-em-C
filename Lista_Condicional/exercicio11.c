#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	

/*11. Fa�a um programa que leia tr�s n�meros inteiros positivos e efetue o c�lculo de uma das
seguintes m�dias de acordo com um valor num�rico digitado pelo usu�rio e mostrado na
tabela a seguir:*/

int operacao;
float x, y, z, resultado;
   
    printf ("Insira 3 numeros: ");
    scanf ("%f%f%f", &x, &y, &z);
    printf ("\nInsira a opera��o desejada: 1 = Geom�trica / 2 = Ponderada / 3 = Harm�nica / 4 = Aritm�tica: ");
    scanf ("%d", &operacao);
    switch (operacao){
    	
    case 1: 
    resultado = x * y * z;
    printf ("A m�dia geometrica �: %.2f", resultado);
    break;
    
    case 2: 
    resultado = (x + 2 * y + 3 * z)/6;
    printf ("A m�dia ponderada �: %.2f", resultado);
    break;
    
    case 3:
    resultado = 1/((1/x) + (1/y) + (1/z));
    printf ("A m�dia harmonica �: %.2f", resultado);
    break;
    
    case 4: 
    resultado = (x + y + z)/3;
    printf ("A m�dia aritmetica �: %.2f", resultado);
    break;
    }
}

