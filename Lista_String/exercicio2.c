#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	/*2. Elabora um algoritmo que valide o nome de um cor, ou seja, o usuário poderá digitar apenas
branco, verde e amarelo.*/


char cor[7];

    printf("Digite uma cor entre as três opções (branco, verde e amarelo): ");
    scanf("%s", &cor);

if(strcmp(cor,"branco") == 0 || strcmp(cor, "verde") == 0 || strcmp(cor, "amarelo") == 0){
    printf("A cor escolhida foi: %s", cor);
    
}else{
	
	printf("Cor escolhida é inválida ou não existe!");
	
}
}
