// Exerc�cio 3 t - Cap�tulo 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float Distancia, Tempo, Velocidade;
	
	printf("\n \t VELOCIDADE DE UM PROJ�TIL \n\n");
	
	printf("\n Entre com a Dist�ncia: ");
	scanf("%f", &Distancia);
	
	printf("\n Entre com o Tempo: ");
	scanf("%f", &Tempo);
	
	Velocidade = (Distancia * 1000) / (Tempo * 60);
	
	printf("\n A Velocidade �: %f \n\n\n", Velocidade);
	
	system("Pause");
}
