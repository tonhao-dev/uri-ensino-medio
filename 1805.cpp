#include <iostream>

using namespace std;

int main() {
    unsigned long long int a, b, soma=0;
    cin >> a >> b;

    cout << ((a + b) * (b - a + 1)) / 2 << endl;

    return 0;
}
