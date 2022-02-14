#include <iostream>
using namespace std;

int fatorial(int valor){
    int soma = 1;
    for(int i=1; i<=valor; i++){
        soma *= i;
    }
    return soma;
}

int main(){
    int fat;
    while(true){
    cout << "Digite um valor inteiro para calcular seu fatorial: " << endl;
    cin >> fat;
    if(fat<0){
        cout << "Foi informado um numero negativo!" << endl;
    }
    else{
        break;
    }
    }
    cout << "O fatorial de " << fat << " = " <<  fatorial(fat);
}