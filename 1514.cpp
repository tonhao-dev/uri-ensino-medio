#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int num_comp, num_problem;
    cin >> num_comp >> num_problem;

    while(num_comp != 0) {
        vector<vector<int>> matriz(num_comp, vector<int>(num_problem));
        vector<bool> caracteristicas(4, true);


        for(int i=0;i<num_comp;++i) {
            int num_resolvidos=0;
            for(int j=0;j<num_problem;++j) {
                cin >> matriz[i][j];

                if(matriz[i][j] == 1) {
                    num_resolvidos++;
                }
            }

            if(num_resolvidos == num_problem) {
                caracteristicas[0] = false;
            }
            if(num_resolvidos == 0) {
                caracteristicas[3] = false;
            }
        }

        for(int j=0;j<num_problem;++j) {
            int num_resolvidos=0;
            for(int i=0;i<num_comp;++i) {
                if(matriz[i][j] == 1) {
                    num_resolvidos++;
                }
            }

            if(num_resolvidos == num_comp) {
                caracteristicas[2] = false;
            }
            if(num_resolvidos == 0) {
                caracteristicas[1] = false;
            }
        }

        cout << count(caracteristicas.begin(), caracteristicas.end(), true) << endl;

        cin >> num_comp >> num_problem;
    }
}
