// Exercício A do/while - Capítulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int I, Q;
	
	printf("\n QUADRADOS DOS NÚMEROS DE 15 A 200 \n\n");
	
	I = 15;
	
	do
	{//início do laço/repetição
	  Q=pow(I,2);
	  printf("%d \n", Q);	
	  I=I+1; // ou I++ ou ++I ou I+=1
	}//fim do laço/repetição
	while(I<=200); //tem “;”
		 
    getch();//aguarda até se teclar algo
}
