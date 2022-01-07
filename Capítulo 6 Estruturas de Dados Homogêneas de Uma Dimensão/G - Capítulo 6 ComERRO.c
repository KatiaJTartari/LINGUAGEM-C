// Exercício G - Capítulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nPrograma lê duas matrizes com 20 e 30 nomes cada e apresenta como resultado a junção dessas duas matrizes\n\n");
	
	int I; 
	//char A[20], B[30], C[50];
	char A[20][15], B[30][15], C[50][15];
	
	for (I=1; I<=20; I++){
		printf("%2.d%c nome: ", I, 167);
		//fflush(stdin); //limpa o buffer (memória) do teclado
        //scanf("%s",A[I]);
        gets(A[I]);
    }
    
    printf("\n\n");
    
    for (I=1; I<=30; I++){
    	printf("%2.d%c nome: ", I, 167);
    	//fflush(stdin); //limpa o buffer (memória) do teclado
        //scanf("%s",B[I]);
        gets(B[I]);
    }
        
    for(I=1; I<=50; I++){
		if(I<=20)
		    C[I][15] = A[I][15];
		    else 
		    C[I][15] = B[I-20][15];
    }
		    
	printf("\n\n A matriz C apresenta a junção das duas matrizes: \n");
	for (I=1; I<=50; I++){
        printf("%s \n", C[I]);
    } 	
	
	system ("PAUSE");    
}
