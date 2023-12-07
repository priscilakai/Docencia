//Exemplo de ponteiro para ponteiro
//O exemplo a seguir mostra como criar uma matriz (de inteiros) em tempo de execu��o
//No primeiro passo s�o criadas as linhas da matriz (� uma coluna de ponteiros para ponteiros)
//No segundo passo s�o criadas as colunas da matriz (� uma linha de ponteiros para cada coluna)
//Para liberar a mem�ria alocada para a matriz, liberar a mem�ria alocada em cada uma de suas dimens�es, na ordem inversa da que foi alocada
 
#include <stdio.h>
#include <stdlib.h>
int main(){

	int **p;//dois n�veis, isto �, duas dimens�es
	int i, j, N = 2;
	
	p = (int**) malloc(N*sizeof(int*));//linhas da matriz, isto �, um vetor de ponteiros. Cada linha apontar� para o primeiro endere�o das suas colunas
	
	for(i=0;i<N;i++){
		p[i] = (int*) malloc(N*sizeof(int));//coluna para cada linha da matriz. Veja que este la�o possibilita criar matrizes n�o retangulares  
		for(j=0;j<N;j++)//insere elementos na matriz
			scanf("%d", &p[i][j]);
	}

	for(i=0;i<N;i++)//libera mem�ria de cada coluna
		free(p[i]);

	free(p);//libera mem�ria das linhas (ponteiro para ponteiro)
	return 0;
}

/*
1�malloc			2�malloc
 _______  	 _______________________
|______| 	|_______|______|________|
|______| 	|_______|______|________|
|______| 	|_______|______|________|
|______| 	|_______|______|________|

//O 1�malloc cria as linhas da matriz, e � ponteiro para ponteiro para inteiros
//O 2�malloc cria as colunas da matriz, e � ponteiro para inteiros

*/
//fonte: https://www.cin.ufpe.br/~rrbs/AC_/LinguagemC/apostilaC.pdf

