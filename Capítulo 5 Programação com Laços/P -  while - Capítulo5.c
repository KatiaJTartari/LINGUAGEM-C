// Exerc�cio P while - Cap�tulo 5

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main(){
	
	int I, Soma, Total, Resto;
	float Media;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Soma e M�dia Aritm�tica dos Valores Pares na Faixa de 50 at� 70 \n");
	
	Soma=0;
	Total=0;
	I=50;
	
	while(I<=70){
	  Resto=I%2; //ou sem o operador mod % Resto=I-2*(I/2);
	  if(Resto==0){
	  	Soma=Soma+I;
	  	Total=Total+1;
	  }	
	  I=I+1; //ou I++ ou ++I ou I+=1  
	}
	
	Media=Soma/Total;
	
	printf("\n\n A Soma �: %d e a M�dia �: %5.1f \n\n", Soma, Media);
	
	return(0);
}
