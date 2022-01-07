// Exrecício 3 k - Capítulo 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float US, Cotacao, R;
	
	printf("\n \t Conversão de Dólar para Real \n");
	
	printf("\n Digite a quantidade de dólares: ");
	scanf("%f", &US);
	
	printf("\n Digite o valor da cotação do dólar: ");
	scanf("%f", &Cotacao);
	
	R = US * Cotacao;
	
	printf("\n A quantidade em reais é: %f \n\n", R);
	
	system("pause");	
}
