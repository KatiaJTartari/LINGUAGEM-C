// Exerc�cio 3 m - Cap�tulo 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, C, R;
	
	printf("\n \t SOMA DOS QUADRADOS \n");
	
	printf("\n Digite tr�s valores: \n");
	scanf("%d %d %d", &A, &B, &C);
		
	R = (A*A) + (B*B) + (C*C);
	
	/*  Este programa tamb�m pode ser escrito usando esta express�o: R = pow(A,2) + pow(B,2) + pow(C,2);
	e a biblioteca #include<math.h>  */
	
	printf("\n O resultado �: %d \n\n", R);
	
	system("pause");
}
