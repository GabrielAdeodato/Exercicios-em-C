#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	/*20. Leia quatro números (N1, N2, N3, N4), cada um deles com uma casa decimal,
correspondente às quatro notas de um aluno. Calcule a média com pesos 2, 3, 4 e 1,
respectivamente, para cada uma destas notas e mostre esta média acompanhada pela
mensagem "Media: ". Se esta média for maior ou igual a 7.0, imprima a
mensagem "Aluno aprovado.". Se a média calculada for inferior a 5.0, imprima a
mensagem "Aluno reprovado.". Se a média calculada for um valor entre 5.0 e 6.9,
inclusive estas, o programa deve imprimir a mensagem "Aluno em exame.". No caso do
aluno estar em exame, leia um valor correspondente à nota do exame obtida pelo aluno.
Imprima então a mensagem "Nota do exame: " acompanhada pela nota digitada.
Recalcule a média (some a pontuação do exame com a média anteriormente calculada e
divida por 2). e imprima a mensagem "Aluno aprovado." (caso a média final seja 5.0 ou
mais ) ou "Aluno reprovado.", (caso a média tenha ficado 4.9 ou menos). Para estes dois
casos (aprovado ou reprovado após ter pego exame) apresente na última linha uma
mensagem "Media final: " seguido da média final para esse aluno.*/

	
float n1, n2, n3, n4, media, prova;
	
printf("Digite o n1: ");
scanf("%f", &n1);
	
printf("Digite o n2: ");
scanf("%f", &n2);
	
printf("Digite o n3: ");
scanf("%f", &n3);
	
printf("Digite o n4): ");
scanf("%f", &n4);
	
media = (n1*2 + n2*3 + n3*4 + n4*1) / 10;
	
if(media >= 7.0){
	printf("O aluno foi aprovado com média: %.1f.", media);
}
	
else if(media < 5.0){
	printf("O aluno foi reprovado com média: %.1f.", media);
}
	
else if(media >= 5.0 && media < 7.0){
	printf("Aluno em exame.\n");
		
	printf("Digite a nota do exame: ");
	scanf("%f", &prova);
		
	media = (media + prova) / 2;
		
	printf("A Média final do aluno é: %.1f\n", media);
			
if(media >= 5.0){
	printf("Aluno aprovado após o exame.");
		
}	else{
		printf("Aluno aprovado após o exame.");
	}
}

}
