#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>


int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
/*10. Fa�a um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela a
seguir, verifique e mostre qual a classifica��o dessa pessoa.*/
	
float altura,peso;

printf("Qual sua altura: ");
scanf("%f",&altura);

printf("Qual sua peso: ");
scanf("%f",&peso);

if(altura <= 1.20 && peso < 60){
    printf("Sua classifica�ao �: A");
    
    
}else if(altura <= 1.20 && peso >60 && peso <90){
    printf("Sua classifica�ao �: D");
        
        
}else if (altura <= 1.20 && peso >90){
    printf("Sua classifica�ao �: G");  
     
     
}else if (altura >= 1.20 && altura <=1.70 && peso < 60){
    printf("Sua classifica�ao �: B");
       
	    
}else if(altura >= 1.20&&altura <=1.70 && peso >60 && peso <90){
    printf("Sua classifica�ao �: E");
        
		 
}else if(altura >= 1.20 && altura <=1.70 && peso>90){
    printf("Sua classifica�ao �: H");
        
		 
}else if (altura >=1.70 && peso <60){
    printf("Sua classifica�ao �: C");
       
	    
}else if(altura >=1.70 && peso >60 && peso <90){
    printf("Sua classifica�ao �: F");
        
        
}else if (altura >= 1.70 && peso >90){
    printf("Sua classifica�ao �: I");
    }		
}
