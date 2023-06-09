#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num_testes, num_casas;
    cin >> num_testes;

    while(num_testes) {
        cin >> num_casas;

        if(num_casas == 64) {
            cout << "1537228672809129 kg" << endl;
            --num_testes;
            continue;
        }

        cout << ((unsigned long long int) pow(2, num_casas)) / 12000 << " kg" << endl;
        --num_testes;
    }

    return 0;
}
