// Exerc?cio E for vers?o 2 - Cap?tulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main(){

 setlocale(LC_ALL, "Portuguese");
 
 int I, Resto;
 
 printf("\n Valores ?mpares situados na faixa de 0 a 20 \n\n\n");	

 for(I=1; I<=19; I+=2){ //ou (I=1; I<=19; I=I+2)
   printf("  %i", I);
 }
 
 printf("\n\n\n");
 system("Pause");
}
