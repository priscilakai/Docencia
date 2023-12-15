//Lista: diferentemente de pilhas e filas, elementos em uma lista podem ser inseridos e removidos em qualquer ordem
#include <stdio.h>
#include <stdlib.h>

//estrutura de um registro para criar uma lista duplamente encadeada
struct hospede{
	char nome[20];
	int quarto;
	struct hospede *prox;
	struct hospede *ant;
};

struct hospede *REG;//declaração de um ponteiro para registro do tipo struct hospede

//O acesso aos campos de REG podem ocorrer de duas maneiras:
//Com o operador ponto (.): (*REG).nome, (*REG).quarto
//Com o operador seta (->): REG->nome, REG->quarto (esta é a notação mais usada para listas)
