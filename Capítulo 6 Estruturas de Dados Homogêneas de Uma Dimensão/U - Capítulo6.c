// Exercício U - Capítulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Programa lê duas matrizes A (aceita apenas valores divisíveis por 2 ou 3) e B (aceita apenas valores não múltiplos de 5) com 12 elementos cada, o resultado é a junção das matrizes A e B\n");
	
	int A[13], B[13], C[25], I, R2, R3, R5;
	/*Observação Importante: foi necessário declarar os vetores com 13 posições e 25 posições 
	para ser apresentado através do printf o elemento da posição A[12] para a posição C[12]*/ 
	
	printf("\n Matriz A \n\n");
	for(I=1; I<=12; I++){
		do{
		    printf("%2.d%c valor: ", I, 167);
		    scanf("%d", &A[I]);
		    R2=A[I]-2*(A[I]/2);
		    R3=A[I]-3*(A[I]/3);
		}while(R2!=0 || R3!=0);
	} 
	
	printf("\n Matriz B \n\n");
	for(I=1; I<=12; I++){
		do{
		    printf("%2.d%c valor: ", I, 167);
		    scanf("%d", &B[I]);
		    R5=B[I]-5*(B[I]/5);
		}while(! R5!=0);
	}
	
	for(I=1; I<=12; I++){
		C[I] = A[I];
		C[I+12] = B[I];
	}
	
	printf("\n Resultado da matriz C: \n");
	for(I=1; I<=24; I++){
		printf("%d \n", C[I]);
	}
	
	return;
}
	
