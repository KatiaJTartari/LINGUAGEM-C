// Exerc�cio 3.i vers�o1- Cap�tulo 4

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int A,B, C, D, E;
	
	printf("\n\t MAIOR VALOR E MENOR VALOR \n\n");
	
	printf("\n Digite cinco valores: \n");
	scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
	
	if(A>B && A>C && A>D && A>E){
	  printf("\n O maior valor �: %d \n", A);
	}
	
	else
	if(B>C && B>D && B>E){
	  printf("\n O maior valor �: %d \n", B);
	}
	
	else
	if(C>D && C>E){
	  printf("\n O maior valor �: %d \n", C);
	}
	
	else
	if(D>E){
	  printf("\n O maior valor �: %d \n", D);
	}
	else{
	  printf("\n O maior valor �: %d \n", E);
	}
	
	if(A<B && A<C && A<D && A<E){
	  printf("\n O menor valor �: %d \n", A);
	}
	
	else
	if(B<C && B<D && B<E){
	  printf("\n O menor valor �: %d \n", B);	
	}
	
	else
	if(C<D && C<E){
	  printf("\n O menor valor �: %d \n", C);
	}
	
	else
	if(D<E){
	  printf("\n O menor valor �: %d \n", D);
	}
	else{
	  printf("\n O menor valor �: %d \n", E);
	}
	
	getch();
}
