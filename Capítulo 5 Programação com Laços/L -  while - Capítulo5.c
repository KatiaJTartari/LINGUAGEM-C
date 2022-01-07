// Exercício L while - Capítulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int I, J, Somatorio, Num, Fat;
	
	printf("\n Somatório da Fatorial de Quinze Valores \n\n");
	
	Somatorio=0;
	I=1;
	
	while(I<=15){
	  printf("\n Digite o %i%c Valor: ", I,167);	
	  scanf("%d", &Num);
	  Fat=1;
	  J=1;
	  while(J<=Num){
	  	Fat=Fat*J;
	  	J=J+1; //ou J++ ou ++J ou J+=1
	  }	
	  Somatorio=Somatorio+Fat;
	  I=I+1; //ou I++ ou ++I ou I+=1
	}
	
	printf("\n\n O Somatório da Fatorial de Cada Valor Lido é: %d \n\n\n", Somatorio);
	
	system("Pause");
}
