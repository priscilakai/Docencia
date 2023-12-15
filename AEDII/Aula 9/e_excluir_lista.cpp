#include <stdio.h>
#include <stdlib.h>

struct hospede{
	char nome[20];
	int quarto;
	struct hospede *prox;
	struct hospede *ant;
};

struct hospede *prim = NULL;
struct hospede *ult;

void excluir(struct hospede*);

void excluir(struct hospede* x){
	
	if(x==prim)	//eliminar o primeiro registro
		if(prim->prox != NULL){//tem mais de um registro
			prim = prim->prox;
			prim->ant = NULL;
		}
		else{
			prim = NULL;
			ult = NULL;
			free(prim);
			free(ult);
		}			
	else
		if(x==ult){//eliminar o último registro
			ult = ult->ant;
			ult->prox = NULL;
		}
		else{//qualquer outro registro
			x->ant->prox = x->prox;
			x->prox->ant = x->ant;
		}
	
	free(x);
	printf("\n Registro eliminado\n");
}

