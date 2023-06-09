#include <iostream>
#include <vector>
#include <algorithm>
#define LIMITE 100000

using namespace std;

int main(int argc, char* argv[]) {
    int num_elementos;

    while(cin >> num_elementos) {
        vector<int> trabalhos(num_elementos);

        long long int soma_rangel=0, soma_gugu=0;
        for(int i=0;i<num_elementos;++i) {
            int tempo_trabalho;
            cin >> tempo_trabalho;

            trabalhos[i] = tempo_trabalho;
            soma_rangel = soma_rangel + tempo_trabalho;
        }

        long long int diferenca = LIMITE + 1;
        for(int i=trabalhos.size()-1; soma_rangel > soma_gugu; --i) {
            soma_gugu = soma_gugu + trabalhos[i];
            soma_rangel = soma_rangel - trabalhos[i];

            if(abs(soma_rangel - soma_gugu) < diferenca)
                diferenca = abs(soma_rangel - soma_gugu);
            else
                break;
        }

        cout << diferenca << endl;

    }

    return 0;
}
