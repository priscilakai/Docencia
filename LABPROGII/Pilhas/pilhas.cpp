#include <iostream>
using namespace std;

#define MAX_SIZE 20

int stack[MAX_SIZE];
int tos = -1; // variável indicando pilha vazia

// Função para adicionar um elemento na pilha
void push(int i)
{
	if(tos >= MAX_SIZE){
		cout << "Pilha cheia!" << endl;
		return;
	}
	tos++;
	stack[tos] = i;
}

// Função para remover um elemento da pilha
int pop()
{
	if(tos <= -1){
		cout << "Pilha vazia!" << endl;
		return 0;
	}
	int value = stack[tos];
	tos--;
  return value;
}

// Função para imprimir elementos da pilha
void display() {
   if(tos >= 0) {
      cout<<"Os elementos da pilha são: ";
      for(int i = tos; i >= 0; i--)
      cout << stack[i] << " - ";
      cout << endl;
   } else
   cout << "Pilha vazia!" << endl;
}

int main() {
   int ch, val;
   cout << "-----------Exemplo de Pilhas------------" << endl;
   do {
      cout << "----------------------------------------" << endl;
      cout << "\nOpções disponíveis: " << endl;
      cout << "1) Inserir elemento da pilha" << endl;
      cout << "2) Remover elemento da pilha" << endl;
      cout << "3) Imprimir elementos da pilha" << endl;
      cout << "4) Sair" << endl;
      cout << "----------------------------------------" << endl;
      cout << "\nDigite o número da operação que deseja realizar: ";
      cin >> ch;
      cout << "----------------------------------------" << endl;
      switch(ch) {
         case 1:
            cout << "Digite o valor a ser inserido na pilha: " << endl;
            cin >> val;
            push(val);
            break;
         case 2:
            val = pop();
            cout << "O valor " << val << " foi removido da pilha." << endl;
            break;
         case 3:
            display();
            break;
         case 4:
            while(tos > -1){
                val = pop();
                cout << "Remoção do valor " << val << " da pilha." << endl;
            }
            cout << "Saindo da aplicação..." << endl;
            break;
         default:
            cout << "Opção inválida!" << endl;
      }
    } while(ch!=4);
      return 0;
}
