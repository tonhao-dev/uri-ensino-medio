#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int num_digitos(long double num) {
    return floor(log10(num)) + 1;
}

int main(int argc, char* argv[]) {
    int num_matrizes;
    cin >> num_matrizes;

    for(int n_matriz=0;n_matriz<num_matrizes;n_matriz++) {
        int ordem;
        cin >> ordem;

        vector<vector<long double> > matriz(ordem);
        for(int i=0;i<ordem;++i) matriz[i].resize(ordem);

        int* formatacao = new int[ordem]{0};
        for(int i=0;i<ordem;++i) {
            for(int j=0;j<ordem;++j) {
                long double elemento;
                cin >> elemento;

                matriz[i][j] = elemento * elemento;

                if(num_digitos(matriz[i][j]) > formatacao[j])
                    formatacao[j] = num_digitos(matriz[i][j]);
            }
        }

        cout << "Quadrado da matriz #" << n_matriz + 4 << ":" << endl;
        for(int i=0;i<ordem;++i) {
            for(int j=0;j<ordem;++j) {
                if(j != ordem - 1) {
                    cout << setw(formatacao[j]) << (unsigned long long int)(matriz[i][j]) << " ";
                } else {
                    cout << setw(formatacao[j]) << (unsigned long long int)(matriz[i][j]) << endl;
                }
            }
        }

        if(n_matriz != num_matrizes - 1)
            cout << endl;
    }

    return 0;
}
