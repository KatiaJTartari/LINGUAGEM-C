// Exerc�cio 3 q - Cap�tulo 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float R, A;
	
	printf("\n \t �REA DE UMA CIRCUNFER�NCIA \n");
	
	printf("\n Entre com o valor do Raio da Circunfer�ncia: ");
	scanf("%f", &R);
	
	A = 3.141559 * pow(R,2);
	
	/*  Este programa tamb�m pode ser escrito usando esta express�o: A = 3.141559 * R * R;
	e sem a biblioteca #include<math.h>  */
	
	printf("\n O valor da �rea da Circunfer�ncia �: %f \n\n", A);
	
	system("Pause");
			
}
