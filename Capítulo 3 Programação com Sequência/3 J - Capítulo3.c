// Exercício 3 j - Capítulo 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, R;
	
	printf("\n \t Quadrado da Diferença \n");
	
	printf("\n Digite o 1º Valor: ");
	scanf("%d", &A);
	
	printf("\n Digite o 2º Valor: ");
	scanf("%d", &B);
	
	R = A - B;
	R = pow(R,2);
	
	printf("\n O Resultado é: %d \n\n", R);
	
	system("Pause");

}

