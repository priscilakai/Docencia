#include <iostream>
#include <string>

using namespace std;

#define MAX_SIZE 20

char stack[MAX_SIZE];
int tos = -1; // variável indicando pilha vazia

// Função para adicionar um elemento na pilha
void push(char c)
{
	if(tos >= MAX_SIZE - 1){
		cout << "Pilha cheia!" << endl;
		return;
	}
	tos++;
	stack[tos] = c;
}

// Função para remover um elemento da pilha
int pop()
{
	if(tos <= -1){
		cout << "Pilha vazia!" << endl;
		return 0;
	}
	return stack[tos--];
}

bool is_valid(const string& input){
    bool valid = true;
    for(size_t i = 0; i < input.size(); i++){
        if (input[i] == '(' || input[i] == '[' || input[i] == '{' ){
            push(input[i]);
        } else if (input[i] == ')' || input[i] == ']' || input[i] == '}' ){
            if(tos <= -1){
                valid = false;
                break;
            } else {
                if ((input[i] == ')' && stack[tos] != '(') ||
                    (input[i] == ']' && stack[tos] != '[') ||
                    (input[i] == '}' && stack[tos] != '{')) {
                    valid = false;
                    break;
                }
                pop();
            }
        }
    }
    if(tos >= 0){
        valid = false;
    }
    return valid;
}

int main() {
   int ch, val;
   cout << "-----------Exemplo de Pilhas------------" << endl;
   do {
      cout << "----------------------------------------" << endl;
      cout << "\nOpções disponíveis: " << endl;
      cout << "1) Informar expressão matemática" << endl;
      cout << "2) Sair" << endl;
      cout << "----------------------------------------" << endl;
      cout << "\nDigite o número da operação que deseja realizar: ";
      cin >> ch;
      cin.ignore(); // Descartar o caractere de nova linha remanescente
      cout << "----------------------------------------" << endl;
      switch(ch) {
         case 1:
         {
            string input;
            cout << "Digite a expressão matemática que será verificada: " << endl;
            getline(cin, input);
            if (is_valid(input))
                cout << "Expressão válida!" << endl;
            else
                cout << "Expressão inválida!" << endl;
            break;
         }
         case 2:
         {
            cout << "Saindo da aplicação..." << endl;
            break;
         }
         default:
            cout << "Opção inválida!" << endl;
      }
    } while(ch!=2);
    return 0;
}
