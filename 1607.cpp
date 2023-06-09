#include <iostream>

using namespace std;

int main() {
    int num_testes;
    cin >> num_testes;

    while(num_testes) {
        string a, b;
        cin >> a >> b;

        int soma = 0;
        for(int i=0;i<a.size();++i) {
            int diferenca = b[i] - a[i];

            if(diferenca < 0)
                diferenca = diferenca + 26;

            soma += diferenca;
        }
        cout << soma << endl;

        --num_testes;
    }

    return 0;
}
