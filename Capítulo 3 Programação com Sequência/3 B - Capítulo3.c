/* Exercício 3 b - Capítulo 3 */

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float F, C;
	
	printf ("\n Programa lê uma temperatura em graus Fahrenheit e converte em graus Celsius \n\n");
	
	printf ("\n\n Digite a temperatura em graus Fahrenheit: ");
	scanf ("%f", &F);
	
	C = ((F-32) * 5) /9;
	
	printf ("\n\n A temperatura em graus Celsius é: %f \n\n\n", C);
		
	getch();
}
