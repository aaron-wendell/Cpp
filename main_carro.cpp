#include <iostream>
#include "carro.h"
using namespace std;


int main(){
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

    system("pause");
}

