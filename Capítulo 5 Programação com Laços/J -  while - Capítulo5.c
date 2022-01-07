// Exercício J while - Capítulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float C, F;
	
	printf("\n Conversão de graus Celsius em graus Fahrenheit, de 10 em 10 graus \n");
	printf("\t De 10 graus Celsius até 100 graus Celsius \n\n\n");
	
	C=10;
	
	while(C<=100){
	  F=(9*C+160)/5;
	  printf("Grau Celsius %f para Grau Fahrenheit %f \n", C, F);
	  C=C+10;	
	}
	
	return(0);
}
