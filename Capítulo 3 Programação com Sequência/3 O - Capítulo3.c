// Exerc�cio 3 o - Capitulo 3

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
	
	printf("\n O resultado do produto do 1� com o 3� valor �: %d \n", P);
	printf("\n O resultado da soma do 2� com o 4� valor �: %d \n\n", S);
	
	getch();
	
}
