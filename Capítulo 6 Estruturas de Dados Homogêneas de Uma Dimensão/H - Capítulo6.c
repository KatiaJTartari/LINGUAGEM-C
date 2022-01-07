// Exercício H - Capítulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nPrograma lê 20 números reais em uma matriz e apresenta-os de forma invertida em uma outra matriz\n\n");
	
	float A[20], B[20];
	int I;
	
	printf("Digite 20 números:\n");
	for(I=1; I<=20; I++){
 	    scanf("%f", &A[I]);
    }
    
    for(I=1; I<=20; I++){
    	B[I] = A[21-I];
   //OU B[21-I] = A[I];
    }
    
    for(I=1; I<=20; I++){
        printf("\n Matriz A: %.2f   Matriz B: %.2f \n", A[I], B[I]);
    }
    
    return;
}
