/* Exercício 3.a - Capítulo 3 */

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	 
	float Celsius, Fahrenheit;
	
	printf ("\n **Programa lê uma temperatura em graus Celsius e converte em graus Fahrenheit**");
	
	printf ("\nDigite a temperatura em graus Celsius: "); 
	scanf ("%f", &Celsius);
	
	Fahrenheit = (9 * Celsius + 160) / 5;
	
	printf ("\nA temperatura em graus Fahrenheit é: %f\n\n", Fahrenheit);
	
	system ("PAUSE");
}
