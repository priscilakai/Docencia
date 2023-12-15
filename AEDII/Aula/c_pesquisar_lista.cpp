//Lista: diferentemente de pilhas e filas, elementos em uma lista podem ser inseridos e removidos em qualquer ordem
/*
Tr�s situa��es podem ocorrer:
1. O item inserido � o primeiro
2. O item inserido � o do meio
3. O item inserido � o �ltimo
*/
#include <stdio.h>
#include <stdlib.h>

struct hospede{
	char nome[20];
	int quarto;
	struct hospede *prox;
	struct hospede *ant;
};

struct hospede *prim = NULL;
struct hospede* pesquisar(int);

struct hospede* pesquisar(int q){
	struct hospede *p;
	p = prim;
	while(p)
		if(p->quarto!= q)
			p=p->prox;
		else
			break;
	return p;	
}
