#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>


int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
/*10. Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela a
seguir, verifique e mostre qual a classificação dessa pessoa.*/
	
float altura,peso;

printf("Qual sua altura: ");
scanf("%f",&altura);

printf("Qual sua peso: ");
scanf("%f",&peso);

if(altura <= 1.20 && peso < 60){
    printf("Sua classificaçao é: A");
    
    
}else if(altura <= 1.20 && peso >60 && peso <90){
    printf("Sua classificaçao é: D");
        
        
}else if (altura <= 1.20 && peso >90){
    printf("Sua classificaçao é: G");  
     
     
}else if (altura >= 1.20 && altura <=1.70 && peso < 60){
    printf("Sua classificaçao é: B");
       
	    
}else if(altura >= 1.20&&altura <=1.70 && peso >60 && peso <90){
    printf("Sua classificaçao é: E");
        
		 
}else if(altura >= 1.20 && altura <=1.70 && peso>90){
    printf("Sua classificaçao é: H");
        
		 
}else if (altura >=1.70 && peso <60){
    printf("Sua classificaçao é: C");
       
	    
}else if(altura >=1.70 && peso >60 && peso <90){
    printf("Sua classificaçao é: F");
        
        
}else if (altura >= 1.70 && peso >90){
    printf("Sua classificaçao é: I");
    }		
}
