// Exercício A for - Capítulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int I, Q;
	
	printf("\n QUADRADOS DOS NÚMEROS DE 15 A 200 \n\n");
	
	for(I=15; I<=200; I++)
	{
	  Q=pow(I,2);
	  printf("%d \n", Q);
    }
    
	getch();//aguarda até se teclar algo
}
