// Exercício 3.m - Capítulo 4

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	char Nome[15], Sexo;
	
	printf("\n \t\t\t SAUDAÇÃO \n");
	
	printf("\n \t\t Nome: ");
	scanf("%s", Nome); /* Função scanf para String: Nunca é precedida do & as variáveis. Realiza 
				       apenas a leitura de uma única palavra. Lê todos os caracteres até encontrar 
					   um <ESPAÇO>, <TAB> ou <ENTER> e após coloca (o caractere delimitador'\0').*/
					   
	//Ou   gets(Nome);   em vez de scanf("%s", Nome);	
				   	
	/* Função gets - (get string): Ao contrário do scanf não está limitada a leitura de uma 
	   única palavra. Permite colocar todos os caracteres introduzidos pelo utilizador.*/
	
	printf("\n \t\t Sexo: ");
	scanf(" %c", &Sexo);
	      /* Deixar um espaço em branco antes do %c entre aspas, 
		  para poder ler o caractere digitado, senão deixar o espaço dá erro. */
	
	if(Sexo=='M' || Sexo=='m' || Sexo=='F' || Sexo=='f')
	  if(Sexo=='M' || Sexo=='m'){
	  	printf("\n\n \t\t Ilmo. Sr. %s", Nome);
      }
	  else{
	  	printf("\n\n \t\t Ilma. Sra. %s", Nome);
      }
   	else{
	  printf("\n\n \t\t Sexo Informado Inválido");
      // ou puts("\n\n \t\t Sexo Informado Inválido");
	}
	  	   
	/* Função puts - (put string): Permite unicamente a escrita de strings,
	 sejam elas constantes ou estejam armazenadas em variáveis. A função puts
	   faz uma mudança automática de linha depois de escrita a string. */
        
	printf("\n\n\n\n\n");
	
	system("Pause");
}
