#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");


/*7. Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior
do que A, e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem
positivos e se a variável A for par escrever a mensagem "Valores aceitos", senão
escrever "Valores nao aceitos".*/

int valorA, valorB, valorC, valorD;
printf("Digite o valor A: ");
scanf("%d", &valorA);
printf("Digite o valor B: ");
scanf("%d", &valorB);
printf("Digite o valor C: ");
scanf("%d", &valorC);
printf("Digite o valor D: ");
scanf("%d", &valorD);
if(valorB > valorC && valorD > valorA && (valorC + valorD) > (valorA + valorB) && valorC > 0 && valorD > 0 && (valorA % 2) == 0){
	printf("Valores aceitos!");
}
else{
	printf("Valores não aceitos.");
}
}
