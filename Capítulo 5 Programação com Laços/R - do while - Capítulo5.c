// Exerc�cio R do/while - Cap�tulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int N, Maior, Menor;
	
	printf("\n Programa l� valores positivos inteiros at� que um valor negativo seja informado");
	printf("\n \t Ao final � apresentado o maior e o menor valores informados \n\n");
	
	printf("\n \t\t Digite um Valor: ");
	scanf("%d", &N);
	
	Maior=N;
	Menor=N;
	
	do{
	  if(N>Maior){ //ou (Maior<N)
	  	Maior=N;
	  }
	  if(N<Menor){ //ou (Menor>N)
	  	Menor=N;
	  }	
	  
	  printf("\n \t\t Digite um Valor: ");
	  scanf("%d", &N);
	}while(N>=0);
	
	printf("\n\n \t O Maior valor � %d e o Menor Valor � %d \n", Maior, Menor);
	
	printf("\n\n Este programa ser� encerrado em 3 segundos");
    sleep(3000);
}
