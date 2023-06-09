#include <iostream>

using namespace std;

int main() {
    int num_provas;
    cin >> num_provas;

    while(num_provas != 0) {
        for(int n_prova=0;n_prova<num_provas;++n_prova) {
            bool marcou=false, mostrar=true;
            char saida='*';

            for(int i=0;i<5;++i) {
                int escala;
                cin >> escala;

                if(escala <= 127) {
                    if(marcou) {
                        saida = '*';
                        mostrar=false;
                    } else {
                        marcou = true;
                        saida = i + 'A';
                    }
                }
            }

            cout << saida << endl;
        }
        cin >> num_provas;
    }

    return 0;
}
