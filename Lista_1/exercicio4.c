#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	

//4. Construa um algoritmo que a partir da leitura de dois n�meros forne�a o resto e o quociente da divis�o do primeiro pelo segundo n�mero.

int divisor, dividendo, quociente, resto;
printf("Digite o dividendo: ");
scanf("%d", &dividendo);
printf("\n Digite o divisor: ");
scanf("%d", &divisor);
quociente = (dividendo / divisor);
resto = (dividendo % divisor);
printf("O quociente da divisao �: %d. \n", quociente);
printf("O resto da divisao �: %d.", resto);

}
