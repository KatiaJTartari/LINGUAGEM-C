/* Exerc�cio 3.a - Cap�tulo 3 */

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	 
	float Celsius, Fahrenheit;
	
	printf ("\n **Programa l� uma temperatura em graus Celsius e converte em graus Fahrenheit**");
	
	printf ("\nDigite a temperatura em graus Celsius: "); 
	scanf ("%f", &Celsius);
	
	Fahrenheit = (9 * Celsius + 160) / 5;
	
	printf ("\nA temperatura em graus Fahrenheit �: %f\n\n", Fahrenheit);
	
	system ("PAUSE");
}
