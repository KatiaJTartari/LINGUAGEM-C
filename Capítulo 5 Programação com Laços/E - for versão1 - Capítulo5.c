// Exerc�cio E for vers�o 1 - Cap�tulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main(){

 setlocale(LC_ALL, "Portuguese");
 
 int I, Resto;
 
 printf("\n Valores �mpares situados na faixa de 0 a 20 \n\n\n");	

 for(I=0; I<=20; I++){
   Resto=I%2; //ou obtem-se o resto sem o operador MOD %: Resto=I-2*(I/2);
   if(Resto!=0){
   	 printf("  %i", I);
   }	
 }
 
 printf("\n\n\n");
 system("Pause");
}
