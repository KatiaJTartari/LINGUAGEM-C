// Exerc�cio J - Cap�tulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Programa l� 20 n�meros e apresenta o somat�rio de cada elemento \n\n");
	
	int A[20], B[20], I, J, S;
	
	printf("Digite 20 valores: \n");
	for(I=1; I<=20; I++){
	    scanf("%d", &A[I]);
	}
	
	
  for(I=1; I<=20; I++){
		B[I] = 0;
		for(J=1; J<=A[I]; J++){
			B[I] = B[I] + J;
		}
	}
	
/*OU for(I=1; I<=20; I++){
		S = 0;
		for(J=1; J<=A[I]; J++){
			S = S + J;
		}
		B[I] = S;
	} */
	
	printf("\n O somat�rio de cada n�mero lido �:\n");
	for(I=1; I<=20; I++){
		printf("%d \n", B[I]);
    }
    
    system("pause");
}
