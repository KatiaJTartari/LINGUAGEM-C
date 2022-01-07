// Exercício 3.i versão2- Capítulo 4

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int A,B, C, D, E, Maior, Menor;
	
	printf("\n\t MAIOR VALOR E MENOR VALOR \n\n");
	
	printf("\n Digite cinco valores: \n");
	scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
	
	Maior=A;
	if(Maior<B){
	  Maior=B;
	}
	
	if(Maior<C){
	  Maior=C;
	}
	
	if(Maior<D){
	  Maior=D;
	}
	
	if(Maior<E){
	  Maior=E;
	}
	
	Menor=A;
	if(Menor>B){
	  Menor=B;
	}
	
	if(Menor>C){
	  Menor=C;
	}
	
	if(Menor>D){
      Menor=D;
	}
	
	if(Menor>E){
	  Menor=E;
	}
	
	printf("\n O maior valor é %d e o menor valor é %d \n\n", Maior, Menor);
	
	getch();
	
}
