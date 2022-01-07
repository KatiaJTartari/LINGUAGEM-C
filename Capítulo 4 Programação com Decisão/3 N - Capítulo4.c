// Exercício 3.n - Capítulo 4

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, C, R;
	
	printf("\n Resultado da Soma somente se for maior ou igual a 100 \n\n");
	
	printf("\n Digite Três Valores: \n");
	scanf("%d %d %d", &A, &B, &C);
	
	R=A+B+C;
	
	if(R>=100){
	  printf("\n\n O Resultado é: %d", R);
    }
    
    printf("\n\n\n");
    
   system("Pause");	
}
