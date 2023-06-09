#include <iostream>

using namespace std;

int num_chamadas;

int fib(int n) {
    num_chamadas++;
    if(n < 2)
        return n;
    else
        return fib(n-1) + fib(n-2);
}

int main() {
    int num_testes;
    cin >> num_testes;

    for(int n_teste=0;n_teste<num_testes;++n_teste) {
        int n;
        num_chamadas = 0;
        cin >> n;

        long long int res = fib(n);
        cout << "fib(" << n << ") = " << num_chamadas-1 << " calls = " << res << endl;
    }

    return 0;
}
