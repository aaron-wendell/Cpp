# include <iostream>
using namespace std;

int main(){
    float prova[3], media, mediat;
    
    for(int i=0; i<3; i++){
        cout << "Digite o valor da prova " << i+1 << ": "; 
        cin >> prova[i+1];
    }

    media = (prova[1] + prova[2] + prova[3])/3;

    cout << "Digite a media da turma: " << endl;
    cin >> mediat;
    cout << "Sua media = "<< media << endl;
    if (media>mediat){
        cout << "Parabens, sua media foi acima da media da turma! ";
    }
    else{
        cout << "Infelizmente sua media esta abaixo da media da turma. Estude mais! ";
    }
}