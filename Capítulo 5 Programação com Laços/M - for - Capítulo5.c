// Exercício M for - Capítulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int I;
	float Num, Somatorio, Media;
	
	printf("\n Somatório e a Média de Dez Valores Reais \n\n");
	
	Somatorio=0;
		
	for(I=1; I<=10; I++)
	{
	  printf("\n \t Digite o %i%c Valor: ", I, 167);
	  scanf("%f", &Num);
	  Somatorio=Somatorio+Num;
	}
	
	Media=Somatorio/10;
	printf("\n\n O Somatório é %f e a Média é %f \n\n", Somatorio, Media);
	
	getch();
}
