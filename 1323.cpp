#include <iostream>
// O(1) --> (int)((1.0/6.0) * (n * (n+1) * (2*n + 1)))
using namespace std;

int num_quadrados(int n) {
    if(n == 1)
        return 1;
    else
        return num_quadrados(n-1) + n*n;
}

int main() {
    int n;
    cin >> n;

    while(n != 0) {
        cout << num_quadrados(n) << endl;
        cin >> n;
    }

    return 0;
}
