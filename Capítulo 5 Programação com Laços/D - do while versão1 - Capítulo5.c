// Exerc�cio D do/while vers�o 1 - Cap�tulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	int S, I;
	
	printf("\n Somat�rio dos valores Pares na faixa de 1 at� 500 \n");
	
	S=0;
	I=2;
	
	do
	{
	  S=S+I;
	  I=I+2;	
	}
	while(I<=500);
	
	printf("\n\n \t O Somat�rio �: %i \n\n\n", S);
	
	system("Pause");
}
