#include <iostream>
using namespace std;

int main(){
int *idade = new int;
int *idade2 = new int;
float *media = new float;

    cout << "Informe a idade da pessoa 1: ";
    cin >> *idade;
    cout << "Informe a idade da pessoa 2: ";
    cin >> *idade2;

    *media = (*idade + *idade2) / 2;

    cout << "A media de idades: " << *media;
}