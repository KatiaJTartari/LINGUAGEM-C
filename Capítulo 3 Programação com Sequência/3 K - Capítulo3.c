// Exrec�cio 3 k - Cap�tulo 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float US, Cotacao, R;
	
	printf("\n \t Convers�o de D�lar para Real \n");
	
	printf("\n Digite a quantidade de d�lares: ");
	scanf("%f", &US);
	
	printf("\n Digite o valor da cota��o do d�lar: ");
	scanf("%f", &Cotacao);
	
	R = US * Cotacao;
	
	printf("\n A quantidade em reais �: %f \n\n", R);
	
	system("pause");	
}
