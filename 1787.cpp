#include <iostream>

using namespace std;

bool isPowOf2(long long n) {
    return !(n & (n-1)) and n != 1;
}

int main() {
    int num_rodadas;
    cin >> num_rodadas;

    while(num_rodadas != 0) {
        int pontos[3]={0};
        long long num_uilton, num_rita, num_ingrid;

        for(int n_rodada=0;n_rodada<num_rodadas;++n_rodada) {
            cin >> num_uilton >> num_rita >> num_ingrid;

            if(isPowOf2(num_uilton)) {
                pontos[0]++;

                if(num_uilton > num_rita and num_uilton > num_ingrid)
                    pontos[0]++;
            }
            if(isPowOf2(num_rita)) {
                pontos[1]++;

                if(num_rita > num_uilton and num_rita > num_ingrid)
                    pontos[1]++;
            }
            if(isPowOf2(num_ingrid)) {
                pontos[2]++;

                if(num_ingrid > num_uilton and num_ingrid > num_rita)
                    pontos[2]++;
            }
        }

        if(pontos[0] > pontos[1] and pontos[0] > pontos[2]) {
            cout << "Uilton" << endl;
        } else if(pontos[1] > pontos[0] and pontos[1] > pontos[2]) {
            cout << "Rita" << endl;
        } else if(pontos[2] > pontos[0] and pontos[2] > pontos[1]) {
            cout << "Ingred" << endl;
        } else {
            cout << "URI" << endl;
        }

        cin >> num_rodadas;
    }
    return 0;
}
