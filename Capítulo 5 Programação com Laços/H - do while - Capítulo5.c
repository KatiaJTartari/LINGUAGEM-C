// Exercício H do/while - Capítulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int B, E, P, I;
	
	printf("\n Resultado da Potência de uma base qualquer elevada a um expoente qualquer \n\n");
	
	printf("\n Digite a Base: ");
	scanf("%d", &B);
	printf("\n Digite o Expoente: ");
	scanf("%d", &E);
	
	I=1;
	P=1;
	
	do{
	  if(E<=0){
	  	P=1;
      }
      else{
	    P=B*P;
      }
	  I=I+1; //ou I++ ou ++I ou I+=1	
	}while(I<=E);
	
	printf("\n\n O Resultado da Potência é: %d \n\n", P);
	
	getch();
}
