#include <iostream>
#define long long big_int

using namespace std;

int main() {
    const int MAX = 1e6+6;

    big_int pd[MAX];
    big_int mod = 1e9+7;

    int n;
    cin >> n;

    pd[n] = 1;
    pd[n+1] = pd[n+2] = 0;

    for(int i=n-1; i>= 0; --i) {
        big_int v = n-i;
        pd[i] = (v*2LL * pd[i+1]) % mod;
        pd[i] = (pd[i] + (()))
    }

    return 0;
}