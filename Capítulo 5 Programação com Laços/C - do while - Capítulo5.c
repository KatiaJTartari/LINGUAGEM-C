// Exerc�cio C do/while - Cap�tulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int S, I;
	
	printf("\n Soma dos Cem Primeiros N�meros Naturais \n");
	
	S=0;
	I=1;
	
	do
	{//in�cio do la�o/repeti��o
	  S=S+I;
	  I=I+1; // ou I++ ou ++I ou I+=1		
	}//fim do la�o/repeti��o
	while(I<=100); //tem �;�
	
	printf("\n\n \t A soma �: %i \n\n", S);
	
	getch();
} 
