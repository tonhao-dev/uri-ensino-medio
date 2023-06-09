#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
    int tam_floresta;
    cin >> tam_floresta;

    vector<vector<int> > floresta(tam_floresta);
    for(int i=0;i<tam_floresta;++i)
        floresta[i].resize(tam_floresta);

    for(int i=0;i<tam_floresta;++i) {
        for(int j=0;j<tam_floresta;++j) {
            cin >> floresta[i][j];
        }
    }

    vector<int> borboletas_encontradas;
    for(int n_linha=0;n_linha<tam_floresta*2;++n_linha) {
        int linha, coluna;
        cin >> linha >> coluna;

        linha--;
        coluna--;

        if(find(borboletas_encontradas.begin(), borboletas_encontradas.end(), floresta[linha][coluna]) == borboletas_encontradas.end()) {
            borboletas_encontradas.push_back(floresta[linha][coluna]);
        }
    }

    cout << borboletas_encontradas.size() << endl;

    return 0;
}
