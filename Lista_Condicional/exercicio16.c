#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
/*16. Usando o comando switch, fa�a um algoritmo que leia o n�mero de DDD e informe a
qual cidade pertence, considerando s� os seguintes valores:*/
		
int ddd;
    
printf ("Digite um DDD (xx) e descubra a cidade correspondente: ");
scanf ("%d", &ddd);
      
switch (ddd){
	case 61:
    	printf ("Esse ddd � de: bras�lia");
    break;
        
    case 71:
        printf ("Esse ddd � de: Salvador");
    break;
        
    case 11: 
        printf ("Esse ddd � de: S�o Paulo");
    break;
        
    case 21:
        printf ("Esse ddd � de: Rio de Janeiro");
    break;
        
    case 32:
        printf ("Esse ddd � de: Juiz de Fora");
    break;
        
    case 19:
        printf ("Esse ddd � de: Campinas");
    break;
        
    case 27:
        printf ("Esse ddd � de: Vit�ria");
    break;
        
    case 31: 
        printf ("Esse ddd � de: Belo Horizonte");
    break;

    default:
    	printf ("Cidade no Brasil sem identifica��o");
    break;
    }
}
