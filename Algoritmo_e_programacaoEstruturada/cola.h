#include<stdio.h>
/*
struct dadosEmpregados
{
	char nome[50];
	float salario;
}empregados_info[5];
*/
void escrever_ola_mundo(){
    printf("hello world");
}

float somar(float somar1, float somar2){

    float soma = somar1 + somar2;

    printf("\nO valor da soma é: %0.2f", soma);

}

float subtrair(float subtrair1, float subtrair2){

    float subtracao = subtrair1 - subtrair2;

    printf("\nO valor da subtração é: %0.2f", subtracao);

}

float multiplicar(float multiplicar1, float multiplicar2){

    float multiplicacao = multiplicar1 * multiplicar2;

    printf("\nO valor da multiplicação é: %0.2f", multiplicacao);

}

float dividir(float divisor, float dividendo){

    float divisao = divisor / dividendo;

    printf("\nO valor da divisão é: %0.2f", divisao);
} 

float descontar(float d1, float d2){

    float d = d1 * d2;

    printf("O valor do serviço com desconto é: %0.2f reais", d);

    return d;
}

void ordena_nomes_decrescente(char nomes[][50]){
	int i,j;
	char aux[30];
	for(i=0;i<10;i++){
    for(j=i+1;j<10;j++){
     if (stricmp(nomes[i],nomes[j])<0){
         strcpy(aux,nomes[i]);
         strcpy(nomes[i],nomes[j]);
         strcpy(nomes[j],aux);
      }
    }
  } 
}

void ordena_nomes_crescente(char nomes[][50]){
	int i,j;
	char aux[30];
	for(i=0;i<10;i++){
    for(j=i+1;j<10;j++){
     if (stricmp(nomes[i],nomes[j])>0){
         strcpy(aux,nomes[i]);
         strcpy(nomes[i],nomes[j]);
         strcpy(nomes[j],aux);
      }
    }
  } 
}

void exibe_nomes_lista( char nomes[][50]){
    int i;
    printf("Lista dos nomes digitados\n\n");
    for(i=0;i<10;i++){
    printf("\t%s\n",nomes[i]);
    }
}

void tela(){
	
	int L,C;
	for(L=0; L<24; L++){
		gotoxy(1,L);
		printf("%c",3);
		gotoxy(78,L);
		printf("%c",3);
	}

  for(C=0; C<78; C++){
		gotoxy(C,1);
		printf("%c",3);
		gotoxy(C,24);
		printf("%c",3);
	}
}