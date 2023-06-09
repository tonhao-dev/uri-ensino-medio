#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num_canetas;
    while(cin >> num_canetas) {
        vector<bool> canetas(num_canetas, false);
        for(int i=0;i<num_canetas-1;++i) {
            int achada;
            cin >> achada;

            canetas[achada-1] = true;
        }

        for(int i=0;i<num_canetas;++i) {
            if(canetas[i] == false) {
                cout << i+1 << endl;
                break;
            }
        }
    }

    return 0;
}
