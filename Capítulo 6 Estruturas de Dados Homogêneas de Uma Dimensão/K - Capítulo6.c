// Exercício K - Capítulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Programa lê 10 números inteiros positivos e apresenta-os como valores negativo \n\n");
	
	int A[10], B[10], I;
	
	for(I=1; I<=10; I++){
		do{
		    printf("%2.d%c valor: ", I, 167);
            scanf("%d",&A[I]);
        }while(A[I] < 0);    
    }
            
    for(I=1; I<=10; I++){
	    B[I] = A[I] * (-1);
    }
           
    printf("\n\n");
    
    for(I=1; I<=10; I++){
	    printf("%2.d%c valor: %d \n", I, 167, B[I]);
	}
       
	return;
}
