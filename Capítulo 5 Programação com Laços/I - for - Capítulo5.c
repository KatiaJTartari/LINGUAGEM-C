// Exerc�cio I for - Cap�tulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int I, Anterior, Proximo, Atual;
	
	printf("\n Sequ�ncia de Fibonacci at� o D�cimo Quinto Termo \n\n\n");
	
	Anterior=0;
	Atual=1;
	
	for(I=1; I<=15; I++){
	  printf("  %d", Atual);
	  Proximo=Atual+Anterior;
	  Anterior=Atual;
	  Atual=Proximo;
	}
	
	printf("\n\n");
	return(0);
}
