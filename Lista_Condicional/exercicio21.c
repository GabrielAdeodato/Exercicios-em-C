#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
//ALGO DANDO ERRADO, SE UM DIA EU ABRIR ISSO OUTRA VEZ, CORRIGIR
int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
/*21. Faça um programa que leia os coeficientes de uma equação do segundo grau. Em
seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são
calculadas como
em que ? = b² – 4 * a * c e ax²+ bx + c = 0 representa uma equação do segundo grau. A variável
a tem de ser diferente de zero. Caso seja igual, imprima a mensagem “Não é equação de
segundo grau”. Do contrário, imprima:
• Se ? < 0, não existe real. Imprima a mensagem “Não existe raiz”.
• Se ? = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
• Se ? > 0, existem duas raízes reais. Imprima as raízes.*/


float coeficienteA, coeficienteB, coeficienteC, delta, raiz1, raiz2;
	

printf("Digite o coeficiente a: ");
scanf("%f", &coeficienteA);
	
printf("Digite o coeficiente b: ");
scanf("%f", &coeficienteB);
	
printf("Digite o coeficiente c: ");
scanf("%f", &coeficienteC);

if(coeficienteA == 0){
	printf("Não é equação de segundo grau.\n");
}
	
delta = pow(coeficienteB, 2) - 4 * coeficienteA * coeficienteC;
raiz1 = (-coeficienteB + sqrt(delta)) / 2 * coeficienteA;
raiz2 = (-coeficienteB - sqrt(delta)) / 2 * coeficienteA;
	
	
if(delta < 0){
	printf("não existe raiz");
	
}
else if(delta = 0){
	printf("Raiz única");

}
else{	
	printf("A raiz 1 é: %.2f\nA raiz 2 é: %.2f", raiz1, raiz2);
	
}

}


