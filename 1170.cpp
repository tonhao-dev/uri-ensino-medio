#include <iostream>

using namespace std;

int main() {
    int num_testes;
    cin >> num_testes;

    for(int n_teste=0;n_teste<num_testes;++n_teste) {
        long double qtd_comida;
        int dias=0;

        cin >> qtd_comida;

        while(qtd_comida > 1) {
            dias++;
            qtd_comida = qtd_comida / 2.0;
        }
        cout << dias << " dias" << endl;
    }

    return 0;
}
