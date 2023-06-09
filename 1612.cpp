#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {
    int num_instancias;
    cin >> num_instancias;

    for(int i=0;i<num_instancias;++i) {
        int size_tronco;
        cin >> size_tronco;

        cout << (int)ceil((size_tronco / 2.0)) << endl;
    }

    return 0;
}
