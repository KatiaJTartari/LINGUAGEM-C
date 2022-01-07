// Exercício 3 m - Capítulo 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, C, R;
	
	printf("\n \t SOMA DOS QUADRADOS \n");
	
	printf("\n Digite três valores: \n");
	scanf("%d %d %d", &A, &B, &C);
		
	R = (A*A) + (B*B) + (C*C);
	
	/*  Este programa também pode ser escrito usando esta expressão: R = pow(A,2) + pow(B,2) + pow(C,2);
	e a biblioteca #include<math.h>  */
	
	printf("\n O resultado é: %d \n\n", R);
	
	system("pause");
}
