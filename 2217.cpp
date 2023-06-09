#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int num_instancias;
    cin >> num_instancias;

    for(int i=0;i<num_instancias;++i) {
        int n;
        cin >> n;

        if(n % 2 == 0)
            cout << 1 << endl;
        else
            cout << 9 << endl;
    }

    return 0;
}
