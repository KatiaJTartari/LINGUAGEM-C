// Exercício I while - Capítulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int I, Anterior, Proximo, Atual;
	
	printf("\n Sequência de Fibonacci até o Décimo Quinto Termo \n\n\n");
	
	Anterior=0;
	Atual=1;
	
	I=1;
	
	while(I<=15){
	  printf("  %d", Atual);
	  Proximo=Atual+Anterior;
	  Anterior=Atual;
	  Atual=Proximo;
	  I=I+1; //ou I++ ou ++I ou I+=1	
	}
	
	printf("\n\n");
	return(0);
}
