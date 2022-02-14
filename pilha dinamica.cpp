#include <iostream>
#include <cstddef> //Null
using namespace std;


// Pilha dinamica / Dynamic Stack

typedef int tipoitem;

struct node{ // node = nó
    tipoitem valor;
    node *proximo; 

};

class pilhadinamica{
    private:
    int tamanho=0;
    node *notopo;

    public:
    pilhadinamica(){ // construtor
        notopo = NULL;
    }
    ~pilhadinamica(){ // destrutor
        node *temp;
        while (notopo != NULL)
        {
            temp = notopo;
            notopo = notopo->proximo;
            delete temp;
        }
        
    }
    bool tavazio(){ // memoria no computador
        return (notopo == NULL);
    }
    bool tacheio(){
        node *novo;

        try{
            novo = new node;
            delete novo;
            return false;
        }
        catch(bad_alloc exception){
            return true;
        }
    }
    void inserir(tipoitem item){
        if(tacheio()){
            cout << "A pilha esta cheia" << endl;
            cout << "Nao foi possivel inserir este elemento" << endl;
        }
        else{
            node *novo = new node;
            novo->valor = item;
            novo->proximo = notopo;
            notopo = novo;
            tamanho++;
        }
    }
    tipoitem remover(){
        if(tavazio()){
            cout << "A pilha esta vazia\nNao foi possivel retirar nenhum elemento";
        }
        else{
            node *temp;
            temp = notopo;
            tipoitem item = notopo->valor;
            notopo = notopo->proximo;
            delete temp;
            tamanho--;
            return item;
        }
    }
    void imprimir(){
        node *temp = notopo; 
        cout << "Pilha: [";
        while(temp != NULL)
        {
            if(temp->proximo == NULL){
                cout << temp->valor;
                temp = temp->proximo;
            }
            else{
                cout << temp->valor << "; ";
                temp = temp->proximo;
            }
        };

        cout << "]" << endl;
    }
    int qualtamanho(){
        return tamanho;
    }
};

    int main(){
        pilhadinamica pilha;
        tipoitem item;
        int opcao;
        cout << "Programa gerador de pilha dinamica" << endl;
        do{
            cout << "Escolha a opcao desejada\n1. Inserir um elemento\n2. Remover um elemento\n3. Imprimir a pilha\n4. Imprimir o tamanho da pilha\n0. Sair" << endl;
            cin >> opcao;
            if(opcao == 1){
                cout << "Digite o elemento: ";
                cin >> item;
                pilha.inserir(item);
            }
            if(opcao == 2){
                item = pilha.remover();
                cout << "O elemento " << item << " foi removido." << endl;
            }
            if(opcao == 3){
                pilha.imprimir();
            }
            if(opcao == 4){
                cout << "Tamanho da pilha: " << pilha.qualtamanho() << endl;
            }
        }while(opcao!=0);
    }
