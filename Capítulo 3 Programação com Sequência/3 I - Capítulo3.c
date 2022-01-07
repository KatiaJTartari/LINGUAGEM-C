// Exercício 3 i - Capítulo 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int Valor, Quadrado;
		
	printf ("\n \t Resultado do Valor Elevado ao Quadrado \n");
	
	printf ("\n\n Digite um valor: "); 
	scanf ("%d", &Valor);
	
	Quadrado = pow(Valor,2);
	
	printf ("\n O valor é: %d \n\n", Quadrado);
	
	system("Pause");
	
}
