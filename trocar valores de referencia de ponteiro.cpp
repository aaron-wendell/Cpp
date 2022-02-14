#include <iostream>
using namespace std;

void troca(int *&pont1, int *&pont2){
    int temp;
    temp = *pont1;
    *pont1 = *pont2;
    *pont2 = temp;
}


int main(){

    int *ponteiro = new int;
    *ponteiro = 5;
    int *ponteiro2 = new int;
    *ponteiro2 = 7;

    cout << "Ponteiro 1: " << *ponteiro << " em " << ponteiro << endl;
    cout << "Ponteiro 2: " << *ponteiro2 << " em " << ponteiro2 << endl;

    troca(ponteiro, ponteiro2);

    cout << "Ponteiro 1: " << *ponteiro << " em " << ponteiro << endl;
    cout << "Ponteiro 2: " << *ponteiro2 << " em " << ponteiro2 << endl;

}