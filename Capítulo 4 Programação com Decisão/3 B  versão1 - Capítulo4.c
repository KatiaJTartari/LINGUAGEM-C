// Exercício 3.b versão 1 - Capítulo 4

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n \t\t VALOR POSITIVO \n");
	
	int N;
	
	printf("\n Digite um Valor Positivo ou Negativo: ");
	scanf("%i", &N);
	
	if(N<0)
	N=N*(-1);
	
	printf("\n O valor é: %i \n", N);
	
	getch();	
}
