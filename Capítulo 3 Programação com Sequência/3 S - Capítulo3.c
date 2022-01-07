// Exercício 3 s - Capítulo 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float A, B, Adicao, Subtracao, Multiplicacao, Divisao;
	
	printf("\n \t As Quatro Operações Aritméticas Básicas \n\n");
	
	printf("\n Digite dois valores numéricos reais: \n");
	scanf("%f %f", &A, &B);
	
	Adicao = A + B;
	Subtracao = A - B;
	Multiplicacao = A * B;
	Divisao = A / B;
	
	printf("\n\n O resultado da adição é: %f \n", Adicao);
	
	printf("\n O resultado da subtração é: %f \n", Subtracao);
	
	printf("\n O resultado da multiplicação é: %f \n", Multiplicacao);
	
	printf("\n O resultado da divisão é: %f \n\n", Divisao);
	
	getch();
}
