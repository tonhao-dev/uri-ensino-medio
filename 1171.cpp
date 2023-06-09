#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numeros(2001, 0);
    for(int i=0;i<n;++i) {
        int x;
        cin >> x;

        numeros[x]++;
    }

    for(int i=0;i<=2000;++i) {
        if(numeros[i] != 0)
            cout << i << " aparece " << numeros[i] << " vez(es)" << endl;
    }

    return 0;
}
