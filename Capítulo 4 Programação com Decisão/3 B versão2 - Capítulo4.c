// Exerc�cio 3.b vers�o 2 - Cap�tulo 4

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
	
	if(N<0)
	R=N*(-1);
	else
	R=N;
	
	printf("\n O valor �: %i \n", R);
	
	getch();	
}
