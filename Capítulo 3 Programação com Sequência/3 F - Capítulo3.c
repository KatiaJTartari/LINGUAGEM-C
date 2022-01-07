/* Exercício 3 f - Capítulo 3 */

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, X;  //Observavação: este programa também pode ser feito com variáveis float ou char/string. 
		
	printf("\n \t ========================================== ");
	printf("\n \t              TROCA DE VALORES ");
	printf("\n \t ========================================== \n");
	
	printf("\n\n \t Digite o primeiro valor: ");
	scanf("%d", &A);
	
	printf("\n \t Digite o segundo valor:  ");
	scanf("%d", &B);
	
	X = A;
	A = B;
	B = X;
	
	printf("\n \t Os valores trocados são: %d  %d \n\n\n", A, B);
		
   system("pause");	
 } 
 
 
