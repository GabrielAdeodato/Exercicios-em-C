#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
/*18. Fa�a um programa para verificar se determinado n�mero inteiro lido � divis�vel por 3 ou
5, mas n�o simultaneamente pelos dois.*/
	
	int numero;
	
printf("Digite um n�mero qualquer: ");
scanf("%d", &numero);
	

if(numero % 3 == 0 && numero % 5 != 0){
	
	printf("O numero %d � divisivel por 3 e n�o � divisivel por 5.", numero);	
}
 
else if(numero % 3 != 0 && numero % 5 == 0){
	
	printf("O numero %d � divisivel por 5 e n�o � divisivel por 3.", numero);	
}

else if(numero % 3 == 0 && numero % 5 == 0){
	
	printf("O numero %d � ao mesmo tempo divisivel por 3 e por 5.", numero);
}
else{
	printf("O N�mero %d n�o divisivel por 3 e/ou por 5", numero);
}
}

