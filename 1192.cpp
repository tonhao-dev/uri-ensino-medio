#include <iostream>
#include <cctype>

using namespace std;

int main() {
    int num_testes;
    cin >> num_testes;
    for(int n_teste=0;n_teste<num_testes;++n_teste) {
        string entrada;
        cin >> entrada;

        int n1 = entrada[0] - '0';
        int n2 = entrada[2] - '0';
        char letra = entrada[1];

        if(n1 == n2)
            cout << n1 * n2 << endl;
        else {
            if(isupper(letra)) {
                cout << n2 - n1 << endl;
            } else
                cout << n1 + n2 << endl;
        }
    }

    return 0;
}
