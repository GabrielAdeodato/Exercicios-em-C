


#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
/*12. Leia 2 valores com uma casa decimal (x e y), que devem representar as
coordenadas de um ponto em um plano. A seguir, determine qual o quadrante
ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na
origem (x = y = 0). Se o ponto estiver na origem, escreva a mensagem
“Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”,
conforme for a situação.*/

int y,x;

printf("Insira o valor de X: ");
scanf("%d",&x);

printf("Insira o valor de Y: ");
scanf("%d",&y);

if (x>0 && y>0){
        printf("Coordenada no quadrante: Q1");
    }else if(x<0 && y>0){
    	
        printf("Coordenada no quadrante: Q2");
    }
    else if (x<0 && y<0){
        printf("Coordenada no quadrante: Q3");
        
    }else if(x>0 && y<0){
        printf("Coordenada no quadrante: Q4");
        
    }else if (x == 0 && y ==0){
        printf("Origem");
        
    }else if (x == 0){
        printf("Eixo X");
        
    }else if (y==0){
    	
        printf("Eixo Y");
    }
}
