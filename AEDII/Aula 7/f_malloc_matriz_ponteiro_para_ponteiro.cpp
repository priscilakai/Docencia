//Exemplo de ponteiro para ponteiro
//O exemplo a seguir mostra como criar uma matriz (de inteiros) em tempo de execução
//No primeiro passo são criadas as linhas da matriz (é uma coluna de ponteiros para ponteiros)
//No segundo passo são criadas as colunas da matriz (é uma linha de ponteiros para cada coluna)
//Para liberar a memória alocada para a matriz, liberar a memória alocada em cada uma de suas dimensões, na ordem inversa da que foi alocada
 
#include <stdio.h>
#include <stdlib.h>
int main(){

	int **p;//dois níveis, isto é, duas dimensões
	int i, j, N = 2;
	
	p = (int**) malloc(N*sizeof(int*));//linhas da matriz, isto é, um vetor de ponteiros. Cada linha apontará para o primeiro endereço das suas colunas
	
	for(i=0;i<N;i++){
		p[i] = (int*) malloc(N*sizeof(int));//coluna para cada linha da matriz. Veja que este laço possibilita criar matrizes não retangulares  
		for(j=0;j<N;j++)//insere elementos na matriz
			scanf("%d", &p[i][j]);
	}

	for(i=0;i<N;i++)//libera memória de cada coluna
		free(p[i]);

	free(p);//libera memória das linhas (ponteiro para ponteiro)
	return 0;
}

/*
1ºmalloc			2ºmalloc
 _______  	 _______________________
|______| 	|_______|______|________|
|______| 	|_______|______|________|
|______| 	|_______|______|________|
|______| 	|_______|______|________|

//O 1ºmalloc cria as linhas da matriz, e é ponteiro para ponteiro para inteiros
//O 2ºmalloc cria as colunas da matriz, e é ponteiro para inteiros

*/
//fonte: https://www.cin.ufpe.br/~rrbs/AC_/LinguagemC/apostilaC.pdf

