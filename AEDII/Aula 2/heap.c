//Solução para Heap Máximo: nó pai é sempre maior que seus filhos
#include<stdio.h>
#define MAX 10

int heap[MAX];
int ult=0;//próxima posição livre no heap

int left(int);//acessa nó à esquerda
int right(int);//acessa nó à direita
int parent(int);//acessa nó pai
void insertHeap(int);//insere o elemento na posição livre (ult)
void upHeap();//reposiciona o último elemento inserido, se necessário (verifica violação da Propriedade 1, podendo subir até a raiz)
int removeHeap();//remove a raiz (elemento de maior prioridade)
void downHeap();//reposiciona o último elemento inserido, se necessário (verifica violação da Propriedade 1, podendo descer até a folha ou nó sem subárvore)
void imprimir();//imprime o heap (para efeito de teste das operações de inserir e remover)

int main(){
	
	insertHeap(2);
	insertHeap(4);
	insertHeap(9);	
	insertHeap(6);
	insertHeap(5);
	insertHeap(98);
	insertHeap(10);
	insertHeap(15);
	insertHeap(81);
	imprimir();
	removeHeap();imprimir();
	removeHeap();imprimir();
	removeHeap();imprimir();
	removeHeap();imprimir();
	removeHeap();imprimir();
	removeHeap();imprimir();
	removeHeap();imprimir();
	removeHeap();imprimir();
    
	return 0;
}

int left(int index){
    int id;
    id=2*index+1;//filho à esquerda
    if(id>=ult)
        return -1;//filho não existe
    return id;
}

int right(int index){
    int id;
    id=2*(index+1);//filho à direita
    if(id>=ult)
        return -1;//filho não existe
    return id;
}

int parent(int index){
    return ((index-1)/2);
}

void insertHeap(int item){
    if(ult >= MAX)//não há espaço para armazenar o item
        return;
    heap[ult] = item;//item adicionado ao heap, com custo 1
    ult++;//próxima posição livre no heap
    upHeap();//organiza o item na posição adequada (restauração da Propriedade 1) com custo logarítmico
}

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

int removeHeap(){
    int i, aux;

    if(!ult)//não há item no heap
        return -1;
    aux = heap[0];//raiz a ser removida

    if(ult > 1){//mais de um item no heap, determinar nova raiz
        heap[0] = heap[ult-1];//último item será a raiz para garantir a Propriedade 2
        downHeap();//organiza o item na posição adequada (restauração da Propriedade 1) com custo logarítmico
    }

    //para 1 ou mais itens na estrutura
    ult--;//item removido, com custo 1
    return(aux);
}

void downHeap(){
    int i, aux;

    i = 0;//raiz
    while(i!=-1 && (heap[right(i)] > heap[i] || heap[left(i)] > heap[i])){//enquanto não chegar à folha ou ao nó sem subárvore (-1), e pai for menor que filhos, desce
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

void imprimir(){

    int i;

    for(i=0;i<ult;i++)
        printf(" %d ", heap[i]);
    printf("\n");
    system("pause");
}

