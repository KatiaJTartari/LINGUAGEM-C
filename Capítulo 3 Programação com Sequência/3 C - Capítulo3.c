/* Exercício 3 c - Capítulo 3 */

#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float Raio, Altura, Volume;
	
	printf ("\n \t Programa calcula e apresenta o valor do volume de uma lata de óleo");
	
	printf ("\n\n Digite o raio: "); 
	scanf ("%f", &Raio),
	
	printf ("\n Digite a altura: ");
	scanf ("%f", &Altura);
	
	Volume = 3.14159 * pow(Raio,2) * Altura;
		
	printf ("\n O valor do volume é: %f \n\n", Volume);
		
	getch();	
}
