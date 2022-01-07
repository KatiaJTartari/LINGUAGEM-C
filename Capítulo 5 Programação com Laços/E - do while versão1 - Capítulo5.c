// Exercício E do/while versão 1 - Capítulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main(){

 setlocale(LC_ALL, "Portuguese");
 
 int I, Resto;
 
 printf("\n Valores Ímpares situados na faixa de 0 a 20 \n\n\n");	

 I=0;
 
 do{
   Resto=I%2; //ou obtem-se o resto sem o operador MOD %: Resto=I-2*(I/2);
   if(Resto!=0){
   	 printf("  %i", I);
   }	
   I=I+1; //ou I++; ou ++I; ou I+=1;
  }while(I<=20);
 
 printf("\n\n\n");
 system("Pause");
}
