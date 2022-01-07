// Exercício G while - Capítulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int Pot, I;
	
	printf("\n Resultados das Potências de Base 3");
	printf("\n Elevado a um Expoente que varie de 0 até 15 \n\n\n");
	
	Pot=1;
	I=0;
	
	while(I<=15){
	  printf("%d \n", Pot);
	  Pot=3*Pot;
	  I=I+1; //ou I++ ou ++I ou I+=1	
	}
	
	printf("\n\n");
	system("Pause");
}
