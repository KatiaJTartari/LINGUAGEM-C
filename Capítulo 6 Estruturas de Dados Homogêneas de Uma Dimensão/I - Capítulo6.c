// Exerc�cio I - Cap�tulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Programa l� 3 matrizes com 5 n�meros reais cada e apresenta como resultado a jun��o dessas matrizes\n\n");
	
	float A[5], B[5], C[5], D[15];
	int I;
	
	printf("Digite 5 valores para a matriz A:\n");
	for(I=0; I<5; I++){
	    scanf("%f", &A[I]);
	}
	
	printf("\n Digite 5 valores para a matriz B:\n");
	for(I=0; I<5; I++){
	    scanf("%f", &B[I]);
	}
	
	printf("\n Digite 5 valores para a matriz C:\n");
	for(I=0; I<5; I++){
	    scanf("%f", &C[I]);
	}
	
	for(I=0; I<5; I++){
	   D[I] = A[I];
	   D[I+5] = B[I];
	   D[I+10] = C[I];
    }
    
    printf("\n A matriz D apresenta o resultado da jun��o das 3 matrizes:\n");
    for(I=0; I<15; I++){
    	printf("%.2f \n", D[I]);
    }
    
    getch();
}
