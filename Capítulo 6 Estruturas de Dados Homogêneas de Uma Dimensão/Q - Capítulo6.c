// Exerc�cio Q - Cap�tulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Programa l� 15 elementos reais e todo elemento com �ndice par � dividido por 2 caso contr�rio o elemento � multiplicado por 1.5 \n\n");
	
	float A[15], B[15];
	int I, R;
	
	for (I=1; I<=15; I++){
        printf("%2.d%c valor ", I, 167);
        scanf("%f",&A[I]);
    }
    
    for (I=1; I<=15; I++){
    	R=I-2*(I/2);
    	if(R==0)
    	B[I]=A[I]/2;
    	else
    	B[I]=A[I]*1.5;
    }
	
	printf("\n\n");
	
	for (I=1; I<=15; I++){
        printf("%.2f  ", B[I]);
    } 
	
	return;
}
