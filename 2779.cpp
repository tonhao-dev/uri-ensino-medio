#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num_espacos, num_compradas;
    cin >> num_espacos >> num_compradas;

    vector<bool> lista_figurinhas(num_espacos, false);
    for(int i=0;i<num_compradas;++i) {
        int figurinha;
        cin >> figurinha;

        if(lista_figurinhas[figurinha] == false) {
            num_espacos--;
            lista_figurinhas[figurinha] = true;
        }
    }

    cout << num_espacos << endl;

    return 0;
}
