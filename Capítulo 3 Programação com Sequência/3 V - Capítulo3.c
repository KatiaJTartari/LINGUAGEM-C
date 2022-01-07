// Exercício 3 v - Capítulo 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int Base, Expoente, Potencia;
	
	printf("\n \t\t POTÊNCIA \n\n");
	
	printf("\n Digite a Base: ");
	scanf("%d", &Base);
	
	printf("\n Digite o Expoente: ");
	scanf("%d", &Expoente);
	
	Potencia = pow(Base,Expoente);
	
	printf("\n\n O Resultado da Potência é: %d \n\n", Potencia);
	
	getch();
}
