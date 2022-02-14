#include <iostream>
using namespace std;

typedef int tipoitem;

class no{
    public:
    tipoitem valor;
    no* proximo;
};

class filadinamica{
    private:
    no* primeiro;
    no* ultimo;
    int tam = 0;

    public:
    filadinamica(){
        primeiro = NULL;
        ultimo = NULL;
    };
    ~filadinamica(){
        no *temp;
        while(primeiro != NULL)
        {
            temp = primeiro;
            primeiro = primeiro->proximo;
            delete temp;
        }
        ultimo = NULL;
    };
    bool tavazio(){
        return (primeiro == NULL);
    };
    bool tacheio(){
        no *temp;
        try{
            temp = new no;
            delete temp;
            return false;
        }
        catch(bad_alloc exception){
            return true;
        }
    };
    void adicionar(tipoitem item){
        if (tacheio()){
            cout << "A fila ta cheia\nNao foi possivel adicionar o elemento " << item << endl;
        }
        else{
            tam++;
            no *novo = new no;
            novo->valor = item;
            novo->proximo = NULL;
            if(primeiro == NULL){
                primeiro = novo;
            }
            else{
                ultimo->proximo = novo;
            }
            ultimo = novo;
        }
    };
    tipoitem remover(){
        if(tavazio()){
            cout << "A fila ta vazia\nNao foi possivel remover nenhum elemento" << endl;
            return 0;
        }
        else{
            tam--;
            no *temp = primeiro;
            tipoitem item = primeiro->valor;
            primeiro = primeiro->proximo;
            if(primeiro == NULL){
                ultimo = NULL;
            }
            delete temp;
            return item;
        }
    };
    void imprimir(){
        no *temp = primeiro;
        cout << "Fila = [";
        while (temp != NULL)
        {   
            if(temp!= ultimo){
            cout << temp->valor << "; ";
            }
            else{
            cout << temp->valor;
            }
            temp = temp->proximo;
        }
        cout << "]" << endl;
    };
    int tamanho(){
        return tam;
    }
};



int main(){
    int opcao;
    filadinamica fila1;
    tipoitem item;
    do{
        cout << "Escolha uma das seguintes opcoes" << endl;
        cout << "1. Adicionar elemento na fila" << endl;
        cout << "2. Remover elemento na fila" << endl;
        cout << "3. Imprimir fila" << endl;
        cout << "4. Imprimir tamanho da fila" << endl;
        cout << "0. Encerrar o programa" << endl;
        cin >> opcao;

        switch (opcao)
        {
        case 1: cout << "Digite o valor a ser adicionado: ";
                cin >> item;
                fila1.adicionar(item);
            break;
        case 2: item = fila1.remover();
                cout << "O valor " << item << " foi removido." << endl;
            break;
        case 3: fila1.imprimir();
            break;
        case 4: cout << "Tamanho da fila: " << fila1.tamanho() << endl; 
            break;
        case 0: cout << "Programa encerrado" << endl;
            break;
        default: cout << "Opcao invalida" << endl;
            break;
        }
    }while(opcao!=0);
}