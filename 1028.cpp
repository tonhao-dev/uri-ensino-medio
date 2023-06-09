#include <iostream>
#include <algorithm>

using namespace std;

int mdc(int a, int b) {
    if(b > a) {
        iter_swap(&a, &b);
    }

    if(b == 0)
        return a;
    else
        return mdc(b, a%b);
}

int main() {
    int num_testes;
    cin >> num_testes;

    for(int i=0;i<num_testes;++i) {
        int a, b;
        cin >> a >> b;

        cout << mdc(a, b) << endl;
    }

    return 0;
}
