// Exerc�cio 3.b vers�o 3 - Cap�tulo 4
// Vers�o 3 - com uso do operador Tern�rio/Condicinal (?)

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
			
	printf("\n O valor �: %i \n", R);
	
	getch();	
}
