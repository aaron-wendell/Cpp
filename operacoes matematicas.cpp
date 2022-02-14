#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int a, b;

    cout << "OPERACOES MATEMATICAS" << endl;
    cout << "Digite um numero: " << endl;
    cin >> a;
    cout << "Digite um segundo numero: " << endl;
    cin >> b;

    //int soma = a + b;
    //cout << "Soma: " << soma << endl;

    cout << "Soma de " << a << " + " << b << " = " << a+b << endl;

    cout << "Subtracao de " << a << "-" << b << " = " << a-b << endl;

    cout << "Multiplicacao de " << a << "x" << b << " = " << a*b << endl;
 
    cout << "Divisao de " << a << "/" << b << " = " << a/b << endl;

    cout << "Resto da divisao de " << a << "/" << b << " = " << a%b << endl;

    cout << "Divisao exata de " << a << "/" << b << " = " << (float)a/(float)b << endl;

    cout << a << " elevado a " << b << " = " << pow(a, b) << endl;

    return 0;
}