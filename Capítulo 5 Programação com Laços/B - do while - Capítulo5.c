// Exerc�cio B do/while - Cap�tulo 5

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
	
	I=1;
	
	do
	{//in�cio do la�o/repeti��o
	  R=N*I;
	  printf("\n %d X %d = %d", N, I, R);
	  I=I+1; // ou I++ ou ++I ou I+=1	
	}//fim do la�o/repeti��o
	while(I<=10); //tem �;�
	
	printf("\n\n\n");
	system("Pause");
}
	
