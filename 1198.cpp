#include <iostream>

using namespace std;

int main() {
    long long int num_hashmat, num_inimigos;

    while(cin >> num_hashmat >> num_inimigos)
        cout << (long long int)abs(num_hashmat - num_inimigos) << endl;

    return 0;
}
