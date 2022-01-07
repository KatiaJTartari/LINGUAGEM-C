// Exercício S - Capítulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nPrograma lê duas matrizes A (aceita apenas valores pares) e B (aceita apenas valores ímpares) com 6 elementos cada, o resultado é a junção das matrizes A e B\n");
	
	int A[7], B[7], C[13], I, R;
	/*Observação Importante: foi necessário declarar os vetores com 7 posições e 13 posições 
	para ser apresentado através do printf o elemento da posição A[6] para a posição C[6]*/ 
	
	printf("\n Matriz A \n\n");
	for(I=1; I<=6; I++){
		do{
		    printf("%2.d%c valor: ", I, 167);
		    scanf("%d", &A[I]);
		    R=A[I]-2*(A[I]/2);
		}while(R!=0);
	} 
	//clrscr();
	//system("CLS");
	//fflush(stdin); //limpa o buffer do teclado
	
	printf("\n Matriz B \n\n");
	for(I=1; I<=6; I++){
		do{
			printf("%2.d%c valor: ", I, 167);
		    scanf("%d", &B[I]);
		    R=B[I]-2*(B[I]/2);
		}while(R==0);
	} 
	
	for(I=1; I<=6; I++){
		C[I] = A[I];
		C[I+6] = B[I];
	}
	
	printf("\n Resultado da matriz C: \n");
	for(I=1; I<=12; I++){
		printf("%d \n", C[I]);
	}
	
	system("Pause");
}
