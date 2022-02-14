#include <iostream>
using namespace std;

int main(){

    int matriz[2][3];

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){

            cout << "Digite o valor do vetor na posição [" << i << "][" << j << "]"<< endl;
            cin >> matriz[i][j];
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout << "[" << matriz[i][j] << "]";
        }
        cout << endl;
    }
}

