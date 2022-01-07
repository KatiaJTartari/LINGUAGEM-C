// Exercício 3 u - Capítulo 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	float Raio, Volume, Pot;
	
	printf("\n \t VOLUME DE UMA ESFERA \n\n");
	
	printf("\n Digite o Raio: ");
	scanf("%f", &Raio);
	
	Volume = (4 / 3) * 3.14159 * pow(Raio,3);
	
	printf("\n\n O Volume da Esfera é: %f \n\n\n", Volume);
	
	system("Pause");
	
}
