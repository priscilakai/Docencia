//Solu��o para Heap M�ximo: n� pai � sempre maior que seus filhos
#include<stdio.h>
#define MAX 10

int heap[MAX];
int ult=0;//pr�xima posi��o livre no heap

int left(int);//acessa n� � esquerda
int right(int);//acessa n� � direita
int parent(int);//acessa n� pai
void insertHeap(int);//insere o elemento na posi��o livre (ult)
void upHeap();//reposiciona o �ltimo elemento inserido, se necess�rio (verifica viola��o da Propriedade 1, podendo subir at� a raiz)
int removeHeap();//remove a raiz (elemento de maior prioridade)
void downHeap();//reposiciona o �ltimo elemento inserido, se necess�rio (verifica viola��o da Propriedade 1, podendo descer at� a folha ou n� sem sub�rvore)
void imprimir();//imprime o heap (para efeito de teste das opera��es de inserir e remover)

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
    id=2*index+1;//filho � esquerda
    if(id>=ult)
        return -1;//filho n�o existe
    return id;
}

int right(int index){
    int id;
    id=2*(index+1);//filho � direita
    if(id>=ult)
        return -1;//filho n�o existe
    return id;
}

int parent(int index){
    return ((index-1)/2);
}

void insertHeap(int item){
    if(ult >= MAX)//n�o h� espa�o para armazenar o item
        return;
    heap[ult] = item;//item adicionado ao heap, com custo 1
    ult++;//pr�xima posi��o livre no heap
    upHeap();//organiza o item na posi��o adequada (restaura��o da Propriedade 1) com custo logar�tmico
}

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

int removeHeap(){
    int i, aux;

    if(!ult)//n�o h� item no heap
        return -1;
    aux = heap[0];//raiz a ser removida

    if(ult > 1){//mais de um item no heap, determinar nova raiz
        heap[0] = heap[ult-1];//�ltimo item ser� a raiz para garantir a Propriedade 2
        downHeap();//organiza o item na posi��o adequada (restaura��o da Propriedade 1) com custo logar�tmico
    }

    //para 1 ou mais itens na estrutura
    ult--;//item removido, com custo 1
    return(aux);
}

void downHeap(){
    int i, aux;

    i = 0;//raiz
    while(i!=-1 && (heap[right(i)] > heap[i] || heap[left(i)] > heap[i])){//enquanto n�o chegar � folha ou ao n� sem sub�rvore (-1), e pai for menor que filhos, desce
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

