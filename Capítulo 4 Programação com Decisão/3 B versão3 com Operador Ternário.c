// Exercício 3.b versão 3 - Capítulo 4
// Versão 3 - com uso do operador Ternário/Condicinal (?)

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n \t\t VALOR POSITIVO \n");
	
	int N, R;
	
	printf("\n Digite um Valor Positivo ou Negativo: ");
	scanf("%i", &N);
	
	R = (N<0) ? N*(-1) : N;
			
	printf("\n O valor é: %i \n", R);
	
	getch();	
}
