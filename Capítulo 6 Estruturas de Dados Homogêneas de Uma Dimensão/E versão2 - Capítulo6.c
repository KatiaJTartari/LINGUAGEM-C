// Exerc�cio E (Vers�o 2) - Cap�tulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Programa l� 15 n�meros inteiros e apresenta o resultado da fatorial de cada valor lido  \n\n");
	
	int A[15], B[15];
	int I, J, FAT;
	
	for(I=1; I<=15; I++){
	    printf("\n Digite o %2.d%c valor: ", I, 167);
	    scanf("%d", &A[I]);
    }
    
    for(I=1; I<=15; I++){
    	FAT = 1;
    	for(J=1; J<=A[I]; J++){
    		FAT = FAT * J;
        }
        B[I] = FAT;
    }
    
    printf("\n\n");
    
    for(I=1; I<=15; I++){
    	printf("\n %d Fatorial = %d \n", A[I], B[I]);
    }
	
	system("Pause");
}
