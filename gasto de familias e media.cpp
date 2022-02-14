#include <iostream>
using namespace std;

int main(){
    float media, valor[5];

    for(int i=0; i<5; i++){
        cout << "Digite o valor gasto com Alimentação na família " << i+1 << ": ";
        cin >> valor[i];
        media += valor[i];
    }
    media = media / 5;
    cout << "A média gasta com alimentação é " << media <<endl;
    for(int i=0; i<5; i++){
        cout << "Família " << i+1 << " gasta " << valor[i] << " em alimentação. ";
        if(valor[i] > media){
            cout << "Seu gasto está acima da média" << endl;
        }
        else if(valor[i] < media){
            cout << "Seu gasto está abaixo da média" << endl;
        }
    }
}