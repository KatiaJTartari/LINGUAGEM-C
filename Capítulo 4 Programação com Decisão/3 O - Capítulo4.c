// Exercício 3.o - Capítulo 4

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int N, R;
	
	printf("\n Resultado da Multiplicação somente se for maior que 30 \n\n");
	
	printf("\n Digite um Valor: %d");
	scanf("%d", &N);
	
	R=N*2;
	
	if(R>30){
	  printf("\n O Resultado é: %d", R);	
    }
	
	getch();
}
