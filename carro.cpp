#include "carro.h"
using namespace std;


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
