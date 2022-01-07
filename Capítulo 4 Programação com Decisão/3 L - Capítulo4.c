// Exercício 3.l - Capítulo 4

#include<stdio.h>
#include<conio.h>
#include<locale.h>

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int N;
	
	printf("\n \t\t NÃO SEJA MAIOR QUE 3 \n\n");
	
	printf("\n \t Digite um Valor Numérico: ");
	scanf("%d", &N);
	
	if(!(N>3)){
	  printf("\n\n \t ******************************** ");	
	  printf("\n \t\t\t %d", N);
	  printf("\n \t ******************************** ");	
    }
    
	printf("\n\n");
	
	getch();
}
