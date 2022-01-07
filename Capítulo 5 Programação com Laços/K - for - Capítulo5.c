// Exercício K for - Capítulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int Quadro;
	float Somatorio_Graos, Graos;
	
	printf("\n Somatório do número de grãos de trigo que se pode obter num tabuleiro de xadrez \n");
	printf("\n Obedecendo à seguinte regra:");
	printf("\n Colocar um grão de trigo no 1º quadro e nos quadros seguintes o dobro do quadro anterior, até atingir o quadro 64. \n\n");
	
	Somatorio_Graos = 0;
	Graos = 1;
		
	for(Quadro=1; Quadro<=64; Quadro++){
	  Somatorio_Graos = Somatorio_Graos + Graos;
	  Graos = Graos + Graos; //ou Graos = Graos * 2;
	}
	
	printf("\n O Somatório dos Grãos é: %.0f \n\n", Somatorio_Graos);
	
	getch();
}
