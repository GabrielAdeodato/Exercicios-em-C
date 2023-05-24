#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	
/*6. Leia 2 valores A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a
média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma
dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0. */

float nota1, nota2, mediaAluno;
printf("Digite a nota A: ");
scanf("%f", &nota1);
printf("Digite a nota B: ");
scanf("%f", &nota2);
	if(nota1 <=10 && nota2 <= 10){
		mediaAluno = ((nota1*3.5) + (nota2*7.5))/11;
		printf("A média do aluno é: %.2f", mediaAluno);
	
	}	
	else {
		printf("Nota invalida, tente novamente");
	}
}
