#include <iostream>

using namespace std;

long long int josephus(long long int num_pessoas, long long int salto) {
    if(num_pessoas == 1)
        return 1;
    else
        return (salto-1 + josephus(num_pessoas - 1, salto)) % num_pessoas + 1;

}

int main() {
    long long int num_testes;
    cin >> num_testes;

    for(int n_teste=1;n_teste<=num_testes;++n_teste) {
        long long int num_vivos, salto;
        cin >> num_vivos >> salto;

        cout << "Case " << n_teste << ": " << josephus(num_vivos, salto) << endl;
    }

    return 0;
}
