// Exercício 3.g - Capítulo 4

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, C, D, A2, A3, B2, B3, C2, C3, D2, D3;
	
	printf("\n \t\t VALORES DIVISÍVEIS POR 2 E 3 \n");
	
	printf("\n Digite Quatro Valores: \n");
	scanf("%d %d %d %d", &A, &B, &C, &D);
	
	A2=A%2;
	A3=A%3;
	B2=B%2;
	B3=B%3;
	C2=C%2;
	C3=C%3;
	D2=D%2;
	D3=D%3;
	
	if(A2==0 && A3==0){
	  printf("\n O valor %d é divisível por 2 e 3", A);
	}
	if(B2==0 && B3==0){
	  printf("\n O valor %d é divisível por 2 e 3", B);
	}
	if(C2==0 && C3==0){
	  printf("\n O valor %d é divisível por 2 e 3", C);	
	}
	if(D2==0 && D3==0){
	  printf("\n O valor %d é divisível por 2 e 3", D);
	}
	
	printf("\n\n");
	
	getch();
}
