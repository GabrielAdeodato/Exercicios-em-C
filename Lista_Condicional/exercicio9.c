#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");



/*9. Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
seguintes categorias: 5-7 infantil A / 8-10 infantil B / 11-13 juvenil A / 14-17 juvenil B / senior 18 pra cima */

int idade, infantilA, infatilB, juvenilA, juvenilB, senior;
printf("Escreva a idade do nadador: ");
scanf("%d", &idade);
if(idade <= 4){
	printf("O nadador é jovem demais para se enquadrar em categorias.");
}
else if(idade >= 5 && idade <= 7){
	printf("A categoria é: Infantil A");
}
else if(idade >= 8 && idade <= 10){
	printf("A categoria é: Infantil B");	
}
else if(idade >= 11 && idade <= 13){
	printf("A categoria é: Juvenil A");	
}
else if(idade >= 14 && idade <= 17){
	printf("A categoria é: Juvenil B");	
}
else{
	printf("A categoria é: Senior");	
}
}
