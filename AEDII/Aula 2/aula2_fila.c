/*
Neste arquivo, apenas as fun��es enqueue() e dequeue() s�o apresentadas
Fa�a uma solu��o completa para simular uma fila de inteiros. Fa�a uso de la�os para observar o comportamento FIFO
*/

#include <stdio.h>
#define MAX 100

/* as fun��es enqueue e dequeue armazenar�o as posi��es para os n�meros adicionados. */
char queue[MAX];
// spos e rpos s�o vari�veis globais
int spos = 0; //cont�m o �ndice da pr�xima posi��o de armazenamento livre
int rpos = 0; //cont�m o �ndice do pr�xima evento a ser recuperado

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


