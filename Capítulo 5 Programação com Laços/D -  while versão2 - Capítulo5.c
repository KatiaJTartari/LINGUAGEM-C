// Exerc�cio D while vers�o 2 - Cap�tulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	int S, I, Resto;
	
	printf("\n Somat�rio dos valores Pares na faixa de 1 at� 500 \n");
	
	S=0;
	I=1;
	
	while(I<=500)
	{
	  Resto=I%2; // Resultado do resto da divis�o com o operador mod %
	            // ou sem usar o operador mod % Resto=I-2*(I/2);
	  if(Resto==0)
	  {
	   S=S+I;
      }
	  I=I+1;	
	}
	
	printf("\n\n \t O Somat�rio �: %i \n\n\n", S);
	
	system("Pause");
}
