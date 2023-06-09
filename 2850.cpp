#include <iostream>
#include <string>

using namespace std;

int main() {
    string situacao;
    while(getline(cin, situacao)) {
        if(situacao == "esquerda")
            cout << "ingles" << endl;
        if(situacao == "direita")
            cout << "frances" << endl;
        if(situacao == "nenhuma")
            cout << "portugues" << endl;
        if(situacao == "as duas")
            cout << "caiu" << endl;
    }
    return 0;
}
