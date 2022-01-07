// Exercício N do/while versão 2 - Capítulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main(){
	
	int Total;
	float Somatorio, Media, Num;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n \t Somatório, Média e Total de Valores Lidos \n");
	printf("O programa encerra quando fornecido um valor negativo (menor que zero). \n\n");
	
	Somatorio=0;
	Total=0;
			
	do{
	  printf("\n Digite um número: ");
	  scanf("%f", &Num);
	  if(Num>=0){
	  	Somatorio=Somatorio+Num;
	    Total=Total+1;
	  }	
    }while(Num>=0);
    
    if(Total>0){
      Media=Somatorio/Total;	
	}
	
	printf("\n\n O Somatório é: %5.1f a Média é: %5.1f e o Total de Valores é: %i \n\n", Somatorio, Media, Total);
		
	return(0);
}
