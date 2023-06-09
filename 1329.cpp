#include <iostream>
#define VITORIA_MARIA 0
#define VITORIA_JOAO 1

using namespace std;

int main(int argc, char* argv[]) {
    int num_jogos;
    cin >> num_jogos;

    while(num_jogos != 0) {
        int num_wins_maria=0, num_wins_joao=0, resultado_jogo;
        for(int i=0;i<num_jogos;++i) {
            cin >> resultado_jogo;

            if(resultado_jogo == VITORIA_MARIA)
                num_wins_maria++;
            if(resultado_jogo == VITORIA_JOAO)
                num_wins_joao++;
        }

        cout << "Mary won " << num_wins_maria << " times and John won " << num_wins_joao << " times" << endl;

        cin >> num_jogos;
    }

    return 0;
}
