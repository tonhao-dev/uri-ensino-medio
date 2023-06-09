#include <iostream>
#include <map>

using namespace std;

int main(int argc, char* argv[]) {
    map<string, string[3]> listas_presentes;
    string nome_pessoa, presente_desejado;

    int num_participantes;
    cin >> num_participantes;

    for(int i=0;i<num_participantes;++i) {

        cin >> nome_pessoa;

        for(int j=0;j<3;++j)
            cin >> listas_presentes[nome_pessoa][j];
    }

    while(cin >> nome_pessoa >> presente_desejado) {
        string sub_lista[3] = listas_presentes[nome_pessoa];

        if(sub_lista[0] == presente_desejado or sub_lista[1] == presente_desejado or sub_lista[2] == presente_desejado)
            cout << "Uhul! Seu amigo secreto vai adorar o/" << endl;
        else
            cout << "Tente Novamente!" << endl;
    }

    return 0;
}
