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
struct hospede* pesquisar(int);
void excluir(struct hospede*);
void imprimir();

int main(){

	int	op, quarto;
	struct hospede *res;
	
	do{
		printf("\n 0.Sair, 1.Inserir, 2.Pesquisar, 3.Imprimir, 4.Excluir");
		scanf("%d", &op);
		switch(op){
			case 0: 
				break;
			case 1: 
				inserir(); break;
			case 2: 
				printf("\n Quarto: ");
				scanf("%d", &quarto);
				res = pesquisar(quarto); 
				if(!res)
					printf("\n Nao encontrado.");
				else
					printf("\n Nome= %s \n quarto = %d", res->nome, res->quarto);
				break;
			case 3:
				imprimir();
				break;
			case 4:
				printf("\n Quarto: ");
				scanf("%d", &quarto);
				res = pesquisar(quarto);//retorna o registro 
				if(!res)
					printf("\n Nao encontrado.");
				else
					excluir(res);
				break;
		}
	}while(op!=0);
	
	return 0;
}
