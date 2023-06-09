#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {
    int num_testes;
    cin >> num_testes;

    for(int n_teste=0;n_teste<num_testes;++n_teste) {
        int base, expoente;
        cin >> base >> expoente;

        cout << (int)(expoente * log10(base) + 1) << endl;
    }

    return 0;
}
