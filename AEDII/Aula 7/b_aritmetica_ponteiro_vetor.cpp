#include <stdio.h>

int main(){
	
	int v[]={1,2,3,4,5,6};
	int *p;
	
	for(p = v; p <= &v[5]; p++)//aritmética de ponteiro (p++) aplicada em vetor, e uso de operador relacional entre ponteiros (p <= &v[5])
		printf("%d ", *p);

	printf("\n");
	//O laço acima produz, na inicialização de p, a cada iteração:
	//Iteração 1: p = &v[0] ou p = v + 0 (aritmética de ponteiro (v + N) aplicada em vetor)
	printf("%d ", *(v + 0));
	//Iteração 2: p = &v[1] ou p = v + 1
	printf("%d ", *(v + 1));
	//Iteração 3: p = &v[2] ou p = v + 2
	printf("%d ", *(v + 2));
	//Iteração 4: p = &v[3] ou p = v + 3
	printf("%d ", *(v + 3));
	//Iteração 5: p = &v[4] ou p = v + 4
	printf("%d ", *(v + 4));
	//Iteração 6: p = &v[5]	ou p = v + 5
	printf("%d ", *(v + 5));
	
	return 0;
}

//Obs.: Não pode fazer v++, já que v não foi declarado como um ponteiro

/* Explicação do cabeçalho do laço
for(p = v; p <= &v[5]; p++)

p = v; 
É o mesmo que p = &v[0];
p aponta para a primeira posição de memória do vetor v

p <= &v[5];
Comparação entre memórias. &v[5] é a última posição de memória alocada para o vetor v

p++
É o mesmo que p = p+1. (p+N) desloca N posições à frent
*/
