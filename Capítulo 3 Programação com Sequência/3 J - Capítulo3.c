// Exerc�cio 3 j - Cap�tulo 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, R;
	
	printf("\n \t Quadrado da Diferen�a \n");
	
	printf("\n Digite o 1� Valor: ");
	scanf("%d", &A);
	
	printf("\n Digite o 2� Valor: ");
	scanf("%d", &B);
	
	R = A - B;
	R = pow(R,2);
	
	printf("\n O Resultado �: %d \n\n", R);
	
	system("Pause");

}

