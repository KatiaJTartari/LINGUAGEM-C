// Exerc�cio 3.k - Cap�tulo 4

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int N;
	
	printf("\n \t\t \a\a FAIXA PERMITIDA \n \a\a"); // \a Soa o alarme do microcomputador
	
	printf("\n\n \t Digite um valor de 1 at� 9: \a");
	scanf("%d", &N);
	
	if(N>=1 && N<=9){
	  printf("\n\n \t O Valor est� na Faixa Permitida \n \a\a\a\a");
	}
	else{
	  printf("\n\n \t O Valor est� Fora da Faixa Permitida \n \a\a\a\a");	
	}
	 
	getch();
}
