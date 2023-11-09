/* Exercicio a_Recursao
Insira a ordem de empilhamento das chamadas recursivas com 
o valor da variável empilhada, e depois o respectivo valor de cada retorno à chamada, 
como nos exemplos da aula (Slide 6)

Considere como entrada o valor 4

*/


#include <stdio.h>
int recursao(int);

int main(){
	
	int x;
	printf("\n Informe um inteiro maior que zero: ");
	scanf("%d", &x);
	printf("%d",recursao(x));
	
    return 0; 
}

int recursao(int n){
	if(n > 0){
		recursao(n-1);
		printf(" %d ", n);
	}
	return n;
}

//Solução:
/*
    Empilha			 Desempilha
chamada, varLocal





*/
