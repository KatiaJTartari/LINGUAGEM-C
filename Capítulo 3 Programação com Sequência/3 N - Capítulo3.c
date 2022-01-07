// Exercício 3 n - Capítulo 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, C, R;
	
	printf("\n \t QUADRADO DA SOMA \n");
	
	printf("\n Digite três valores: \n");
	scanf("%d %d %d", &A, &B, &C);
	
	R = A + B + C;  
	R = R * R;
			
	/*  Este programa também pode ser escrito usando estas expressões: R = A + B + C; R = pow(R,2);
	Ou então apenas esta expressão: R = pow(A + B + C, 2);
	e a biblioteca #include<math.h>  */
	
	printf("\n O resultado é: %d \n\n", R);
	
	getch();	
}
