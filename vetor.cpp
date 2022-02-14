#include <iostream>
using namespace std;

int main(){

    int vet[4] = {5, 10};
    cout << vet[2] << endl;

    cout << "[" << endl;
    for(int i=0; i<4; i++){
        cout << vet[i];
    }
    cout << "]" << endl;

    int x = sizeof(vet);
    int y = sizeof(int);
    cout << "Tamanho do inteiro: " << y << "bytes" << endl;
    cout << "Tamanho do vetor: " << x << "bytes" << endl;

    int tamanho;
    cout << "Digite o tamanho do vetor: " << endl;
    cin >> tamanho;
    int *vetor = new int[tamanho];

    for(int i=0; i<tamanho; i++){
        cout << "Digite o elemento " << i+1 << " do vetor: " << endl;
        cin >> vetor[i];
    } 
    cout << "[" << endl;
    for(int i=0; i<tamanho; i++){
        cout << vetor[i] << "; ";
    }
    cout << "]" << endl;


    cout << endl;
    delete[] vetor;
}