#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
/*16. Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a
qual cidade pertence, considerando só os seguintes valores:*/
		
int ddd;
    
printf ("Digite um DDD (xx) e descubra a cidade correspondente: ");
scanf ("%d", &ddd);
      
switch (ddd){
	case 61:
    	printf ("Esse ddd é de: brasília");
    break;
        
    case 71:
        printf ("Esse ddd é de: Salvador");
    break;
        
    case 11: 
        printf ("Esse ddd é de: São Paulo");
    break;
        
    case 21:
        printf ("Esse ddd é de: Rio de Janeiro");
    break;
        
    case 32:
        printf ("Esse ddd é de: Juiz de Fora");
    break;
        
    case 19:
        printf ("Esse ddd é de: Campinas");
    break;
        
    case 27:
        printf ("Esse ddd é de: Vitória");
    break;
        
    case 31: 
        printf ("Esse ddd é de: Belo Horizonte");
    break;

    default:
    	printf ("Cidade no Brasil sem identificação");
    break;
    }
}
