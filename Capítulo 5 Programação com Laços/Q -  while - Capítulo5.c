// Exerc�cio Q while - Cap�tulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char Resp, Comodo[20];
	float Total_Area, Area, Larg, Comp;
	
	printf("\n Calculo Total de uma �rea Residencial e C�modos \n\n");
	
	Total_Area=0;
	Resp='S';
	
	while(Resp=='S' || Resp=='s'){
		
	  printf("\n Digite o Nome do C�modo: ");
	  scanf("%s", Comodo); 
	  printf("\n Digite a Largura do C�modo: ");
	  scanf("%f", &Larg);
	  printf("\n Digite o Comprimento do C�modo: ");
	  scanf("%f", &Comp);
	  
	  Area=Larg*Comp;
	  printf("\n A �rea do C�modo %s � %.3f \n", Comodo, Area); 
	  	
	  Total_Area=Total_Area+Area;
	  
	  printf("\n\n Digite S se deseja calcular novo c�modo? "); 
	  fflush(stdin);//fflush()limpa o buffer(mem�ria)do teclado OU espa�o antes do " %c" do scanf
	  scanf("%c", &Resp);
	  system("CLS");//limpa a tela
	}
	
	printf("\n\n\n O Valor Total Acumulado da �rea Resid�ncial � %.3f", Total_Area);
		
	printf("\n\n\n\n");
	system("Pause");
}
