#include <iostream>
#include <math.h>

using namespace std;

void segrau(float x){
    float funcao = (pow(x, 2) - (3*x) + 5);

    cout << "Funcao: f("<< x <<")= "<< x <<"^2 - 3*"<< x <<" + 5 = " << funcao << endl;
}


int main(){
    float x;
    cout << "Funcao: f(x)= x^2 - 3x + 5" << endl;
    cout << "Digite um valor para x: " << endl;
    cin >> x;
    segrau(x);
    return 0;
}

