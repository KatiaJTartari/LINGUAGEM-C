// Exercício Z - Capítulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nPrograma lê uma matriz com 10 elementos inteiros, apresenta o total de elementos ímpares existentes na matriz e também o percentual do valor total de números ímpares em relação à quantidade total de elementos armazenados na matriz\n\n");
	
	int A[10], I, R, Total_Impar;
	float Percentual_Total_Impar;
	
	for(I=1; I<=10; I++){
		printf("%2.d%c valor: ", I, 167);
		scanf("%d", &A[I]);
	}
	
	Total_Impar = 0;
	
	for(I=1; I<=10; I++){
		R=A[I]-2*(A[I]/2);
		if(R!=0)
		    Total_Impar = Total_Impar + 1;
	}
	
	Percentual_Total_Impar = Total_Impar / 10.00 * 100;
	
		printf("\n\n O Total de Ímpares é %d e o Percentual do valor total de números Ímpares é %.2f \n\n", Total_Impar, Percentual_Total_Impar);
	
	getch();
}
