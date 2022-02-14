#include <iostream>
using namespace std;
 
int main(){
    string continuar;
    int tamanho, vetor[2];
    do{
        cout << "Digite o tamanho do vetor: ";
        cin >> tamanho;
        int *vetor = new int[tamanho];
        for(int i=0; i<tamanho; i++){
        cout << "Digite o elemento " << i+1 << " do vetor: ";
        cin >> vetor[tamanho];
        }
        delete[] vetor;
        cout << "Quer continuar? ";
        cin >> continuar;
    }
    while(continuar != "n");
}