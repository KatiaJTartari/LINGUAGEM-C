// Exerc�cio 3.j - Cap�tulo 4

#include<conio.h>
#include<stdio.h>
#include<locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int N, Resto;
	
	printf("\n \t\t PAR OU �MPAR \n\n \a"); // \a soa o alarme do microcomputador
	
	printf("\n \t Digite um n�mero: ");
	scanf("%d", &N);
	
	
	
	Resto = N-2*(N/2);
	// ou
	// Resto = N%2;  usando o operador % mod/modulo para o c�lculo do resto da divis�o              
	
	if(Resto==0){
	  printf("\n\n \t O n�mero %d � Par. \n\n\n \a\a\a", N);
	}
	else{
	  printf("\n\n \t O n�mero %d � �mpar. \n\n\n \a\a\a", N);
	}
	
	system("Pause");
}

