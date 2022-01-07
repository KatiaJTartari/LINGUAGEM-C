// Exercício C - Capítulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Programa lê matriz A e matriz B do tipo vetor com 20 números reais");
	printf("\n E apresenta o resultado da subtração da matriz A pela matriz B na matiz C \n\n");
	
	int I;
	float A[20], B[20], C[20];	
	
	for (I=0; I<20; I++){
        printf("Digite um valor para a matriz A: ");
        scanf("%f",&A[I]);
    }
    
    printf("\n\n");
    
    for (I=0; I<20; I++){
        printf("Digite um valor para a matriz B: ");
        scanf("%f",&B[I]);
    }
    
    for (I=0; I<20; I++){
    C[I] = A[I] - B[I];
    }
    
    printf("\n\n");
    
    for (I=0; I<20; I++){
        printf("%.2f \n", C[I]);
    }
    
    system("Pause");
}
	
	
		

