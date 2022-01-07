// Exercício C do/while - Capítulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int S, I;
	
	printf("\n Soma dos Cem Primeiros Números Naturais \n");
	
	S=0;
	I=1;
	
	do
	{//início do laço/repetição
	  S=S+I;
	  I=I+1; // ou I++ ou ++I ou I+=1		
	}//fim do laço/repetição
	while(I<=100); //tem “;”
	
	printf("\n\n \t A soma é: %i \n\n", S);
	
	getch();
} 
