// Exerc�cio 3.f - Cap�tulo 4

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	
	int A, B, C, X;
	
	printf("\n \t\t ORDEM CRESCENTE \n");
	
	printf("\n Digite Tr�s Valores: \n");
	scanf("%d %d %d", &A, &B, &C);
	
	if(A>B){
	  X=A;
	  A=B;
	  B=X;	
	}
	if(A>C){
	  X=A;
	  A=C;
	  C=X;
	}
	if(B>C){
	  X=B;
	  B=C;
	  C=X;	
	}
	
	printf("\n\n Os Valores em Ordem Crescente �: \n%d \n%d \n%d \n\n\n", A,B,C);
    //Para escrever na mesma linha (em horizontal) � s� n�o colocar \n
	
	system("Pause");
}
