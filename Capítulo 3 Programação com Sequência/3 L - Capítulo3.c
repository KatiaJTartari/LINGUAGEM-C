// Exerc�cio 3 l - Cap�tulo 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float R, Cotacao, US;
	
	printf("\n \t Convers�o de Real para D�lar \n");
	
	printf("\n Digite a quantidade de reais: ");
	scanf("%f", &R);
	
	printf("\n Digite o valor da cota��o do d�lar: ");
	scanf("%f", &Cotacao);
	
	US = R / Cotacao;
	
	printf("\n A quantidade em d�lares �: %f \n\n", US);
	
	getch();
}
