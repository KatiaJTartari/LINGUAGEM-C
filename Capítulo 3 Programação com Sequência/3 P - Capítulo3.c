// Exerc�cio 3 p - Cap�tulo 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float SM, PR, NS;
	
	printf("\n \t REAJUSTE SALARIAL \n");
	
	printf("\n Digite o sal�rio mensal: ");
	scanf("%f", &SM);
	printf("\n Digite o percentual de reajuste: ");
	scanf("%f", &PR);
	
	NS = SM + SM * PR / 100;
	
	printf("\n O valor do novo sal�rio �: %f \n\n", NS);
	
	system("Pause");
	
}
