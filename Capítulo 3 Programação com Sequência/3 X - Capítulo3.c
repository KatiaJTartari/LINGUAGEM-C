
// Exerc�cio 3 x - Cap�tulo 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float BASE, INDICE, RAIZ;
	
	printf("\n \t\t\t RAIZ \n");
	
	printf("\n \t Digite a Base: ");
	scanf("%f", &BASE);
	
	printf("\n \t Digite o �ndice: ");
	scanf("%f", &INDICE);
	
	//RAIZ = sqrt (BASE);  Esta fun��o sqrt faz apenas raiz quadrada de uma base qualquer.
			
	RAIZ = pow(BASE, 1 / INDICE);
		
	printf("\n \t O resultado da Raiz �: %f \n\n\n", RAIZ);
	
	system("Pause");
}
