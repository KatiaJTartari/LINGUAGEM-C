// Exerc�cio 3.a vers�o 2 - Cap�tulo 4
//Vers�o 2 - Com uso do Operador Tern�rio/Condicional (?)

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, R;
	
	printf("\n \t Resultado da Diferen�a do Maior Valor pelo Menor Valor \n");
	
	printf("\n Digite dois valores: \n");
	scanf("%d %d", &A,&B);
	
    R =	(A>B) ? A-B : B-A; 
		      
    printf("\n O Resultado �: %d \n", R);
    
    getch();
    
}
    
    
