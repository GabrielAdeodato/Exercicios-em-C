#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
/*17. Fa�a um programa que mostre ao usu�rio um menu com quatro op��es de opera��es
matem�ticas (as opera��es b�sicas, por exemplo). O usu�rio escolhe uma das op��es, e
o seu programa pede dois valores num�ricos e realiza a opera��o, mostrando o
resultado.*/

int resultado, numero1, numero2;
char operacao;
    
printf ("Insira uma das 4 opera��es b�sicas: (+) (-) (*) (/): ");
scanf ("%c", &operacao);

printf ("Insira o primero n�mero e o segundo em ordem: ");
scanf ("%d%d", &numero1, &numero2);


switch (operacao){
    case '+':
    	resultado = numero1 + numero2;
    	printf ("O resultado �: %d", resultado);
    break;
        
    case '-':
        resultado = numero1 - numero2;
        printf ("O resultado �: %d", resultado);
        break;
    case '*':
        resultado = numero1 * numero2;
        printf ("O resultado �: %d", resultado);
        break;
    case '/':
        resultado = numero1 / numero2;
        printf ("O resultado �: %d", resultado);
        break;
    default: 
    	printf ("Opera��o n�o existente");
        break;
    }
}
