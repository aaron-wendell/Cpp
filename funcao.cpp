#include <iostream>
using namespace std;

void escrever(string canal){
    cout << "Se escreva no canal " << canal << endl;
}

int somar(int x, int y){
    int soma = x + y;
    return soma;
}

int main(){
string canal;
cout << "Nome do canal: " << endl;
cin >> canal;
escrever(canal);
int v1, v2;
cout << "Variavel 1" << endl;
cin >> v1;
cout << "Variavel 2" << endl;
cin >> v2;
cout << "Soma de "<< v1 << "+" << v2 << " = " << somar(v1, v2) << endl;
return 0;
}
