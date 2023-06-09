#include <iostream>
#include <vector>

using namespace std;

int main() {
    int qtd_originais, qtd_presentes;
    cin >> qtd_originais >> qtd_presentes;

    while(qtd_originais != 0) {
        vector<int> bilhetes(qtd_originais, 0);

        for(int i=0;i<qtd_presentes;++i) {
            int num_bilhete;
            cin >> num_bilhete;

            bilhetes[num_bilhete-1]++;
        }

        int num_copias=0;
        for(auto x:bilhetes) {
            if(x > 1) {
                num_copias++;
            }
        }

        cout << num_copias << endl;

        cin >> qtd_originais >> qtd_presentes;
    }

    return 0;
}
