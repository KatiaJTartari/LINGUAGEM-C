// Exerc�cio D for vers�o2 - Cap�tulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	int S, I, Resto;
	
	printf("\n Somat�rio dos valores Pares na faixa de 1 at� 500 \n");
	
	S=0;
		
	for(I=1; I<=500; I++)
	{
	  Resto=I%2; 
	  if(Resto==0)
	  {
	    S=S+I;
      }
    }
		
	printf("\n\n \t O Somat�rio �: %i \n\n\n", S);
	
	system("Pause");
}
