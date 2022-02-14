#include <iostream>
using namespace std;

int main(){
    float b, soma;
    int e, cont;
    do{
        soma = 1;
        cout << "Calculando a potencia B^e" << endl;
        cout << "Digite o valor de B: ";
        cin >> b;
        cout << "Digite o valor de e: ";
        cin >> e;
        for(int i=1; i<=e; i++){
            soma *= b;
        }
        cout << "Potencia de " << b << "^" << e << " = " << soma << endl;
        cout << "Deseja continuar? [1 = S][0 = N]" << endl;
        cin >> cont;
    }
    while(cont != 0);
}