// Exerc�cio L for - Cap�tulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int I, J, Somatorio, Num, Fat;
	
	printf("\n Somat�rio da Fatorial de Quinze Valores \n\n");
	
	Somatorio=0;
		
	for(I=1; I<=15; I++){
	  printf("\n Digite o %i%c Valor: ", I,167);	
	  scanf("%d", &Num);
	  Fat=1;
	  for(J=1; J<=Num; J++){
	  	Fat=Fat*J;
	  }	
	  Somatorio=Somatorio+Fat;
	}
	
	printf("\n\n O Somat�rio da Fatorial de Cada Valor Lido �: %d \n\n\n", Somatorio);
	
	system("Pause");
}
