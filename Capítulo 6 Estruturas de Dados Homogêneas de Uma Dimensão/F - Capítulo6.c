// Exercício F - Capítulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nPrograma lê duas matriz com 15 números cada e apresenta como resultado a junção dessas duas matrizes\n\n");
	
	int i, a[15], b[15], c[30];
	
	printf("\n Digite 15 valores para a matriz A: \n");
	for(i=0; i<15; i++){
		scanf("%d", &a[i]);
    }
	
	printf("\n Digite 15 valores para a matriz B: \n");
	for(i=0; i<15; i++){
		scanf("%d", &b[i]);
    }
    
    for(i=0; i<15; i++){
    	c[i] = a[i];
    	c[i+15] = b[i];
	}
	/* OU	
	for(i=0; i<30; i++){
		if(i<15)
		    c[i] = a[i];
		    else 
		    c[i] = b[i-15];
    } */
	
	printf("\n\n A matriz C apresenta a junção das duas matrizes: \n");
	for (i=0; i<30; i++){
        printf("%d  ", c[i]);
    }
	
	getch();
}
