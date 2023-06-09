#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int lados[6], num_testes;

    cin >> num_testes;
    for(int i=0;i<num_testes;++i) {
        bool numeros_dado[7]={false};

        cin >> lados[0];
        cin >> lados[1] >> lados[2] >> lados[3] >> lados[4];
        cin >> lados[5];

        if(lados[0] >= 1 and lados[0] <= 6)
            numeros_dado[lados[0]] = true;
        if(lados[1] >= 1 and lados[1] <= 6)
            numeros_dado[lados[1]] = true;
        if(lados[2] >= 1 and lados[2] <= 6)
            numeros_dado[lados[2]] = true;
        if(lados[3] >= 1 and lados[3] <= 6)
            numeros_dado[lados[3]] = true;
        if(lados[4] >= 1 and lados[4] <= 6)
            numeros_dado[lados[4]] = true;
        if(lados[5] >= 1 and lados[5] <= 6)
            numeros_dado[lados[5]] = true;
        if((lados[0] + lados[5] == 7) and (lados[1] + lados[3] == 7) and (lados[2] + lados[4] == 7)) {
            bool possui_todos_numeros = true;
            for(int i=1;i<=6;++i) {
                if(numeros_dado[i] == false)
                    possui_todos_numeros = false;
            }

            if(possui_todos_numeros)
                cout << "SIM" << endl;
            else
                cout << "NAO" << endl;
        } else
            cout << "NAO" << endl;
    }

    return 0;
}
