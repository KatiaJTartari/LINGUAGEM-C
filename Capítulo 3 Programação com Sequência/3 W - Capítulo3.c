// Exerc�cio 3 - w

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float pes, metros;
	
	printf("\n Medida em P�s convertida em Metros \n\n");
	
	printf("\n Digite a medida em p�s: ");
	scanf("%f", &pes);
	
	metros = pes * 0.3048;
	
	printf("\n O valor em Metros �: %f \n", metros);
	
	getch();
}
