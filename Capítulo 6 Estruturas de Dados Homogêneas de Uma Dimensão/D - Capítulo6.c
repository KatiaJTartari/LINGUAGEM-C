// Exercício D - Capítulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Programa lê 15 números inteiros e apresenta-os ao quadrado \n\n");
	
	int I;
	int A[15], B[15];	
	
	for (I=0; I<15; I++){
        printf("Digite um número: ");
        scanf("%d",&A[I]);
    }
    
    for (I=0; I<15; I++){
 // ou  B[I] = A[I] * A[I];
        B[I] = pow(A[I],2);
    }
    
    printf("\n\n");
    
    for (I=0; I<15; I++){
        printf("%d ao quadrado = %d \n", A[I], B[I]);
    }
    
    system("Pause");
}
	
	
		
	
