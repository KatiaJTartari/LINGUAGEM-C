// Exerc�cio 3 y - Cap�tulo 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int Valor, Sucessor, Antecessor;
	
	printf("\n \t\t SUCESSOR E ANTECESSOR \n\n");
	
	printf("\n \t Digite um Valor Num�rico: ");
	scanf("%d", &Valor);
	
	Sucessor = Valor + 1;
	Antecessor = Valor - 1;
	
	printf("\n\n \t O valor Sucessor de %d �: %d \n", Valor, Sucessor);
	printf("\n\n \t O valor Antecessor de %d �: %d \n\n", Valor, Antecessor);
	
	getch();
}
