// Exercício X - Capítulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Programa lê uma matriz A com 6 elementos reais \n E apresenta uma matriz B onde cada posição sua de índice ímpar é atribuída com um elemento de índice par da matriz A e cada posição sua de índice par é atribuída com um elemento de índice ímpar da matriz A \n");
	
	int I, R;
	float A[7], B[7]; 
    /*Observação Importante: foi necessário declarar os vetores com 7 posições para ser apresentado 
    através do printf o elemento da posição 6 tanto para a posição A[6] como para a posição B[5]*/ 
		
	printf("\n Digite 6 valores para a matriz A: \n");
	for(I=1; I<=6; I++){
	    scanf("%f", &A[I]);
    }
    
    for(I=1; I<=6; I++){
	    R=I-2*(I/2);
		if(R!=0) 
		  B[I]=A[I+1];
		  else
		  B[I]=A[I-1];
	}
		     
	for(I=1; I<=6; I++){
		printf("\n Matriz A %.2f  Matriz B %.2f \n", A[I], B[I]);
	}
		
	return;
}
