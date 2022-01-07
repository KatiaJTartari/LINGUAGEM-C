// Exercício B for - Capítulo 5

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
	
	for(I=1; I<=10; I++)
	{
	  R=N*I;
	  printf("\n %d X %d = %d", N, I, R);	
	}
	
	printf("\n\n\n");
	system("Pause");
}
	
	
