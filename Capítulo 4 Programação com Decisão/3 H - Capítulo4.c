// Exercício 3.h - Capítulo 4

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, C, D, R2, R3;
	
	printf("\n \t\t VALORES DIVISÍVEIS POR 2 OU 3 \n");
	
	printf("\n Digite Quatro Valores: \n");
	scanf("%d %d %d %d", &A, &B, &C, &D);
		
	R2=A%2;
	R3=A%3;
	if(R2==0 || R3==0){
	  printf("\n O valor %d é divisível por 2 ou 3", A);
	}
	
	R2=B%2;
	R3=B%3;
	if(R2==0 || R3==0){
	  printf("\n O valor %d é divisível por 2 ou 3", B);
	}
	
	R2=C%2;
	R3=C%3;
	if(R2==0 || R3==0){
	  printf("\n O valor %d é divisível por 2 ou 3", C);	
	}
	
	R2=D%2;
	R3=D%3;
	if(R2==0 || R3==0){
	  printf("\n O valor %d é divisível por 2 ou 3", D);
	}
	
	printf("\n\n");
	
	getch();
}
