// Exerc�cio N Vers�o 1 - Cap�tulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Programa l� 20 temperaturas em graus Celsius e apresenta a menor, a maior e a m�dia das temperaturas lidas \n\n");
	
	float A[20], Maior, Menor, Media, S;
	int I;
	
	printf("Insira 20 temperaturas em graus Celsius: \n");
	for(I=1; I<=20; I++){
	    scanf("%f", &A[I]);
	    S = S + A[I];
	}
	
	Maior = A[1];
	for(I=2; I<=20; I++){
		if(Maior < A[I])
   //OU if(A[I] > Maior)
		   Maior = A[I];
    }
    
    Menor = A[1];
	for(I=2; I<=20; I++){
		if(Menor > A[I])
   //OU if(A[I] < Menor)
		   Menor = A[I];
    }
    
    Media = S / 20;
    
    printf("\n A Maior temperatura � %.2f \n A Menor temperatura � %.2f \n E a M�dia das temperaturas � %.2f \n", Maior, Menor, Media);
    
    return;
}
