#include <iostream>
#include <algorithm>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
    int num_casos;
    cin >> num_casos;

    for(int n_caso=1;n_caso<=num_casos;++n_caso) {
        string conversao;
        cin >> conversao;

        int r, g, b;
        cin >> r >> g >> b;

        if(conversao == "eye")
            cout << "Caso #" << n_caso << ": " << (int)(0.30*r + 0.59*g + 0.11*b) << endl;

        if(conversao == "mean")
            cout << "Caso #" << n_caso << ": " << (int)((r + g + b) / 3) << endl;

        if(conversao == "max")
            cout << "Caso #" << n_caso << ": " << max({r, g, b}) << endl;

        if(conversao == "min")
            cout << "Caso #" << n_caso << ": " << min({r, g, b}) << endl;
    }

    return 0;
}
