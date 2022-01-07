// Exercício D do/while versão 2 - Capítulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	int S, I, Resto;
	
	printf("\n Somatório dos valores Pares na faixa de 1 até 500 \n");
	
	S=0;
	I=1;
	
	do
	{
	  Resto=I%2; 
	  if(Resto==0)
	  {
	   S=S+I;
      }
	  I=I+1;	
	}
	while(I<=500);
	
	printf("\n\n \t O Somatório é: %i \n\n\n", S);
	
	system("Pause");
}
