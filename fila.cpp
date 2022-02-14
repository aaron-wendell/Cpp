#include <iostream>
using namespace std;
// fila/queue
typedef int tipoitem;
const int maxitem = 100;

class fila{
    private:
    int primeiro, ultimo, tamanho=0; // first, last
    tipoitem *estrutura;

    public:
    fila(){ // construtor/stack
        primeiro = 0;
        ultimo = 0;
        estrutura = new tipoitem[maxitem];
    };
    ~fila(){ // destrutor/~stack
        delete[] estrutura;
    };
    
    bool tavazio(){
        return (primeiro == ultimo);
    };
    
    bool tacheio(){
        return (ultimo-primeiro == maxitem);
    };
    
    void inserir(tipoitem item){ // push/enqueue
        if(tacheio()){
            cout << "A fila esta cheia" << endl;
            cout << "Esse elemento nao pode ser inserido" << endl;
        }
        else{
            estrutura[ultimo % maxitem] = item;
            ultimo++;
            tamanho++;
        }
    };

    tipoitem remover(){
        if(tavazio()){
            cout << "A fila esta vazia, nao ha elemento a remover. " << endl;
        }
        else{
            primeiro++;
            tamanho--;
            return estrutura[(primeiro-1)  % maxitem];
        }
    };

    void imprimir(){
        cout << "Fila: [";
        for(int i=primeiro; i<ultimo; i++){
            if(i==ultimo-1){
                cout << estrutura[i];
            }
            else{
                cout << estrutura[i%maxitem] << "; ";
                }
        }
        cout << "]" << endl;
    };

    int qualtamanho(){
        return tamanho;
    }
    
};


int main(){
    fila fila1;
    int opcao;
    tipoitem item;


    cout << "Programa gerador de pilha: " << endl;
    do{
        cout << "Opcoes: \n1. Inserir um elemento\n2. Remover um elemento\n3. Imprimir fila\n4. Tamanho da fila\n0. Encerrar o programa" << endl;
        cin >> opcao;
        if(opcao == 1){
            cout << "Digite o elemento a ser inserido na fila: ";
            cin >> item;
            fila1.inserir(item);
        }
        else if(opcao == 2){
            item = fila1.remover();
            cout << "O elemento " << item << " foi removido." << endl;
        }
        else if(opcao == 3){
            fila1.imprimir();
        }
        else if(opcao == 4){
            cout << "Tamanho da fila: " << fila1.qualtamanho() << endl;
        }
    }while(opcao!=0);
};