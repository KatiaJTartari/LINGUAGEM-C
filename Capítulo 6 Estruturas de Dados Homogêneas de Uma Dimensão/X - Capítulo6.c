// Exerc�cio X - Cap�tulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Programa l� uma matriz A com 6 elementos reais \n E apresenta uma matriz B onde cada posi��o sua de �ndice �mpar � atribu�da com um elemento de �ndice par da matriz A e cada posi��o sua de �ndice par � atribu�da com um elemento de �ndice �mpar da matriz A \n");
	
	int I, R;
	float A[7], B[7]; 
    /*Observa��o Importante: foi necess�rio declarar os vetores com 7 posi��es para ser apresentado 
    atrav�s do printf o elemento da posi��o 6 tanto para a posi��o A[6] como para a posi��o B[5]*/ 
		
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
