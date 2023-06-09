#include <iostream>
#define ALICE 0
#define BOB 1

using namespace std;

int main(int argc, char* argv[]) {
    int num_cartas, carta_vira, limite;
    cin >> num_cartas >> carta_vira >> limite;

    int pontos[2]={0};
    for(int i=1;i<num_cartas;++i) {
        int carta_puxada;
        cin >> carta_puxada;

        if(abs(carta_puxada - carta_vira) <= limite) {
            if(i%2 == 1)
                pontos[ALICE] += abs(carta_puxada - carta_vira);
            else
                pontos[BOB] += abs(carta_puxada - carta_vira);

            carta_vira = carta_puxada;
        }
    }

    cout << pontos[ALICE] << " " << pontos[BOB] << endl;

    return 0;
}
