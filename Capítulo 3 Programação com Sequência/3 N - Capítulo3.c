// Exerc�cio 3 n - Cap�tulo 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, C, R;
	
	printf("\n \t QUADRADO DA SOMA \n");
	
	printf("\n Digite tr�s valores: \n");
	scanf("%d %d %d", &A, &B, &C);
	
	R = A + B + C;  
	R = R * R;
			
	/*  Este programa tamb�m pode ser escrito usando estas express�es: R = A + B + C; R = pow(R,2);
	Ou ent�o apenas esta express�o: R = pow(A + B + C, 2);
	e a biblioteca #include<math.h>  */
	
	printf("\n O resultado �: %d \n\n", R);
	
	getch();	
}
