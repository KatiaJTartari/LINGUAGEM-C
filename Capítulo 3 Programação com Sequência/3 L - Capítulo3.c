// Exercício 3 l - Capítulo 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float R, Cotacao, US;
	
	printf("\n \t Conversão de Real para Dólar \n");
	
	printf("\n Digite a quantidade de reais: ");
	scanf("%f", &R);
	
	printf("\n Digite o valor da cotação do dólar: ");
	scanf("%f", &Cotacao);
	
	US = R / Cotacao;
	
	printf("\n A quantidade em dólares é: %f \n\n", US);
	
	getch();
}
