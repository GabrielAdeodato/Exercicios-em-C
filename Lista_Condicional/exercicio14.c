#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");

//14. Reescreva o algoritmo do exercicio 13 utilizando o comando switch.

int mes;
printf ("Digite um número entre 1 e 12: ");
scanf ("%d", &mes);

switch (mes){
	case 1:
	    printf ("janeiro");
	    break;
	    
	case 2:
	    printf ("fevereiro");
	    break;
	    
	case 3:
	    printf ("março");
	    break;
	    
	case 4:
	    printf ("abril");
	    break;
	    
	case 5:
	    printf ("maio");
	    break;
	    
	case 6:
	    printf ("junho");
	    break;
	    
	case 7:
	    printf ("julho");
	    break;
	    
	case 8:
	    printf ("agosto");
	    break;
	    
	case 9:
	    printf ("setembro");
	    break;
	    
	case 10:
	    printf ("outubro");
	    break;
	    
	case 11:
	    printf ("novembro");
	    break;
	    
	case 12:
	    printf ("dezembro");
	    break;
	    
	default:
	    break;
}
}
