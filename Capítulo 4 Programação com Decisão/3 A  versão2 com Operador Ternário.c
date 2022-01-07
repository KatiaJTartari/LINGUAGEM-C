// Exercício 3.a versão 2 - Capítulo 4
//Versão 2 - Com uso do Operador Ternário/Condicional (?)

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, R;
	
	printf("\n \t Resultado da Diferença do Maior Valor pelo Menor Valor \n");
	
	printf("\n Digite dois valores: \n");
	scanf("%d %d", &A,&B);
	
    R =	(A>B) ? A-B : B-A; 
		      
    printf("\n O Resultado é: %d \n", R);
    
    getch();
    
}
    
    
