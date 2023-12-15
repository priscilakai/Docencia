//Lista: diferentemente de pilhas e filas, elementos em uma lista podem ser inseridos e removidos em qualquer ordem
/*
Três situações podem ocorrer:
1. O item inserido é o primeiro
2. O item inserido é o do meio
3. O item inserido é o último
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
struct hospede *novo;
struct hospede *ult;

void inserir();
void encadear();

void inserir(){
	novo = (struct hospede*) malloc(sizeof(struct hospede));
	if(!novo){
		printf("\n Falha na alocacao");
		return;
	}
	
	printf("\n nome: ");
	scanf("%s", &novo->nome);
	printf("\n quarto: ");
	scanf("%d", &novo->quarto);
	encadear();
}

void encadear(){

	if(!prim){
		prim = novo;
		prim->ant = NULL;
		prim->prox = NULL;
	}
	else{//não insere em ordem; apenas encadeia com o último registro
		ult->prox = novo;
		novo->prox = NULL;
		novo->ant = ult;
	}
	ult = novo;
	printf("\n registro cadastrado");
}

