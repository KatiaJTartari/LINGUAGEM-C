// Exercício W - Capítulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Programa lê duas matrizes A e B com 10 elementos inteiros cada \n E apresenta a matriz C que é formada pelo quadrado da soma dos elementos correspondentes nas matrizes A e B \n");
	
	int A[10], B[10], C[10], I; 
	
	printf("\n Matriz A \n\n");
	for(I=1; I<=10; I++){
		printf("%2.d%c valor: ", I, 167);
		scanf("%d", &A[I]);
	}
	
	printf("\n Matriz B \n\n");
	for(I=1; I<=10; I++){
		printf("%2.d%c valor: ", I, 167);
		scanf("%d", &B[I]);
	}
	
	for(I=1; I<=10; I++){
		C[I]=pow(A[I]+B[I],2);
	}
	
	printf("\n\n");
	for(I=1; I<=10; I++){
		printf("%d \n", C[I]);
	}
	
	getch();
}
