// Exerc�cio O while - Cap�tulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	
	int I, J, Resto, Fat;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n \t FATORIAL DOS VALORES �MPARES NA FAIXA DE 1 AT� 10 \n\n");
	
	I=1;
	
	while(I<=10){
	  Resto=I%2; //ou sem usar o operador mod % Resto=I-2*(I/2); para obter o resto da divis�o.
	  if(Resto!=0){        
	  	Fat=1;
	  	J=1;
	  	while(J<=I){
	  	  Fat=Fat*J;
		  J=J+1; //ou J++ ou ++J ou J+=1 			
		}
		printf("\n \t\t A Fatorial de %d � %d \n", I, Fat);
	  }
	I=I+1; //ou I++ ou ++I ou I+=1 	
	}
	
   printf("\n\n\n");	
   system("Pause");	
}
