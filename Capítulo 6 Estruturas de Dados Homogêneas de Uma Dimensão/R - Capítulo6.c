// Exercício R - Capítulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Programa lê 6 elementos inteiros para as matrizes A e B \n\n Apresenta a matriz C formada pelos elementos de índice ímpar das matrizes A e B \n Apresenta a matriz D formada pelos elementos de índice par das matrizes A e B \n");
	
	int A[7], B[7], C[7], D[7], I, X, Y, J, K, R;
	/*Observação Importante: foi necessário declarar os vetores com 7 posições para ser 
	apresentado através do printf o elemento da posição A[6] para a posição D[3]*/ 
	
	printf("\n\n Insira 6 valores para a matriz A: \n");
	for(I=1; I<=6; I++){
	    scanf("%d", &A[I]);
	}
	
	printf("\n Insira 6 valores para a matriz B: \n");
	for(I=1; I<=6; I++){
	    scanf("%d", &B[I]);
	}
	
	X=1;
	Y=1;
	J=1;
	K=2;
	
	for(I=1; I<=6; I++){
		R=I-2*(I/2);
		if(R!=0){
		    C[X]=A[J];
		    C[X+3]=B[J];
		    X=X+1;
		    J=J+2;
		}
		else{
			D[Y]=A[K];
		    D[Y+3]=B[K];
		    Y=Y+1;
		    K=K+2;
		}
	}
	
	printf("\n\n");
	for(I=1; I<=6; I++){
		printf("Matriz C %d   Matriz D %d \n", C[I], D[I]);
	}
	
	system("Pause");
}
