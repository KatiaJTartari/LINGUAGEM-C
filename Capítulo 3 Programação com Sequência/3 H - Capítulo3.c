/* Exercício 3 h - Capítulo 3 */

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float comprimento, largura, altura, volume;
	
	printf("\n Programa calcula e apresenta o valor do volume de uma caixa retangular \n");
	
	printf("\n Digite o comprimento: "); scanf("%f", &comprimento);
	printf("\n Digite a largura: "); scanf("%f", &largura);
	printf("\n Digite a altura: "); scanf("%f", &altura);
	
	volume = comprimento * largura * altura;
	
	printf("\n O volume é: %f \n\n", volume);
	
	system("Pause");	
}
