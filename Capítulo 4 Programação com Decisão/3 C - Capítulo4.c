// Exerc�cio 3.c - Cap�tulo 4

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float N1, N2, N3, N4, MD;
	
	printf("\n Programa calcula a M�dia Aritm�tica e diz se Aluno foi Aprovado ou Reprovado \n");
	
	printf("\n Entre com a 1%c nota: ", 167);
	scanf("%f", &N1);
	printf("\n Entre com a 2%c nota: ",167);
	scanf("%f", &N2);
	printf("\n Entre com a 3%c nota: ", 167);
	scanf("%f", &N3);
	printf("\n Entre com a 4%c nota: ", 167);
	scanf("%f", &N4);
	
	MD=(N1+N2+N3+N4)/4;
	
	if(MD>=5)                           // %4.1f diminui o n�mero de zeros depois da v�rgula
	printf("\n\n Aluno Aprovado com M�dia: %4.1f", MD); 
	else
	printf("\n\n Aluno Reprovado com M�dia: %4.1f", MD);
	printf("\n\n\n");
	
	system("Pause");
 } 
