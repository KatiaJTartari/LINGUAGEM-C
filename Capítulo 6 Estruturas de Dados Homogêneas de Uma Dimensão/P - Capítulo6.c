// Exerc�cio P - Cap�tulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Programa l� 12 elementos inteiros e todo elemento �mpar � multiplicado por 2 caso contr�rio o elemento permanece constante \n\n");
	
	int A[12], B[12], I, R;
	
	for (I=1; I<=12; I++){
        printf("%2.d%c valor ", I, 167);
        scanf("%d",&A[I]);
    }
    
    for (I=1; I<=12; I++){
    	R=A[I]-2*(A[I]/2);
    	if(R!=0)
    	B[I]=A[I]*2;
    	else
    	B[I]=A[I];
    }
	
	printf("\n\n");
	
	for (I=1; I<=12; I++){
        printf("%d  ", B[I]);
    } 
    
    getch();
}
