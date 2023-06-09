#include <iostream>
#include <algorithm>

using namespace std;

int mdc(int a, int b) {
    a = abs(a);
    b = abs(b);

    if(b > a)
        iter_swap(&a, &b);

    if(b == 0)
        return a;
    else
        return mdc(b, a%b);
}

int main() {
    int num_testes;
    cin >> num_testes;

    while(num_testes) {
        int n1, d1, n2, d2, n_res, d_res;
        char barra, operacao;

        cin >> n1 >> barra >> d1 >> operacao >> n2 >> barra >> d2;

        if(operacao == '+') {
            n_res = (n1*d2 + n2*d1);
            d_res = (d1 * d2);
        }
        if(operacao == '-') {
            n_res = (n1*d2 - n2*d1);
            d_res = (d1 * d2);
        }
        if(operacao == '*') {
            n_res = (n1*n2);
            d_res = (d1 * d2);
        }
        if(operacao == '/') {
            n_res = (n1*d2);
            d_res = (n2 * d1);
        }

        cout << n_res << "/" << d_res << " = " << (n_res / mdc(abs(n_res), abs(d_res))) << "/" << (d_res / mdc(abs(n_res), abs(d_res))) << endl;

        --num_testes;
    }

    return 0;
}
