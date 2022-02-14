#include <iostream>
#include <cstddef>
using namespace std;

int main(){
    int var, var2;
    int* ponteiro, *ponteiro2;
    var = 5;
    ponteiro = &var;
    cout << "Valor da variavel: " << var << endl;

    cout << "Endereco armazenado no ponteiro: " << ponteiro << endl;

    cout << "Valor armazenado no ponteiro: " << *ponteiro << endl;

    var2 = 80;

    ponteiro = &var2;  
    
    cout << "Endereco armazenado no ponteiro: " << ponteiro << endl;

    cout << "Valor armazenado no ponteiro: " << *ponteiro << endl;    
    
    ponteiro2 = NULL;
    cout << *ponteiro2;

    int *ponteiro3 = new int;
    *ponteiro3 = 35;
    cout << *ponteiro3;
    delete ponteiro3;
    ponteiro3 = ponteiro;
    cout << *ponteiro3;
    return 0;
}
