#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	


// 2. Construa um algoritmo que calcule a �rea de um c�rculo cujo raio � fornecido pelo usu�rio (use �rea= 3.14 x raio2) 

#define pi 3.14
float raio, area;
printf("Digite o raio do circulo: ");
scanf("%f", &raio);
area = (raio * raio * pi);
printf("A area de um circulo de raio %.2f eh: %.2f", raio, area);

}
