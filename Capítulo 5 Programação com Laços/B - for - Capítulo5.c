// Exerc�cio B for - Cap�tulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int N, I, R;
	
	printf("\n \t\t TABUADA \n");
	
	printf("\n Qual tabuada voc� quer ver os resultados: ");
	scanf("%d", &N);
	
	for(I=1; I<=10; I++)
	{
	  R=N*I;
	  printf("\n %d X %d = %d", N, I, R);	
	}
	
	printf("\n\n\n");
	system("Pause");
}
	
	
