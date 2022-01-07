// Exercício 3 y - Capítulo 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int Valor, Sucessor, Antecessor;
	
	printf("\n \t\t SUCESSOR E ANTECESSOR \n\n");
	
	printf("\n \t Digite um Valor Numérico: ");
	scanf("%d", &Valor);
	
	Sucessor = Valor + 1;
	Antecessor = Valor - 1;
	
	printf("\n\n \t O valor Sucessor de %d é: %d \n", Valor, Sucessor);
	printf("\n\n \t O valor Antecessor de %d é: %d \n\n", Valor, Antecessor);
	
	getch();
}
