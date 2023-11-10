//Heap Máximo: nó pai é sempre maior que seus filhos
#include<stdio.h>
#define MAX 10

int heap[MAX];
int ult=0;//próxima posição livre no heap

void upHeap(){
    int i, aux;
    i = ult-1;//último elemento
    while(i>0 && heap[parent(i)]<heap[i]){//enquanto não chegar à raiz, e pai for menor que filho, sobe
        aux = heap[i];
        heap[i] = heap[parent(i)];
        heap[parent(i)] = aux;//pai e filho trocam de posição
        i = parent(i);//acessa o nível acima (i é o pai do nó retornado por parent(i))
    }
}


