// Exerc�cio 3 v - Cap�tulo 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int Base, Expoente, Potencia;
	
	printf("\n \t\t POT�NCIA \n\n");
	
	printf("\n Digite a Base: ");
	scanf("%d", &Base);
	
	printf("\n Digite o Expoente: ");
	scanf("%d", &Expoente);
	
	Potencia = pow(Base,Expoente);
	
	printf("\n\n O Resultado da Pot�ncia �: %d \n\n", Potencia);
	
	getch();
}
