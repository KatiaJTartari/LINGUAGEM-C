// Exerc�cio A while - Cap�tulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int I, Q;
	
	printf("\n QUADRADOS DOS N�MEROS DE 15 A 200 \n\n");
	
	I = 15;
	
	while(I<=200)
	{//in�cio do while()
	  Q=pow(I,2);
	  printf("%d \n", Q);
	  I=I+1; // ou I++ ou ++I ou I+=1
    }//Fim do while()
    
    getch();//aguarda at� se teclar algo
}
