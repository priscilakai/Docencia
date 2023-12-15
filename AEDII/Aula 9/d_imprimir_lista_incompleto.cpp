#include <stdio.h>
#include <stdlib.h>

struct hospede{
	char nome[20];
	int quarto;
	struct hospede *prox;
	struct hospede *ant;
};

struct hospede *prim = NULL;
void imprimir();

void imprimir(){
	struct hospede *p;
	//qual o valor inicial para p?
	while(p){
		//o que deve ser impresso?
		//como apontar para o registro seguinte?	
	}	
}

