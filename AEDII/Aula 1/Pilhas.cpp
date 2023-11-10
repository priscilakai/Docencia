#include <iostream>
#define MAX_SIZE 2
using namespace std;

typedef struct{
    int tos;
    int item [MAX_SIZE];
}Pilha;

void inicializa(Pilha &p)
{
   
}

bool verifica_vazia(Pilha &p)
{
  
}

bool verifica_cheia(Pilha &p)
{
    
}

//armazena um dado na pilha
void push(Pilha &p, int i)
{
    if(verifica_cheia(p)) return;
	p.item[++p.tos] = i;
}

//recupera um dado da pilha
int pop(Pilha &p)
{
    if(verifica_vazia(p))
    {
        cout << "Pilha vazia!" << endl;
        return 0;
    }
	p.item[p.tos--];
	cout << "Item removido da pilha!" << endl;
}

int main()
{
    cout << "Operacao da Pilha" << endl;
    cout << "Pilha: ordem LIFO" << endl;
    cout << "Condicao para armazenar: indice nunca pode estar acima do topo da pilha (overflow)" << endl;
    cout << "Condicao para recuperar: indice nunca pode estar abaixo da base da pilha (underflow)" << endl;
    cout << "***** Faca uma solucao completa para inserir e remover inteiros de uma pilha*****" << endl;

    Pilha s; //criando pilha
    
    return 0;
}
