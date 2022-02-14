#include <iostream>
using namespace std;

int main(){

    float salario;
    int idade;

    cout << "Programa MINHA CASA MINHA VIDA" << endl;
    cout << "Para estar apto ao beneficio se torna necessario o preenchimento dos seguintes dados;" << endl;
    cout << "Idade: ";
    cin >> idade;
    cout << "Renda mensal: ";
    cin >> salario;

    if (salario<1200.00 && idade>21){
        cout << "Voce esta apto a receber o beneficio";
    }
    else{
        cout << "Infelizmente voce nao esta apto a receber o beneficio";
    }
}