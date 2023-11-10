/*
Neste arquivo, apenas as funções enqueue() e dequeue() são apresentadas
Faça uma solução completa para simular uma fila de inteiros. Faça uso de laços para observar o comportamento FIFO
*/

#include <stdio.h>
#define MAX 100

/* as funções enqueue e dequeue armazenarão as posições para os números adicionados. */
char queue[MAX];
// spos e rpos são variáveis globais
int spos = 0; //contém o índice da próxima posição de armazenamento livre
int rpos = 0; //contém o índice do próxima evento a ser recuperado

/*Armazena um inteiro*/
void enqueue(int item)
{
    if(spos==MAX)
    {
        printf("Lista de eventos cheia!\n");
        return;
    }
    else
    {
        printf("Item %d adicionado com sucesso!\n",item);
    }
    queue[spos] = item;
    spos++;
}

/*Recupera um evento*/
int dequeue()
{
    int item;
    if(rpos==spos)
    {
        printf("Sem eventos.\n");
        return -1;
    }
    item = queue[rpos];
    rpos++;
    return item;
}

int main()
{
    return 0;
}


