// Exerc�cio K do while - Cap�tulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int Quadro;
	float Somatorio_Graos, Graos;
	
	printf("\n Somat�rio do n�mero de gr�os de trigo que se pode obter num tabuleiro de xadrez \n");
	printf("\n Obedecendo � seguinte regra:");
	printf("\n Colocar um gr�o de trigo no 1� quadro e nos quadros seguintes o dobro do quadro anterior, at� atingir o quadro 64. \n\n");
	
	Somatorio_Graos = 0;
	Graos = 1;
	Quadro = 1;
	
	do{
	  Somatorio_Graos = Somatorio_Graos + Graos;
	  Graos = Graos * 2; //ou Graos = Graos + Graos;
	  Quadro = Quadro + 1; //ou Quadro++ ou ++Quadro ou Quadro+=1 	
	}while(Quadro<=64);
	
	printf("\n O Somat�rio dos Gr�os �: %.0f \n\n", Somatorio_Graos);
	
	getch();
}
	
