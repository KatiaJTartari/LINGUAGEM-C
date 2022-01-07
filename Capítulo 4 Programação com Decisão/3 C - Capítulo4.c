// Exercício 3.c - Capítulo 4

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float N1, N2, N3, N4, MD;
	
	printf("\n Programa calcula a Média Aritmética e diz se Aluno foi Aprovado ou Reprovado \n");
	
	printf("\n Entre com a 1%c nota: ", 167);
	scanf("%f", &N1);
	printf("\n Entre com a 2%c nota: ",167);
	scanf("%f", &N2);
	printf("\n Entre com a 3%c nota: ", 167);
	scanf("%f", &N3);
	printf("\n Entre com a 4%c nota: ", 167);
	scanf("%f", &N4);
	
	MD=(N1+N2+N3+N4)/4;
	
	if(MD>=5)                           // %4.1f diminui o número de zeros depois da vírgula
	printf("\n\n Aluno Aprovado com Média: %4.1f", MD); 
	else
	printf("\n\n Aluno Reprovado com Média: %4.1f", MD);
	printf("\n\n\n");
	
	system("Pause");
 } 
