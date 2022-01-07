// Exercício H for - Capítulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	int B, E, P, I;
	
	printf("\n Resultado da Potência de uma base qualquer elevada a um expoente qualquer \n\n");
	
	printf("\n Digite a Base: ");
	scanf("%d", &B);
	printf("\n Digite o Expoente: ");
	scanf("%d", &E);
	
	P=1;
	
	for(I=1; I<=E; I++)
	{
	  P=B*P;
	}
	
	printf("\n\n O Resultado da Potência é: %d \n\n", P);
	
	getch();
}
