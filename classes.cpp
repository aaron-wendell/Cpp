#include <iostream>
using namespace std;

class propaganda{
    private:


    public:
    void escrever(){
        cout << "Katekyo Hitman Reborn -> O melhor anime de todos!" << endl;
    }

};

class carro{
    private: 
    float km, valor;
    int ano;

    public:
    //construtor
    carro(int a=0, float v=-1, float k=-1){
        ano = a;
        valor = v;
        km = k;
    }


    void setano(int a){
        ano = a;
        //this ->ano = ano
    }
    int getano(){
        return ano;
    }
    void setvalor(float v){
        valor = v;
    }
    int getvalor(){
        return valor;
    }
    void setkm(float k){
        km = k;
    }
    int getkm(){
        return km;
    }
};


int main(){
    propaganda canal;
    canal.escrever();
    carro palio;
    palio.setano(2005);
    palio.setvalor(20000);
    palio.setkm(150000);
    cout << "Palio: \n";
    cout << "Ano: " << palio.getano() << endl;
    cout << palio.getkm() << "km" << endl;
    cout << "Valor: R$" << palio.getvalor() << endl;

    carro celta(2009, 34500, 120000);
    cout << "Celta: \n";
    cout << "Ano: " << celta.getano() << endl;
    cout << celta.getkm() << "km" << endl;
    cout << "Valor: R$" << celta.getvalor() << endl;


}

