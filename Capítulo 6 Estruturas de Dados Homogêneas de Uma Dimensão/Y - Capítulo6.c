// Exercício Y - Capítulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nPrograma lê uma matriz com 15 elementos inteiros e apresenta o total de elementos pares existentes na matriz\n\n");
	
	int A[15], I, R, Total_Par;
	
	for(I=1; I<=15; I++){
		printf("%2.d%c valor: ", I, 167);
		scanf("%d", &A[I]);
	}
	
	Total_Par = 0;
	
	for(I=1; I<=15; I++){
		R=A[I]-2*(A[I]/2);
		if(R==0)
		    Total_Par = Total_Par + 1;
	}
	
	printf("\n\n O Total de Pares é %d \n\n", Total_Par);
	
	system("Pause");
}
