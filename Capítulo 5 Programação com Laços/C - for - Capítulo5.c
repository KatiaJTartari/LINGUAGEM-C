// Exerc�cio C for - Cap�tulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int S, I;
	
	printf("\n Soma dos Cem Primeiros N�meros Naturais \n");
	
	S=0;
	
	for(I=1; I<=100; I++)
	{
	  S=S+I;	
	}
	
	printf("\n\n \t A soma �: %i \n\n", S);
	
	getch();
} 
