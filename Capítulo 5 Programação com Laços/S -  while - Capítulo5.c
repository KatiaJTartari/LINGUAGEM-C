// Exerc�cio S while - Cap�tulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int Dividendo, Divisor, Quociente;
	
	printf("\n \t\t RESULTADO INTEIRO DA DIVIS�O \n");
	printf("\n Sem utilizar o operador de divis�o com quociente inteiro DIV /");
	printf("\n \t A solu��o � feita em la�o de repeti��o \n\n");
	
	printf("\n \t\t Digite o Dividendo: ");
	scanf("%d", &Dividendo);
	printf("\n \t\t Digite o Divisor: ");
	scanf("%d", &Divisor);
	
	Quociente=0;
	
	while(Divisor<=Dividendo){
	  Dividendo=Dividendo-Divisor;
	  Quociente=Quociente+1; //ou Quociente++ ou ++Quociente  ou Quociente+=1
	}
	
	printf("\n\n \t\t O Quociente da Divis�o � %d", Quociente);
	
	printf("\n\n\n\n");
	system("Pause");	
}
