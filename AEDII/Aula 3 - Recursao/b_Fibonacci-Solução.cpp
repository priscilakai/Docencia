/* Exercicio b_Fibonacci
Faça uma solução iterativa e uma recursiva para obter o n-ésimo termo da Série de Fibonacci
Obs.
Cada elemento da Série é a soma dos dois anteriores:
1, 1, 2, 3, 5, 8, 13, ... 
Fib(0) = 0
Fib(1) = 1
Fib(n) = Fib(n-1)+Fib(n-2) para n > 1
Assim, no algoritmo recursivo, para n=0 ou n=1, retornar n
Caso contrário (n>1), retornar Fib(n-1)+Fib(n-2) 

*/

#include <stdio.h>
int fiboIter(int);
int fiboRec(int);

int main(){
	
	int num;
	scanf("%d",&num);
	printf("\n Fibonacci Iterativo: %d", fiboIter(num));
	printf("\n Fibonacci Recursivo: %d", fiboRec(num));
    
	return 0; 
}

int fiboRec(int n){

	if(n==0 || n==1)
		return n;
	else
		return fiboRec(n-1)+fiboRec(n-2);
}

int fiboIter(int n){

	int i, t, c, a = 0, b = 1;
	for(i=0;i<n;i++){
		c = a+b;
		a = b;
		b = c;
	}
	return a;
}


