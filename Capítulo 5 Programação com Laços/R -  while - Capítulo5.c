// Exerc�cio R while - Cap�tulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int N, Maior, Menor;
	
	printf("\n Programa l� valores positivos inteiros at� que um valor negativo seja informado");
	printf("\n \t Ao final � apresentado o maior e o menor valores informados \n\n");
	
	printf("\n Digite um Valor: ");
	scanf("%d", &N);
	
	Maior=N;
	Menor=N;
	
	while(N>=0){
	  if(Maior<N){ //ou (N>Maior)
	  	Maior=N;
	  }
	  if(Menor>N){ //ou (N<Menor)
	  	Menor=N;
	  }	
	  
	  printf("\n Digite um Valor: ");
	  scanf("%d", &N);
	}
	
	printf("\n\n O Maior valor � %d e o Menor Valor � %d \n", Maior, Menor);
	
	printf("\n\n Este programa ser� encerrado em 3 segundos");
    sleep(3000);
}
