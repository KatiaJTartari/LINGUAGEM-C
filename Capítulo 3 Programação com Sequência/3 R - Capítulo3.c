// Exercício 3 r - Capítulo 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese"); 
	
	int A, B, C, NL, BR, TE;
	float PV, PA, PB, PC, PNL, PBR;
	
	printf("\n \t\t\t ELEIÇÃO SINDICAL \n");
	
	printf("\n Digite a quantidade de Votos Válidos para o Candidato A: ");
	scanf("%d", &A);
	
	printf("\n Digite a quantidade de Votos Válidos para o Canditado B: ");
	scanf("%d", &B);
	
	printf("\n Digite a quantidade de Votos Válidos para o Candidato C: ");
	scanf("%d", &C);
	
	printf("\n Digite a quantidade de Votos Nulos: ");
	scanf("%d", &NL);
	
	printf("\n Digite a quantidade de Votos em Branco: ");
	scanf("%d", &BR);
	
	TE = A + B + C + NL + BR;
	PV = (A+B+C) * 100 / TE;
	PA = A * 100 / TE;
	PB = B * 100 / TE;
	PC = C * 100 / TE;
	PNL = NL * 100 / TE;
	PBR = BR * 100 / TE;
	
	printf("\n\n\n O número Total de Eleitores considerando votos válidos, nulos e em branco é: %d \n", TE);
	
	printf("\n O percentual de Votos Válidos em relação à Quantidade de Eleitores é: %f \n", PV); 
	
	printf("\n O percentual de Votos do Candidato A em relação à Quantidade de Eleitores é: %f \n\n", PA);
	
	printf("\n O percentual de Votos do Candidato B em relação à Quantidade de Eleitores é: %f \n\n", PB);
	
	printf("\n O percentual de Votos do Candidato C em relação à Quantidade de Eleitores é: %f \n\n", PC);

	printf("\n O percentual de Votos Nulos em relação à Quantidade de Eleitores é: %f \n\n", PNL);
	
	printf("\n O percentual de Votos em Branco em relação à Quantidade de Eleitores é: %f \n\n", PBR);
	
	getch();
}
