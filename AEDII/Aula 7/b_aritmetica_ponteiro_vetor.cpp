#include <stdio.h>

int main(){
	
	int v[]={1,2,3,4,5,6};
	int *p;
	
	for(p = v; p <= &v[5]; p++)//aritm�tica de ponteiro (p++) aplicada em vetor, e uso de operador relacional entre ponteiros (p <= &v[5])
		printf("%d ", *p);

	printf("\n");
	//O la�o acima produz, na inicializa��o de p, a cada itera��o:
	//Itera��o 1: p = &v[0] ou p = v + 0 (aritm�tica de ponteiro (v + N) aplicada em vetor)
	printf("%d ", *(v + 0));
	//Itera��o 2: p = &v[1] ou p = v + 1
	printf("%d ", *(v + 1));
	//Itera��o 3: p = &v[2] ou p = v + 2
	printf("%d ", *(v + 2));
	//Itera��o 4: p = &v[3] ou p = v + 3
	printf("%d ", *(v + 3));
	//Itera��o 5: p = &v[4] ou p = v + 4
	printf("%d ", *(v + 4));
	//Itera��o 6: p = &v[5]	ou p = v + 5
	printf("%d ", *(v + 5));
	
	return 0;
}

//Obs.: N�o pode fazer v++, j� que v n�o foi declarado como um ponteiro

/* Explica��o do cabe�alho do la�o
for(p = v; p <= &v[5]; p++)

p = v; 
� o mesmo que p = &v[0];
p aponta para a primeira posi��o de mem�ria do vetor v

p <= &v[5];
Compara��o entre mem�rias. &v[5] � a �ltima posi��o de mem�ria alocada para o vetor v

p++
� o mesmo que p = p+1. (p+N) desloca N posi��es � frent
*/
