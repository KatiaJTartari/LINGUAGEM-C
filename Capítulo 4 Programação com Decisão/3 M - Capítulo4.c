// Exerc�cio 3.m - Cap�tulo 4

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	char Nome[15], Sexo;
	
	printf("\n \t\t\t SAUDA��O \n");
	
	printf("\n \t\t Nome: ");
	scanf("%s", Nome); /* Fun��o scanf para String: Nunca � precedida do & as vari�veis. Realiza 
				       apenas a leitura de uma �nica palavra. L� todos os caracteres at� encontrar 
					   um <ESPA�O>, <TAB> ou <ENTER> e ap�s coloca (o caractere delimitador'\0').*/
					   
	//Ou   gets(Nome);   em vez de scanf("%s", Nome);	
				   	
	/* Fun��o gets - (get string): Ao contr�rio do scanf n�o est� limitada a leitura de uma 
	   �nica palavra. Permite colocar todos os caracteres introduzidos pelo utilizador.*/
	
	printf("\n \t\t Sexo: ");
	scanf(" %c", &Sexo);
	      /* Deixar um espa�o em branco antes do %c entre aspas, 
		  para poder ler o caractere digitado, sen�o deixar o espa�o d� erro. */
	
	if(Sexo=='M' || Sexo=='m' || Sexo=='F' || Sexo=='f')
	  if(Sexo=='M' || Sexo=='m'){
	  	printf("\n\n \t\t Ilmo. Sr. %s", Nome);
      }
	  else{
	  	printf("\n\n \t\t Ilma. Sra. %s", Nome);
      }
   	else{
	  printf("\n\n \t\t Sexo Informado Inv�lido");
      // ou puts("\n\n \t\t Sexo Informado Inv�lido");
	}
	  	   
	/* Fun��o puts - (put string): Permite unicamente a escrita de strings,
	 sejam elas constantes ou estejam armazenadas em vari�veis. A fun��o puts
	   faz uma mudan�a autom�tica de linha depois de escrita a string. */
        
	printf("\n\n\n\n\n");
	
	system("Pause");
}
