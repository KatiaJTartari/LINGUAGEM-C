/* Exerc�cio 3 g - Cap�tulo 3 */

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, C, D;
	int A1, A2, A3, A4, A5, A6;
	int M1, M2, M3, M4, M5, M6;
	
	printf("\n\n \t\t Combina��o entre os Quatros Valores");
	printf("\n \t Onde s�o feitas Seis Adi��es e Seis Multiplica��es \n");
	
	printf("\n\n Digite quatro valores n�mericos: \n");
	scanf("%d %d %d %d", &A, &B, &C, &D);
	
	A1 = A + B;
	A2 = A + C;
	A3 = A + D;
	A4 = B + C;
	A5 = B + D;
	A6 = C + D;
	M1 = A * B;
	M2 = A * C;
	M3 = A * D;
	M4 = B * C;
	M5 = B * D;
	M6 = C * D;
	
	printf("\n Os resultados das adi��es s�o: %d  %d  %d  %d  %d  %d \n", A1, A2, A3, A4, A5, A6);
	
	printf("\n Os resultados das multiplica��es s�o: %d  %d  %d  %d  %d  %d \n", M1, M2, M3, M4, M5, M6);
		
	getch();
}
