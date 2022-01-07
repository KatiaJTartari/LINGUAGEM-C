// Exercício L - Capítulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Programa lê 10 elementos inteiros e apresenta a metade exata de cada um dos elementos \n\n");
	
	int A[10], B[10], I;
	
	printf("Digite 10 valores: \n");
	for(I=0; I<10; I++){
	    scanf("%d", &A[I]);
	}
	
	for(I=0; I<10; I++){
		B[I] = A[I] / 2;
	}
	
	printf("\n\n");
	
	for(I=0; I<10; I++){
		printf("%d  %d \n", A[I], B[I]);
    }
    
    getch();
}
