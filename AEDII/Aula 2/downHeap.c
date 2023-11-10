//Heap Máximo: nó pai é sempre maior que seus filhos
#include<stdio.h>
#define MAX 10

int heap[MAX];
int ult=0;//próxima posição livre no heap

void downHeap(){
    int i, aux;

    i = 0;//raiz
    while(i!=-1 && (heap[right(i)] > heap[i] || heap[left(i)] > heap[i])){//enquanto não chegar à posição livre (-1), e pai for menor que filhos, desce
        aux = heap[i];
        if(heap[right(i)] > heap[i] && heap[right(i)] > heap[left(i)]){//direita troca com o pai
            heap[i] = heap[right(i)];
            heap[right(i)] = aux;
            i = right(i);
        }
        else if(heap[left(i)] > heap[i] && heap[left(i)] > heap[right(i)]){//esquerda troca com o pai
            heap[i] = heap[left(i)];
            heap[left(i)] = aux;
            i = left(i);
        }
    }
}
