// Exercício D do/while versão 1 - Capítulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	int S, I;
	
	printf("\n Somatório dos valores Pares na faixa de 1 até 500 \n");
	
	S=0;
	I=2;
	
	do
	{
	  S=S+I;
	  I=I+2;	
	}
	while(I<=500);
	
	printf("\n\n \t O Somatório é: %i \n\n\n", S);
	
	system("Pause");
}
