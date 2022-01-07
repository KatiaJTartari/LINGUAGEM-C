// Exercício T - Capítulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Programa lê duas matrizes A (aceita apenas valores divisíveis por 2 e 3) e B (aceita apenas valores múltiplos de 5) com 10 elementos cada, o resultado é a junção das matrizes A e B\n");
	
	int A[10], B[10], C[20], I, R2, R3, R5;
	
	printf("\n Matriz A \n\n");
	for(I=1; I<=10; I++){
		do{
		    printf("%2.d%c valor: ", I, 167);
		    scanf("%d", &A[I]);
		    R2=A[I]-2*(A[I]/2);
		    R3=A[I]-3*(A[I]/3);
		}while(R2!=0 && R3!=0);
	} 
	
	printf("\n Matriz B \n\n");
	for(I=1; I<=10; I++){
		do{
		    printf("%2.d%c valor: ", I, 167);
		    scanf("%d", &B[I]);
		    R5=B[I]-5*(B[I]/5);
		}while(R5!=0);
	} 
	
	for(I=1; I<=10; I++){
		C[I] = A[I];
		C[I+10] = B[I];
	}
	
	printf("\n Resultado da matriz C: \n");
	for(I=1; I<=20; I++){
		printf("%d \n", C[I]);
	}
	
	getch();
}
