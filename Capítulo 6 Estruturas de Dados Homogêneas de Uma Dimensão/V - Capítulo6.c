// Exercício V - Capítulo 6

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Programa lê 30 elementos inteiros e apresenta a quantidade de valores pares e ímpares que foram lidos \n\n");
	
	int A[30], I, R, Par, Impar;
	
	
	for(I=1; I<=30; I++){
		printf("%2.d%c valor: ", I, 167);
		scanf("%d", &A[I]);
	}
	
	Par=0;
	Impar=0;
	
	for(I=1; I<=30; I++){
		R=A[I]-2*(A[I]/2);
		if(R==0)
		Par=Par+1;
		else
		Impar=Impar+1;
	}
	
	printf("\n A quantidade de Pares são: %d \n A quantidade de Ímpares são: %d \n\n", Par, Impar);
	
	system("Pause");
}
