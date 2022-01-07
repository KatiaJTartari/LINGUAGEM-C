// Exercício E while versão 2 - Capítulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main(){

 setlocale(LC_ALL, "Portuguese");
 
 int I, Resto;
 
 printf("\n Valores Ímpares situados na faixa de 0 a 20 \n\n\n");	

 I=1;
 
 while(I<=19){
   printf("  %i", I);
   I=I+2; //ou I+=2;
 }

 printf("\n\n\n");
 system("Pause");
}
