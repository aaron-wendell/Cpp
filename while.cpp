#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Diga um numero natural: \n";
    cin >> n;

    int soma = 0;
    int cont = 1;

    /*while (cont <= n)
    {
        soma += cont;
        cont++;
    }*/

    for(int j=0; j<=n; j++){
        soma += j; 
        cout << "teste\n";
    } 

    cout << "Soma dos numeros de 0 a " << n << " = " << soma << endl;

    do{
        soma += cont;
        cont++;
    }while (cont <= n);

    return 0;
}