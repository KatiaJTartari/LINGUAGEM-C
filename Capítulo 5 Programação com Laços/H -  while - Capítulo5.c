// Exerc�cio H while - Cap�tulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	int B, E, P, I;
	
	printf("\n Resultado da Pot�ncia de uma base qualquer elevada a um expoente qualquer \n\n");
	
	printf("\n Digite a Base: ");
	scanf("%d", &B);
	printf("\n Digite o Expoente: ");
	scanf("%d", &E);
	
	I=1;
	P=1;
	
	while(I<=E)
	{
	  P=B*P;
	  I=I+1; //ou I++ ou ++I ou I+=1	
	}
	
	printf("\n\n O Resultado da Pot�ncia �: %d \n\n", P);
	
	getch();
}
