#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct {
    string nome_carne;
    int data_validade;
} tipo_carne;

bool comp(tipo_carne carne1, tipo_carne carne2) {
    return carne1.data_validade < carne2.data_validade;
}

int main(int argc, char* argv[]) {
    int num_carnes;
    while(cin >> num_carnes) {
        vector<tipo_carne> carnes(num_carnes);

        for(int i=0;i<num_carnes;++i) {
            cin >> carnes[i].nome_carne >> carnes[i].data_validade;
        }

        sort(carnes.begin(), carnes.end(), comp);

        for(int i=0;i<carnes.size();++i) {
            if(i == carnes.size()-1)
                cout << carnes[i].nome_carne << endl;
            else
                cout << carnes[i].nome_carne << " ";
        }
    }

    return 0;
}
