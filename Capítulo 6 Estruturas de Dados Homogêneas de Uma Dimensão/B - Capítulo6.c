// Exerc�cio B - Cap�tulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Programa l� 8 n�meros inteiros e apresenta-os multiplicados por 3 \n\n");
	
	int I;
	int A[8], B[8];	
	
	for (I=0; I<8; I++){
        printf("Digite um n�mero: ");
        scanf("%d",&A[I]);
    }
    
    for (I=0; I<8; I++){
        B[I] = A[I] * 3;
    }
    
    printf("\n\n");
    
    for (I=0; I<8; I++){
        printf("%d \n", B[I]);
    }
    
    system("Pause");
}
	
	
		
	
