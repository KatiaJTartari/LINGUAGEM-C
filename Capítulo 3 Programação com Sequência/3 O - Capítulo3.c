// Exercício 3 o - Capitulo 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, C, D, P, S;
	
	printf("\n \t Produto* e Soma+ \n");
	
	printf("\n Digite quatro valores: \n");
	scanf("%d %d %d %d", &A, &B, &C, &D);
	
	P = A * C;
	S = B + D;
	
	printf("\n O resultado do produto do 1º com o 3º valor é: %d \n", P);
	printf("\n O resultado da soma do 2º com o 4º valor é: %d \n\n", S);
	
	getch();
	
}
