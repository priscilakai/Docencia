//Heap M�ximo: n� pai � sempre maior que seus filhos
#include<stdio.h>
#define MAX 10

int heap[MAX];
int ult=0;//pr�xima posi��o livre no heap

void upHeap(){
    int i, aux;
    i = ult-1;//�ltimo elemento
    while(i>0 && heap[parent(i)]<heap[i]){//enquanto n�o chegar � raiz, e pai for menor que filho, sobe
        aux = heap[i];
        heap[i] = heap[parent(i)];
        heap[parent(i)] = aux;//pai e filho trocam de posi��o
        i = parent(i);//acessa o n�vel acima (i � o pai do n� retornado por parent(i))
    }
}


