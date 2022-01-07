// Exercício 3.e - Capítulo 4

#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float A, B, C, Delta, X, X1, X2, RaizDelta;
	
	printf("\n \t Equação Completa de Segundo Grau");
	printf("\n \t Utilizando a Fórmula de Bhaskara");
	printf("\n \t Considerando todas as condições possíveis para Delta \n\n");
	
	printf("\n Digite um valor para o coefiente A: ");
	scanf("%f", &A);
	printf("\n Digite um valor para o coefiente B: ");
	scanf("%f", &B);
	printf("\n Digite um valor para o coefiente C: ");
	scanf("%f", &C);
	
	if(A==0 && B==0 && C==0){
	  printf("\n\n Não é uma equação completa de segundo grau. \n\n");
	}
	else{     //pode ser também B * B ao invés de pow(B,2)
	  Delta = pow(B,2) - 4 * A * C;
	  if(Delta==0){
	  	X = -B/(2*A);
	  	printf("\n\n Há apenas uma solução real para DELTA = 0");
		printf("\n O resultado de X é: %.1f \n\n", X);
	  }
	  else{
	  	if(Delta>0){                     // ou 
	  	  X1 = (-B+sqrt(Delta))/(2*A);  //X1 = (-B+pow(Delta, 0.5))/(2*A);
		  X2 = (-B-sqrt(Delta))/(2*A); //X2 = (-B-pow(Delta, 0.5))/(2*A);
	  	  printf("\n\n Há duas soluções reais e diferentes para DELTA > 0");
		  printf("\n O resultado de X1 é: %.1f ", X1);
		  printf("\n O resultado de X2 é: %.1f \n\n", X2);
		  }
		else{
		  printf("\n\n Não há solução real/raízes reais para DELTA < 0 \n\n");	
		}
	  } 
	}
	
	
	getch();
 } 
