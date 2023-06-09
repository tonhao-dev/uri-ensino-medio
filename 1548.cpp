#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int num_testes;
    cin >> num_testes;

    while(num_testes) {
        int num_alunos, mesmo_lugar=0;
        cin >> num_alunos;

        vector<int>ordem_cheagada(num_alunos);
        vector<int>fila_ordenada(num_alunos);

        for(int i=0;i<num_alunos;++i) {
            cin >> ordem_cheagada[i];
            fila_ordenada[i] = ordem_cheagada[i];
        }

        sort(fila_ordenada.begin(), fila_ordenada.end(), greater<int>());

        for(int i=0;i<num_alunos;++i) {
            if(fila_ordenada[i] == ordem_cheagada[i])
                mesmo_lugar++;
        }

        cout << mesmo_lugar << endl;

        --num_testes;
    }

    return 0;
}
