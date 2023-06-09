#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Pacote {
public:
    int id;
    int tempo_troca;
};

bool comp(Pacote p1, Pacote p2) {
    return (p1.id < p2.id);
}

int main(int argc, char* argv[]) {
    int qtd_pacotes;

    while(cin >> qtd_pacotes) {
        vector<Pacote> pacotes(qtd_pacotes);

        for(int i=0;i<qtd_pacotes;++i) {
            cin >> pacotes[i].id;
        }

        for(int i=0;i<qtd_pacotes;++i) {
            cin >> pacotes[i].tempo_troca;
        }

        int tempo_total=0;
        for(int i=qtd_pacotes-1;i>0;--i) {
            for(int j=0;j<i;++j) {
                if(comp(pacotes[j+1], pacotes[j])) {
                    tempo_total += (pacotes[j].tempo_troca + pacotes[j+1].tempo_troca);
                    iter_swap(&pacotes[j], &pacotes[j+1]);
                }
            }
        }

        cout << tempo_total << endl;
    }

    return 0;
}
