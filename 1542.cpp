#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double pg_dia, dias_adiantados, novo_pgdia;
    cin >> pg_dia;

    while(pg_dia != 0) {
        cin >> dias_adiantados >> novo_pgdia;

        int res = pg_dia * dias_adiantados * novo_pgdia;
        res = res / (novo_pgdia - pg_dia);

        if(res == 1) {
            cout << "1 pagina" << endl;
        } else {
            cout << res << " paginas" << endl;
        }
        cin >> pg_dia;
    }

    return 0;
}
