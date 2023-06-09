#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num_testes;
    cin >> num_testes;

    while(num_testes) {
        int x, y;
        cin >> x >> y;

        long double res_rafael, res_bento, res_carlos;
        res_rafael = pow(3 * x, 2) + pow(y, 2);
        res_bento = (2 * pow(x, 2)) + pow(5 * y, 2);
        res_carlos = (-100 * x) + (pow(y, 3));

        if(res_rafael > res_bento and res_rafael > res_carlos)
            cout << "Rafael ganhou" << endl;
        if(res_carlos > res_bento and res_carlos > res_rafael)
            cout << "Carlos ganhou" << endl;
        if(res_bento > res_carlos and res_bento > res_rafael)
            cout << "Beto ganhou" << endl;

        --num_testes;
    }

    return 0;
}
