// Exercício 3.j - Capítulo 4

#include<conio.h>
#include<stdio.h>
#include<locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int N, Resto;
	
	printf("\n \t\t PAR OU ÍMPAR \n\n \a"); // \a soa o alarme do microcomputador
	
	printf("\n \t Digite um número: ");
	scanf("%d", &N);
	
	
	
	Resto = N-2*(N/2);
	// ou
	// Resto = N%2;  usando o operador % mod/modulo para o cálculo do resto da divisão              
	
	if(Resto==0){
	  printf("\n\n \t O número %d é Par. \n\n\n \a\a\a", N);
	}
	else{
	  printf("\n\n \t O número %d é Ímpar. \n\n\n \a\a\a", N);
	}
	
	system("Pause");
}

