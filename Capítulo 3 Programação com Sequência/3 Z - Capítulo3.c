// Exerc�cio 3 z - Cap�tulo 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	float A, B, QD_DIV;
	
	printf("\n \t QUADRADO DA DIVIS�O \n\n");
	
	printf("\n Digite dois valores: \n");
	scanf("%d %d", &A, &B);
	
	QD_DIV = pow(A / B, 2);
	
	printf("\n O Resultado do Quadrado da Divis�o �: %f \n\n", QD_DIV);
	
	getch(); 
}
