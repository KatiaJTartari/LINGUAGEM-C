// Exercício 3.d - Capítulo 4

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float N1, N2, N3, N4, MD1, MD2, NE; 
	
	printf("\n Programa calcula a Média Aritmética e diz se Aluno foi Aprovado ou Reprovado");
	printf("\n caso reprovado é calculada uma nova média com a Nota de Exame \n");
	
	printf("\n Digite a 1ª Nota: ");
	scanf("%f", &N1);
	printf("\n Digite a 2ª Nota: ");
	scanf("%f", &N2);
	printf("\n Digite a 3ª Nota: ");
	scanf("%f", &N3);
	printf("\n Digite a 4ª Nota: ");
	scanf("%f", &N4);
	
	MD1=(N1+N2+N3+N4)/4;
	
	if(MD1>=7){                            // %4.1f diminui o número de zeros depois da vírgula
	  printf("\n\n Aluno Aprovado com Média: %4.1f \n\n", MD1);
    }
    else{
	  printf("\n\n Digite a Nota de Exame: ");
	  scanf("%f", &NE);
	  MD2=(NE+MD1)/2;
      if(MD2>=5){
	    printf("\n\n Aluno Aprovado em Exame com Média: %4.1f \n\n", MD2);
	  }  
      else{
	    printf("\n\n Aluno Reprovado com Média: %4.1f \n\n", MD2);
      }
    }
    
	getch();
}
