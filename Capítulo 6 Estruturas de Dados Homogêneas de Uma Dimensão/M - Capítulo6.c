// Exercício M - Capítulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Programa calcula a tabuada de um valor de 1 até 10 \n\n");
	
	int A[10], N, I;
	
	printf("Insira um valor: ");
	scanf("%d", &N);
	
	for(I=1; I<=10; I++){
		A[I] = N * I;
	}
	
	for(I=1; I<=10; I++){
		printf("%d X %d = %d \n", N, I, A[I]);
	}
	
	system("Pause");
}
