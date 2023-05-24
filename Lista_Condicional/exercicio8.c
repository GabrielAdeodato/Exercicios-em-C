#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");



/*8. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o
usuário entre com o valor e o estado de destino do produto e o programa retorne o preço
final do produto acrescido do imposto do estado em que ele será vendido. Se o estado
digitado não for válido, mostrará uma mensagem de erro.  MG = 7% / SP = 12% / RJ = 15% / MS = 8% */

float valorProduto, valorFinal, impostoMG, impostoSP, impostoRJ, impostoMS;
int estado;
impostoMG = 1.07;
impostoSP = 1.12;
impostoRJ = 1.15;
impostoMS = 1.08;
printf("Qual o valor do produto que deseja comprar: ");
scanf("%f", &valorProduto);
printf("Qual o numero a frente do seu estado? MG: 1  SP: 2 RJ: 3 MS: 4: ");
scanf("%d", &estado);
switch (estado){
	case 1:
		valorFinal = valorProduto * impostoMG;
		printf("O valor final do produto é de: %.2f", valorFinal);
		break;
		
	case 2:
		valorFinal = valorProduto * impostoSP;
		printf("O valor final do produto é de: %.2f", valorFinal);
		break;
	
	case 3:
		valorFinal = valorProduto * impostoRJ;
		printf("O valor final do produto é de: %.2f", valorFinal);
		break;
			
	case 4:		
		valorFinal = valorProduto * impostoMS;
		printf("O valor final do produto é de: %.2f", valorFinal);
		break;
	
	default:
		printf("Numeração invalida");
}
}
