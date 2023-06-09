#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int busca_binaria(vector<int>& vetor, int num_buscado) {
    int inicio = 0;
    int fim = vetor.size() - 1;

    while(inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if(vetor[meio] < num_buscado) {
            inicio = meio + 1;
        } else if(vetor[meio] > num_buscado) {
            fim = meio - 1;
        } else {
            return meio;
        }
    }

    return -1;
}

int busca_linear(vector<int>& vetor, int num_buscado) {
    int pos=-1;
    for(int i=0;i<vetor.size();++i) {
        if(vetor[i] == num_buscado) {
            pos = i;
            break;
        }
    }
    return pos;
}

int main() {
    int num_marmores, num_consultas, n_teste=1, num_buscado;
    cin >> num_marmores >> num_consultas;

    while(num_marmores != 0 and num_consultas != 0) {
        vector<int> marmores(num_marmores);
        for(int i=0;i<num_marmores;++i) {
            cin >> marmores[i];
        }

        sort(marmores.begin(), marmores.end());

        cout << "CASE# " << n_teste << ":" << endl;
        for(int i=0;i<num_consultas;++i) {
            cin >> num_buscado;

            int pos = busca_linear(marmores, num_buscado);

            if(pos == -1) {
                cout << num_buscado << " not found" << endl;
            } else {
                cout << num_buscado << " found at " << (pos + 1) << endl;
            }
        }

        ++n_teste;
        cin >> num_marmores >> num_consultas;
    }

    return 0;
}
