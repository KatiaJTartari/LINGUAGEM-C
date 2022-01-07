// Exercício B do/while - Capítulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int N, I, R;
	
	printf("\n \t\t TABUADA \n");
	
	printf("\n Qual tabuada você quer ver os resultados: ");
	scanf("%d", &N);
	
	I=1;
	
	do
	{//início do laço/repetição
	  R=N*I;
	  printf("\n %d X %d = %d", N, I, R);
	  I=I+1; // ou I++ ou ++I ou I+=1	
	}//fim do laço/repetição
	while(I<=10); //tem “;”
	
	printf("\n\n\n");
	system("Pause");
}
	
