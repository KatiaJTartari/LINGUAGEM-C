// Exerc�cio N while vers�o 1 - Cap�tulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main(){
	
	int Total;
	float Somatorio, Media, Num;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n \t Somat�rio, M�dia e Total de Valores Lidos \n");
	printf("O programa encerra quando fornecido um valor negativo (menor que zero). \n\n");
	
	Somatorio=0;
	Total=0;
	
	printf("\n Digite um N�mero: ");
	scanf("%f", &Num);
	
	while(Num>=0){
	  Somatorio=Somatorio+Num;
	  Total=Total+1;
	  printf("\n Digite um n�mero: ");
	  scanf("%f", &Num);	
	}
	
	if(Total>0){
	Media=Somatorio/Total;
    }
    
	printf("\n\n O Somat�rio �: %5.1f a M�dia �: %5.1f e o Total de Valores �: %i \n\n", Somatorio, Media, Total);
		
	return(0);
}
