// Exerc�cio 3.o - Cap�tulo 4

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int N, R;
	
	printf("\n Resultado da Multiplica��o somente se for maior que 30 \n\n");
	
	printf("\n Digite um Valor: %d");
	scanf("%d", &N);
	
	R=N*2;
	
	if(R>30){
	  printf("\n O Resultado �: %d", R);	
    }
	
	getch();
}
