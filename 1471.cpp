#include <iostream>
#include <vector>
#define debug(x) cout << #x " = " << (x) << endl

using namespace std;

int main() {
    int num_voluntarios, num_retorno;
    while(cin >> num_voluntarios >> num_retorno) {
        vector<bool> voluntarios(num_voluntarios, false);
        for(int i=0;i<num_retorno;++i) {
            int id;
            cin >> id;

            voluntarios[id - 1] = true;
        }

        if(num_voluntarios == num_retorno) {
            cout << "*" << endl;
        } else {
            int num_mostrados = 0;
            for(int i=0;i<num_voluntarios;++i) {
                if(voluntarios[i] == false) {
                    cout << i+1 << " ";
                    num_mostrados++;
                }

                if(num_mostrados == (num_voluntarios - num_retorno))
                    break;
            }
            cout << endl;
        }
    }

    return 0;
}
