#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");

/*15. Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 e
imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1, segunda-
feira, se 2, e assim por diante.*/

int dia;
printf ("Digite um número entre 1 e 7: ");
scanf ("%d", &dia);

switch (dia){
    case 1:
        printf ("Domingo");
        break;
        
    case 2:
        printf ("Segunda");
        break;
        
    case 3:
        printf ("Terça");
        break;
        
    case 4:
        printf ("Quarta");
        break;
        
    case 5:
        printf ("Quinta");
        break;
        
    case 6:
        printf ("Sexta");
        break;
        
    case 7:
        printf ("Sabado");
        break;
    
    default:
        break;
}
}
