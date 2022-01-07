// Exercício 3 q - Capítulo 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float R, A;
	
	printf("\n \t ÁREA DE UMA CIRCUNFERÊNCIA \n");
	
	printf("\n Entre com o valor do Raio da Circunferência: ");
	scanf("%f", &R);
	
	A = 3.141559 * pow(R,2);
	
	/*  Este programa também pode ser escrito usando esta expressão: A = 3.141559 * R * R;
	e sem a biblioteca #include<math.h>  */
	
	printf("\n O valor da Área da Circunferência é: %f \n\n", A);
	
	system("Pause");
			
}
