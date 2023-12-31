/*
Faça uma solução, usando modularidade, para realizar as seguintes operações:
1.Inserir 10 valores em um vetor de inteiros
2.Duplicar os elementos do vetor
3.Imprimir os valores do vetor
Use a estrutura switch-case para a escolha das opções acima. O usuário decidirá quando encerrar o programa. 
Para o vetor de inteiros, alocar memória com a função malloc()
Quando escolher a opção para encerrar o programa, libere memória usando a função free()
*/
#include <stdio.h>
#include <stdlib.h>

void *inserir(int*);
void *duplicar(int*);
void imprimir(int*);

int main()
{
	
	int *v, op;
	v = (int*)malloc(sizeof(int)*10);
	
	if(v!=NULL){
		do{
			printf("\n 1.Inserir, 2.Duplicar, 3.Imprimir, 4.Encerrar");
			scanf("%d", &op);
			switch(op){
				case 1: ...; break;
				case 2: ...; break;
				case 3: ...; break;
				case 4: free(v);
			}
		}while(op!=4);				
	}
	else
		printf("\n Nao ha memoria!");
	
	return 0;
}

\\ o asterisco (*) faz o compilador saiba que a função não vai guardar um valor 
\\ mas sim um endereço para aquele tipo especificado.
\\ Se estivesse usando uma função que apontaria para outro local de memória, então 
\\ &variavel será necessária. Exemplo: scanf("%d",&x[i])
void *inserir(int* x){
  ...
		scanf("%d", &x[i]);
	}
}

void *duplicar(int* y){
	...
}

void imprimir(int* z){
	...
}
