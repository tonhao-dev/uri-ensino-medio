#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int num_promocoes, qtd_latas, maior_lucro=0;

    while(cin >> num_promocoes >> qtd_latas) {
        for(int n_teste=0;n_teste<num_promocoes;++n_teste) {
            int qtd_bebidas, preco;
            cin >> qtd_bebidas >> preco;

            maior_lucro = max(maior_lucro, (qtd_latas / qtd_bebidas) * preco);
        }

        cout << maior_lucro << endl;
    }

    return 0;
}
