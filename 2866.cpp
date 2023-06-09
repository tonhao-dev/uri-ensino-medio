#include <iostream>

using namespace std;

int main() {
    int num_testes;
    cin >> num_testes;

    while(num_testes) {
        string entrada;
        cin >> entrada;

        for(int i=entrada.size()-1;i>=0;--i) {
            if(islower(entrada[i])) {
                cout << entrada[i];
            }
        }
        cout << endl;

        --num_testes;
    }

    return 0;
}
