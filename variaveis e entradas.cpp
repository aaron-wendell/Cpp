#include <iostream>

using namespace std;

int main(){

    int inteiro;
    inteiro = 5.2;
    cout << inteiro << endl;

    float real;
    real = 5.2;
    cout << real << endl;

    double real2;
    real2 = 5.2e99;
    cout << real2 << endl;

    bool booleano;
    booleano = false;
    cout << booleano << endl;

    char letra;
    letra = 'b';
    cout << letra << endl;

    char letras[3];
    letras[0-3] = 'bola';
    cout << letras << endl;

    string palavra;
    palavra = "bola";
    cout << palavra << endl;

    int idade;
    cout << "Qual a idade? " << endl;
    cin >> idade;
    cout << "Idade: " << idade << endl;


    return 0;
}