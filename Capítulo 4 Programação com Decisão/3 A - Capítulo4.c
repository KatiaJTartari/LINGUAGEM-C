// Exercício 3.a - Capítulo 4

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
	
	if(A>B)
	R=A-B;
	else
	R=B-A;
        
    printf("\n O Resultado é: %d \n", R);
    
    getch();
    
}
    
    
