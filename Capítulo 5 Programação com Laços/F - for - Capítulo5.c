// Exercício F for - Capítulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");
   
   int I, Resto;
   
   printf("\n Divisíveis por 4 na faixa de 1 a 199 \n\n\n");
   
   I=1;
   
   for(I=1; I<=199; I++) 
   {
   	 Resto=I%4; //ou sem o operdor mod %: Resto=I-4*(I/4);
   	 if(Resto==0)
   	 {
   	   printf(" \t\t %i \n", I);	
	 }
   }
   
getch();	
}
