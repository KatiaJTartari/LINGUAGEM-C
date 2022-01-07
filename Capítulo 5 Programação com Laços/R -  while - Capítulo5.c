// Exercício R while - Capítulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int N, Maior, Menor;
	
	printf("\n Programa lê valores positivos inteiros até que um valor negativo seja informado");
	printf("\n \t Ao final é apresentado o maior e o menor valores informados \n\n");
	
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
	
	printf("\n\n O Maior valor é %d e o Menor Valor é %d \n", Maior, Menor);
	
	printf("\n\n Este programa será encerrado em 3 segundos");
    sleep(3000);
}
