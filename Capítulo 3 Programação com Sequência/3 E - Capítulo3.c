/* Exercício 3 e - Capítulo 3 */

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float valor, taxa, tempo, prestacao;
	
	printf("\n \t Programa calcula o valor de uma prestação de um bem em atraso \n\n\n");
	
	printf("\n \t\t\t Insira o valor: ");
	scanf("%f", &valor);
	
	printf("\n \t\t\t Insira a taxa:  ");
	scanf("%f", &taxa);
	
	printf("\n \t\t\t Insira o tempo: ");
	scanf("%f", &tempo);
	
	prestacao = valor + (valor * (taxa / 100) * tempo);
	
	printf("\n\n\n \t O valor da prestação é: %f \n", prestacao);
	
	getch();
}
