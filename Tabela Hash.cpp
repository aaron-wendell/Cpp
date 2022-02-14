#include <iostream>
using namespace std;

class Aluno{
    private:
    int ra;
    string nome;

    public:
    Aluno(){
        ra = -1;
        nome = "";
    };
    Aluno(int r, string n){
        ra = r;
        nome = n;
    };
    int obterRA(){
        return ra;
    };
    string obternome(){
        return nome;
    };
};

class Hash{
    private:
    int funcaohash(Aluno aluno){
        return (aluno.obterRA() % maxposicao);
    };
    int maxitem, maxposicao, qtd;
    Aluno *estrutura;

    public:
    Hash(int tamanhovet, int max){
        qtd = 0;
        maxitem = max;
        maxposicao = tamanhovet;
        estrutura = new Aluno[tamanhovet];
    };
    ~Hash(){
        delete[] estrutura;
    };
    bool tacheio(){
        return (qtd == maxitem);
    };
    int tamanho(){
        return qtd;
    };
    void inserir(Aluno aluno){
        int local = funcaohash(aluno);
        estrutura[local] = aluno;
        qtd++;
    };
    void deletar(Aluno aluno){
        int local = funcaohash(aluno);
        if(estrutura[local].obterRA() != -1){
            estrutura[local] = Aluno(-1, " ");
            qtd--;
        }
    };
    void buscar(Aluno &aluno, bool &busca){
        int local = funcaohash(aluno);
        Aluno aux = estrutura[local];
        if(aluno.obterRA() != aux.obterRA()){
            busca = false;
        }
        else{
            busca = true;
            aluno = aux;
        }
    };
    void imprimir(){
        cout << "Tabela Hash" << endl;
        for(int i=0; i<maxposicao; i++){
            if(estrutura[i].obterRA() != -1){
                cout << i << ":" << estrutura[i].obterRA() << endl;
                cout << estrutura[i].obternome() << endl;
            }
        }
    };
};

int main(){

    cout << "Programa Gerador de Hash" << endl;
    int tamanho, max;
    cout << "Digite o tamanho da Hash" << endl;
    cin >> tamanho;
    cout << "Digite o numero maximo de elementos" << endl;
    cin >> max;
    cout << "O fator de carga = " << (float)max / (float)tamanho << endl;
    Hash alunohash(tamanho, max);
    int opcao, ra;
    bool busca;
    string nome;
    Aluno aluno(ra, nome);
    do{
        cout << "1. Inserir elemento" << endl;
        cout << "2. Remover elemento" << endl;
        cout << "3. Buscar elemento" << endl;
        cout << "4. Imprimir a hash" << endl;
        cout << "0. Fechar" << endl;
        cin >> opcao;
            if(opcao == 1){
                cout << "Qual o RA do aluno? ";
                cin >> ra;
                cout << "Qual o nome do aluno? ";
                cin >> nome;
                alunohash.inserir(aluno);
            }
            if(opcao == 2){
                cout << "Qual o RA do aluno a ser removido? ";
                cin >> ra;
                Aluno aluno(ra, "");
                alunohash.deletar(aluno);
            }
            if(opcao == 3){
                cout << "Qual o RA?";
                cin >> ra;
                Aluno aluno(ra, " ");
                alunohash.buscar(aluno, busca);
                if(busca){
                    cout << "RA: " << aluno.obterRA() << endl;
                    cout << "Nome: " << aluno.obternome() << endl;
                }
                else{
                    cout << "Aluno nao encontrado" << endl;
                }
            }
            if(opcao == 4){
                    alunohash.imprimir();
            }
    }while(opcao != 0);
} 