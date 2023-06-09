#include <iostream>
#include <map>

using namespace std;

int main() {
    cout << fixed;
    cout.precision(2);

    int num_idas;
    cin >> num_idas;

    while(num_idas) {
        int qtd_disponiveis;
        cin >> qtd_disponiveis;

        map<string, double> tabela_precos;
        for(int i=0;i<qtd_disponiveis;++i) {
            string produto;
            double preco;

            cin >> produto >> preco;

            tabela_precos[produto] = preco;
        }

        int qtd_comprados;
        cin >> qtd_comprados;

        double total_gasto=0;
        for(int i=0;i<qtd_comprados;++i) {
            string produto;
            int quantidade;

            cin >> produto >> quantidade;

            total_gasto += tabela_precos[produto] * quantidade;
        }

        cout << "R$ " << total_gasto << endl;

        --num_idas;
    }

    return 0;
}
