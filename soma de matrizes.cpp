#include <iostream>
using namespace std;
 
int main(){
    int x, y, mat[2][2], mat2[2][2];

    cout << "Informe o numero de linhas da matriz: ";
    cin >> x;
    cout << "Informe o numero de colunas da matriz: ";
    cin >> y;
    cout << "Matriz 1: " << endl;
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cout << "Informe o valor da matriz 1 na posicao [" << i+1 << "][" << j+1 << "]: ";
            cin >> mat[i][j];
        }
    }
    cout << "Matriz 2: " << endl;
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cout << "Informe o valor da matriz 2 na posicao [" << i+1 << "][" << j+1 << "]: ";
            cin >> mat2[i][j];
        }
    }
    cout << "Matriz 1: " << endl;
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cout << "[" << mat[i][j] << "]";
        }
        cout << endl;
    }
    cout << "Matriz 2: " << endl;
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cout << "[" << mat2[i][j] << "]";
        }
        cout << endl;
    }
    cout << "Soma das matrizes: " << endl;
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cout << "[" << mat[i][j]+mat2[i][j] << "]";
        }
        cout << endl;
    }

}