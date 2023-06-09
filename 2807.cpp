#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num_termos;
    cin >> num_termos;

    if(num_termos == 1) {
        cout << 1 << endl;
        return 0;
    } else if(num_termos == 2) {
        cout << 1 << " " << 1 << endl;
        return 0;
    }

    vector<int> sequencia(num_termos);
    sequencia[0] = 1;
    sequencia[1] = 1;

    for(int i=2;i<num_termos;++i) {
        sequencia[i] = sequencia[i-1] + sequencia[i-2];
    }

    for(int i=num_termos-1;i>=0;--i) {
        if(i == 0)
            cout << sequencia[i] << endl;
        else
            cout << sequencia[i] << " ";
    }

    return 0;
}
