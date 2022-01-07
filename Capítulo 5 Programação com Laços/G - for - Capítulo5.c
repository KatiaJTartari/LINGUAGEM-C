// Exercício G for - Capítulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int Pot, I;
	
	printf("\n Resultados das Potências de Base 3");
	printf("\n Elevado a um Expoente que varie de 0 até 15 \n\n\n");
	
	Pot=1;
		
	for(I=0; I<=15; I++){
	  printf("%d \n", Pot);
	  Pot=3*Pot;
	}
	
	printf("\n\n");
	system("Pause");
}
