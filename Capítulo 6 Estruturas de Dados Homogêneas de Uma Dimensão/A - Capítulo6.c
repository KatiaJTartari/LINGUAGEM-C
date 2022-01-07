// Exercício A - Capítulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Programa lê e apresenta dez nomes de pessoas \n\n");
	
	int I;
	char A[10] [15]; //10 nomes com 15 caracteres	
		
	for (I=1; I<=10; I++){
        printf("%2.d%c nome: ", I, 167);
        scanf("%s",&A[I]);
    }
    
	printf("\n\n");
    
	for (I=1; I<=10; I++){
	    printf("%s \n", A[I]);
    } 
        
	getch();//aguarda até se teclar algo
}
