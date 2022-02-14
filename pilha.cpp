#include <iostream>
using namespace std;

typedef int tipoitem;
const int maxitem = 100;

class pilha{
    private:
    int tamanho;
    tipoitem *estrutura;

    public:
    pilha() //construtora stack
    {
        tamanho = 0;
        estrutura = new tipoitem[maxitem];
    };
    ~pilha() //destrutora ~stack
    {
        delete[] estrutura;
    };
    bool tacheia() // if is full
    {
        return (tamanho == maxitem);
    };
    bool tavazia() // if is empty
    {
        return (tamanho == 0);
    };
    void inserir(tipoitem item) // push
    {
        if(tacheia()){
            cout << "A pilha esta cheia" << endl;
            cout << "Nao foi possivel inserir este elemento" << endl;
        }
        else{
            estrutura[tamanho] = item;
            tamanho++;
        }
    };
    tipoitem remover() //pop
    {
        if(tavazia()){
           cout << "A pilha esta vazia." << endl;
           cout << "Nao ha elemento a ser removido" << endl;
           return 0;
        }
        else{
            tamanho--;
            return estrutura[tamanho];
        }
    };
    void imprimir(){
        cout << "Pilha: [";
        for(int i=0; i<tamanho; i++){
            if(i==tamanho-1){
                cout << estrutura[i];
            }
            else{
                cout << estrutura[i] << "; ";
            }
        }
        cout << "]" << endl;
    }
    int qualtamanho(){ // length
        return tamanho;
    }
};

int main(){
    pilha pilha1;
    tipoitem item;
    int opcao; 
    cout << "Programa gerador de pilha: " << endl;

    do{
        cout << "Digite 0 para parar o programa" << endl;
        cout << "Digite 1 para inserir um elemento" << endl;
        cout << "Digite 2 para remover um elemento" << endl;
        cout << "Digite 3 para imprimir a pilha" << endl;
        cout << "Digite 4 para imprimir o tamanho da pilha" << endl;
        cin >> opcao;
        if(opcao == 1){
            cout << "Digite o elemento a ser inserido: " << endl;
            cin >> item;
            pilha1.inserir(item);
        }else if(opcao == 2){
            item = pilha1.remover();
            cout << "Elemento removido: " << item << endl;
        }else if(opcao == 3){
            pilha1.imprimir();
        }else if(opcao == 4){
            cout << "Numero de elementos na pilha: " << pilha1.qualtamanho() << endl;
        }
    }while (opcao != 0);
    
}