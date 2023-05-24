#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
/*18. Faça um programa para verificar se determinado número inteiro lido é divisível por 3 ou
5, mas não simultaneamente pelos dois.*/
	
	int numero;
	
printf("Digite um número qualquer: ");
scanf("%d", &numero);
	

if(numero % 3 == 0 && numero % 5 != 0){
	
	printf("O numero %d é divisivel por 3 e não é divisivel por 5.", numero);	
}
 
else if(numero % 3 != 0 && numero % 5 == 0){
	
	printf("O numero %d é divisivel por 5 e não é divisivel por 3.", numero);	
}

else if(numero % 3 == 0 && numero % 5 == 0){
	
	printf("O numero %d é ao mesmo tempo divisivel por 3 e por 5.", numero);
}
else{
	printf("O Número %d não divisivel por 3 e/ou por 5", numero);
}
}

