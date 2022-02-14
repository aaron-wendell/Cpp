#include <iostream>
using namespace std;

class cidadesbrasil{
    private:
    int ano, pop;

    public:
    cidadesbrasil(int a=0, int p=0){
    ano = a;
    pop = p;
    };
    void setano(int a){
        ano = a;
    };
    int getano(){
        return ano;
    };
    void setpop(int p){
        pop = p;
    };
    int getpop(){
        return pop;
    };
    void addpop(int p){
        pop += p;
    };
};

int main(){
    cidadesbrasil campinas(1774, 1214000);
    cout << "Campinas" << endl;
    cout << "Ano de fundacao: " << campinas.getano() << endl;
    cout << "Populacao: " << campinas.getpop() << endl;

    cidadesbrasil aracatuba(1908, 198129);
    cout << "Aracatuba" << endl;
    cout << "Ano de fundacao: " << aracatuba.getano() << endl;
    cout << "Populacao: " << aracatuba.getpop() << endl;    

}

