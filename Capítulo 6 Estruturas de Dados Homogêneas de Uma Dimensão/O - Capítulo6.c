// Exercício O - Capítulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Programa lê 25 temperaturas em graus Celsius e converte-as em graus Fahrenheit \n\n");
	
	float A[25], B[25];
	int I;
	
	printf("Insira 25 temperaturas em graus Celsius: \n");
	for(I=1; I<=25; I++){
	    scanf("%f", &A[I]);
	}
	
	for(I=1; I<=25; I++){
		B[I] = (9 * A[I] + 160)/5;
	}
	
	for(I=1; I<=25; I++){
		printf("Celsius %.2f --> Fahrenheit %.2f \n", A[I], B[I]);
	}
	
	system("Pause");
}
