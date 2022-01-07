// Exerc�cio 3.e - Cap�tulo 4

#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float A, B, C, Delta, X, X1, X2, RaizDelta;
	
	printf("\n \t Equa��o Completa de Segundo Grau");
	printf("\n \t Utilizando a F�rmula de Bhaskara");
	printf("\n \t Considerando todas as condi��es poss�veis para Delta \n\n");
	
	printf("\n Digite um valor para o coefiente A: ");
	scanf("%f", &A);
	printf("\n Digite um valor para o coefiente B: ");
	scanf("%f", &B);
	printf("\n Digite um valor para o coefiente C: ");
	scanf("%f", &C);
	
	if(A==0 && B==0 && C==0){
	  printf("\n\n N�o � uma equa��o completa de segundo grau. \n\n");
	}
	else{     //pode ser tamb�m B * B ao inv�s de pow(B,2)
	  Delta = pow(B,2) - 4 * A * C;
	  if(Delta==0){
	  	X = -B/(2*A);
	  	printf("\n\n H� apenas uma solu��o real para DELTA = 0");
		printf("\n O resultado de X �: %.1f \n\n", X);
	  }
	  else{
	  	if(Delta>0){                     // ou 
	  	  X1 = (-B+sqrt(Delta))/(2*A);  //X1 = (-B+pow(Delta, 0.5))/(2*A);
		  X2 = (-B-sqrt(Delta))/(2*A); //X2 = (-B-pow(Delta, 0.5))/(2*A);
	  	  printf("\n\n H� duas solu��es reais e diferentes para DELTA > 0");
		  printf("\n O resultado de X1 �: %.1f ", X1);
		  printf("\n O resultado de X2 �: %.1f \n\n", X2);
		  }
		else{
		  printf("\n\n N�o h� solu��o real/ra�zes reais para DELTA < 0 \n\n");	
		}
	  } 
	}
	
	
	getch();
 } 
