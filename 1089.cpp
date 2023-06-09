#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num_amostras;
    cin >> num_amostras;

    while(num_amostras != 0) {
        int num_picos=0;

        if(num_amostras == 2) {
            int lixo;
            cin >> lixo;
            cin >> lixo;

            cout << 2 << endl;
        }else {
            vector<int> amostras(num_amostras+2);
            for(int i=1;i<=num_amostras;++i) {
                cin >> amostras[i];
            }

            amostras[0] = amostras[amostras.size()-2];
            amostras[amostras.size()-1] = amostras[1];

            for(int i=1;i<=num_amostras;++i) {
                if(amostras[i-1] < amostras[i] and amostras[i] > amostras[i+1]) {
                    num_picos++;
                }
                if(amostras[i-1] > amostras[i] and amostras[i] < amostras[i+1]) {
                    num_picos++;
                }
            }

            cout << num_picos << endl;
        }

        cin >> num_amostras;
    }

    return 0;
}
