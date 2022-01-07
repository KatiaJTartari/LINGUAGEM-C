// Exercício O for - Capítulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	
	int I, J, Resto, Fat;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n FATORIAL DOS VALORES ÍMPARES NA FAIXA DE 1 ATÉ 10 \n\n");
	
	for(I=1; I<=10; I++){
	  Resto=I%2;//ou sem usar o operador mod % Resto=I-2*(I/2); para obter o resto da divisão.
	  if(Resto!=0){
	  	Fat=1;
	  	for(J=1; J<=I; J++){
	  	  Fat=Fat*J;
		}
		printf("\n \t A Fatorial de %d é %d \n", I, Fat);
	  }
	}
	
   printf("\n\n\n");	
   system("Pause");	
}
