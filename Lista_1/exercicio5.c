#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	

/*5. Fazer um algoritmo para auxiliar um construtor a descobrir a quantidade de rolos e a
quantidade de metros avulsos de fios que ele precisa adquirir. Sabe-se que o
construtor tem a quantidade total de fios em metros a serem utilizados na instalação
elétrica da obra e que cada rolo de fio tem 50 metros.*/

#define TAMANHOROLO 50
int metroTotal, quantidadeRolo, fioAvulso;
printf("Digite quantos metros de fio voce precisa: ");
scanf("%d", &metroTotal);
quantidadeRolo = metroTotal / TAMANHOROLO;
fioAvulso = metroTotal % TAMANHOROLO;
printf("A quantidade de rolos necessarios sao: %d\n", quantidadeRolo);
printf("A quantidade de fios avulsos necessarios sao: %d", fioAvulso);
}
