#include <iostream>

using namespace std;

int main(){
    float nota1, nota2;
    cout << "Informe a nota 1: " << endl;
    cin >> nota1;
    cout << "Informe a nota 2: " << endl;
    cin >> nota2;
    float media = (nota1+nota2)/2;
    cout << "Media: " << media << endl;
    if (media<=2.5){
        cout << "Nota Final: D\n" << endl;
    }
    else if (media<=5){
        cout << "Nota Final: C\n" << endl;
    }
    else if (media<=7.5){
        cout << "Nota Final: B\n" << endl;
    }
    else if(media==10){
        cout << "Nota Final: A++\n" << endl;
    }
    else{
        cout << "Nota Final: A\n" << endl;
    }

    // Operadores Logicos: E - && \n OU - || \n Nao - !

    float frequencia;
    cout << "Qual a frequencia do aluno?\n";
    cin >> frequencia;
    if(media >=5 && frequencia >= 75){
        cout << "Aluno aprovado!\n";
    }
    else{
        cout << "Aluno reprovado!\n";
    }

    (media >= 5 && frequencia >= 75) ? cout << "Aprovado!\n" : cout << "Reprovado!\n";

    return 0;
}