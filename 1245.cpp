#include <iostream>
#include <vector>
#define DIREITO 'D'
#define ESQUERDO 'E'

using namespace std;

class Bota {
public:
    int numero;
    char lado;
};

int main() {
    int num_botas;
    while(cin >> num_botas) {
        vector<Bota> botas(num_botas);
        for(int i=0;i<num_botas;++i) {
            cin >> botas[i].numero >> botas[i].lado;
        }

        int num_pares=0;
        for(int i=0;i<num_botas;++i) {
            for(int j=0;j<num_botas;++j) {
                if(botas[i].numero != -1 and botas[j].numero != -1) {
                    if(botas[i].numero == botas[j].numero and botas[i].lado != botas[j].lado) {
                        num_pares++;

                        botas[i].numero = -1;
                        botas[j].numero = -1;
                    }
                }
            }
        }

        cout << num_pares << endl;
    }

    return 0;
}
