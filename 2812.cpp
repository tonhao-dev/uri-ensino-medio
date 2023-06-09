#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int num_testes;
    cin >> num_testes;

    for(int n_teste=0;n_teste<num_testes;++n_teste) {
        int size_list;
        cin >> size_list;

        vector<int> lista;
        for(int i=0;i<size_list;++i) {
            int elemento;
            cin >> elemento;

            if(elemento%2 == 1)
                lista.push_back(elemento);
        }

        if(lista.size()==0) {
            cout << endl;
            continue;
        }

        sort(lista.begin(), lista.end());

        vector<int> saida(lista.size());
        int i=0, j=lista.size()-1, k=0,num_faltantes=lista.size();
        while(true) {
            saida[k] = lista[j--];
            k++;

            num_faltantes--;
            if(num_faltantes == 0) break;

            saida[k] = lista[i++];
            k++;

            num_faltantes--;
            if(num_faltantes == 0) break;
        }

        for(i=0;i<saida.size();++i) {
            if(i == saida.size()-1)
                cout << saida[i] << endl;
            else
                cout << saida[i] << " ";
        }
    }

    return 0;
}
