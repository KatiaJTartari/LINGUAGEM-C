// Exerc�cio 3 s - Cap�tulo 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float A, B, Adicao, Subtracao, Multiplicacao, Divisao;
	
	printf("\n \t As Quatro Opera��es Aritm�ticas B�sicas \n\n");
	
	printf("\n Digite dois valores num�ricos reais: \n");
	scanf("%f %f", &A, &B);
	
	Adicao = A + B;
	Subtracao = A - B;
	Multiplicacao = A * B;
	Divisao = A / B;
	
	printf("\n\n O resultado da adi��o �: %f \n", Adicao);
	
	printf("\n O resultado da subtra��o �: %f \n", Subtracao);
	
	printf("\n O resultado da multiplica��o �: %f \n", Multiplicacao);
	
	printf("\n O resultado da divis�o �: %f \n\n", Divisao);
	
	getch();
}
