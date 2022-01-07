// Exercício 3.k - Capítulo 4

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int N;
	
	printf("\n \t\t \a\a FAIXA PERMITIDA \n \a\a"); // \a Soa o alarme do microcomputador
	
	printf("\n\n \t Digite um valor de 1 até 9: \a");
	scanf("%d", &N);
	
	if(N>=1 && N<=9){
	  printf("\n\n \t O Valor está na Faixa Permitida \n \a\a\a\a");
	}
	else{
	  printf("\n\n \t O Valor está Fora da Faixa Permitida \n \a\a\a\a");	
	}
	 
	getch();
}
