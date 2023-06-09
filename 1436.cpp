#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int num_testes;
    cin >> num_testes;

    for(int n_teste=0;n_teste<num_testes;++n_teste) {
        int num_jogadore;
        cin >> num_jogadore;

        vector<int> jogadores(num_jogadore);
        for(int i=0;i<num_jogadore;++i) {
            cin >> jogadores[i];
        }

        sort(jogadores.begin(), jogadores.end());

        cout << "Case " << n_teste+1 << ": " << jogadores[jogadores.size()/2] << endl;
    }

    return 0;
}
