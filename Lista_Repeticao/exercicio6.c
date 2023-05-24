#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");


/*6. Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 e
terminando em 0. Mostre uma mensagem “FIM!” após a contagem*/

int i;
for (i=10; i>=0; i--){
	printf(" %d\n", i);
}
printf("********");
printf("**FIM!**");
printf("********");

}
