#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
//ALGO DANDO ERRADO, SE UM DIA EU ABRIR ISSO OUTRA VEZ, CORRIGIR
int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
/*21. Fa�a um programa que leia os coeficientes de uma equa��o do segundo grau. Em
seguida, calcule e mostre as ra�zes dessa equa��o, lembrando que as ra�zes s�o
calculadas como
em que ? = b� � 4 * a * c e ax�+ bx + c = 0 representa uma equa��o do segundo grau. A vari�vel
a tem de ser diferente de zero. Caso seja igual, imprima a mensagem �N�o � equa��o de
segundo grau�. Do contr�rio, imprima:
� Se ? < 0, n�o existe real. Imprima a mensagem �N�o existe raiz�.
� Se ? = 0, existe uma raiz real. Imprima a raiz e a mensagem �Raiz �nica�.
� Se ? > 0, existem duas ra�zes reais. Imprima as ra�zes.*/


float coeficienteA, coeficienteB, coeficienteC, delta, raiz1, raiz2;
	

printf("Digite o coeficiente a: ");
scanf("%f", &coeficienteA);
	
printf("Digite o coeficiente b: ");
scanf("%f", &coeficienteB);
	
printf("Digite o coeficiente c: ");
scanf("%f", &coeficienteC);

if(coeficienteA == 0){
	printf("N�o � equa��o de segundo grau.\n");
}
	
delta = pow(coeficienteB, 2) - 4 * coeficienteA * coeficienteC;
raiz1 = (-coeficienteB + sqrt(delta)) / 2 * coeficienteA;
raiz2 = (-coeficienteB - sqrt(delta)) / 2 * coeficienteA;
	
	
if(delta < 0){
	printf("n�o existe raiz");
	
}
else if(delta = 0){
	printf("Raiz �nica");

}
else{	
	printf("A raiz 1 �: %.2f\nA raiz 2 �: %.2f", raiz1, raiz2);
	
}

}


