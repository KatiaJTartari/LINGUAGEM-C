// Exercício Q while - Capítulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char Resp, Comodo[20];
	float Total_Area, Area, Larg, Comp;
	
	printf("\n Calculo Total de uma Área Residencial e Cômodos \n\n");
	
	Total_Area=0;
	Resp='S';
	
	while(Resp=='S' || Resp=='s'){
		
	  printf("\n Digite o Nome do Cômodo: ");
	  scanf("%s", Comodo); 
	  printf("\n Digite a Largura do Cômodo: ");
	  scanf("%f", &Larg);
	  printf("\n Digite o Comprimento do Cômodo: ");
	  scanf("%f", &Comp);
	  
	  Area=Larg*Comp;
	  printf("\n A Área do Cômodo %s é %.3f \n", Comodo, Area); 
	  	
	  Total_Area=Total_Area+Area;
	  
	  printf("\n\n Digite S se deseja calcular novo cômodo? "); 
	  fflush(stdin);//fflush()limpa o buffer(memória)do teclado OU espaço antes do " %c" do scanf
	  scanf("%c", &Resp);
	  system("CLS");//limpa a tela
	}
	
	printf("\n\n\n O Valor Total Acumulado da Área Residêncial é %.3f", Total_Area);
		
	printf("\n\n\n\n");
	system("Pause");
}
