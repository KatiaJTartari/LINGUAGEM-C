// Exercício S do/while - Capítulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int Dividendo, Divisor, Quociente;
	
	printf("\n \t\t RESULTADO INTEIRO DA DIVISÃO \n");
	printf("\n Sem utilizar o operador de divisão com quociente inteiro DIV /");
	printf("\n \t A solução é feita em laço de repetição \n\n");
	
	printf("\n \t\t Digite o Dividendo: ");
	scanf("%d", &Dividendo);
	printf("\n \t\t Digite o Divisor: ");
	scanf("%d", &Divisor);
	
	Quociente=0;
	
	do{
	  Dividendo=Dividendo-Divisor;
	  Quociente=Quociente+1; //ou Quociente++ ou ++Quociente  ou Quociente+=1
	}while(Divisor<=Dividendo);
	
	printf("\n\n \t\t O Quociente da Divisão é %d", Quociente);
	
	printf("\n\n\n\n");
	return(0);	
}
