/* Exercício 3 d - Capítulo 3 */

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float Tempo, Velocidade, Distancia, Litros_Usados;
	
	printf("\n \t ======= VIAGEM PERCORRIDA UTIZANDO UM AUTOMÓVEL ======= \n \t");
	
	printf("\n\n Insira o tempo gasto durante a viagem: ");
	scanf("%f", &Tempo);
	
	printf("\n Insira a velocidade média durante a viagem: ");
	scanf("%f", &Velocidade);
	
	Distancia = Tempo * Velocidade;
	Litros_Usados = Distancia / 12;
	
	printf("\n\n\n A velocidade média foi: %f \n\n", Velocidade); 
	printf("\n O tempo gasto na viagem foi: %f \n\n", Tempo);
	printf("\n A distância percorrida foi: %f \n\n", Distancia); 
	printf("\n A quantidade de litros utilizada na viagem foi: %f \n\n\n", Litros_Usados);
	
	system("Pause");
}
