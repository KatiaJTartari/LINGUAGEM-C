// Teste de Caractere e String

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char Nome[50], Sexo, Profissao[20];
	
	puts("\n \t\t CARACTERE E STRING");
	
	printf("\n Digite o nome completo: ");
	gets(Nome);
	
	printf("\n Digite o sexo: ");
	scanf(" %c", &Sexo);
	fflush(stdin); // Limpa o buffer do teclado
	
	printf("\n Digite a sua profiss�o: ");
	gets(Profissao);
	
	printf("\n\n Meu nome � %s , sexo %c e minha profiss�o � %s \n", Nome, Sexo, Profissao);
	
	getch();
}
