// Exerc�cio F while - Cap�tulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");
   
   int I, Resto;
   
   printf("\n Divis�veis por 4 na faixa de 1 a 199 \n");
   
   I=1;
   
   while(I<200)
   {
   	 Resto=I%4; //ou sem o operdor mod %: Resto=I-4*(I/4);
   	 if(Resto==0)
   	 {
   	   printf("\n O valor %i � divis�vel por 4 \n", I);	
	 }
	 I=I+1;
   }

getch();	
}
