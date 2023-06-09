#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int num_entradas;
    cin >> num_entradas;

    for(int n_teste=0;n_teste<num_entradas;++n_teste) {
        string entrada;
        cin >> entrada;

        entrada.erase(remove(entrada.begin(), entrada.end(), '.'), entrada.end());

        int num_abertos=0, num_diamantes=0;
        for(auto x:entrada) {
            if(x == '<') {
                num_abertos++;
            } else {
                if(num_abertos > 0) {
                    num_diamantes++;
                    num_abertos--;
                }
            }
        }

        cout << num_diamantes << endl;
    }

    return 0;
}
