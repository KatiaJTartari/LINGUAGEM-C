// Exerc�cio 3.d - Cap�tulo 4

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float N1, N2, N3, N4, MD1, MD2, NE; 
	
	printf("\n Programa calcula a M�dia Aritm�tica e diz se Aluno foi Aprovado ou Reprovado");
	printf("\n caso reprovado � calculada uma nova m�dia com a Nota de Exame \n");
	
	printf("\n Digite a 1� Nota: ");
	scanf("%f", &N1);
	printf("\n Digite a 2� Nota: ");
	scanf("%f", &N2);
	printf("\n Digite a 3� Nota: ");
	scanf("%f", &N3);
	printf("\n Digite a 4� Nota: ");
	scanf("%f", &N4);
	
	MD1=(N1+N2+N3+N4)/4;
	
	if(MD1>=7){                            // %4.1f diminui o n�mero de zeros depois da v�rgula
	  printf("\n\n Aluno Aprovado com M�dia: %4.1f \n\n", MD1);
    }
    else{
	  printf("\n\n Digite a Nota de Exame: ");
	  scanf("%f", &NE);
	  MD2=(NE+MD1)/2;
      if(MD2>=5){
	    printf("\n\n Aluno Aprovado em Exame com M�dia: %4.1f \n\n", MD2);
	  }  
      else{
	    printf("\n\n Aluno Reprovado com M�dia: %4.1f \n\n", MD2);
      }
    }
    
	getch();
}
